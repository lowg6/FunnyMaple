#include "MultiInclude.h"

bool Packet::TokenizePacket(QString packet, QByteArray &data)
{
	packet.trimmed();
	
	if (packet.isEmpty())
	{
		return false;
	}

	QStringList list = packet.split(" ");

	for (int i = 0; i < list.count(); i++)
	{
		QString str = list.at(i);

		if (str.length() > 2)
		{
			return false;
		}

		for (int j = 0; j < str.length(); j++)
		{
			QChar c = str.at(j);

			if (c == '*')
			{
				c = QString().sprintf("%X", Random::GenerateNumberInRange(0, 15)).at(0);
			}

			if (!isxdigit(c.toAscii()))
			{
				return false;
			}

			str.replace(j, 1, c);
		}

		if (str.length() == 1)
		{
			str = ("0" + str);
		}

		list.replace(i, str);
	}

	data = QByteArray::fromHex(list.join("").toUtf8());

	return true;
}

void Packet::InjectPacket(const COutPacket *packet)
{
	__asm
	{
		pushad

		push End
		push [packet]
		push [Address::Packet::Trampoline]

		mov ecx,[Address::Packet::CClientSocket]
		mov ecx,[ecx]

		jmp [Address::MapleStory::CClientSocket::SendPacket]
End:
		popad
	}
}

void Packet::HandleSendPacket(const COutPacket *packet, const unsigned long returnAddress)
{
	if (packet == NULL)
	{
		return;
	}
	
	if (packet->Size < 2)
	{
		return;
	}

	unsigned short &header = *packet->Header;
	QStringList data;
		
	for (int i = 0; i < packet->Size; i++)
	{
		data.append(QString().sprintf("%02X", packet->Data[i]));
	}

	QString spacedData = data.join(" ");

	if (spacedData.left(5) == "D1 00") // open character info
	{
		if (MainFormClass->ui->checkBoxOneClickBoardGameDisconnect->isChecked())
		{
			QString uid = (data.at(6) + " " + data.at(7) + " " + data.at(8) + " " + data.at(9));

			MS.Packet.SendPacket("2B 01 10 0D 00"); // open board game ui
			Sleep(50);
			MS.Packet.SendPacket("2B 01 75 " + uid); // join player to game by uid

			for (int i = 0; i < 20; i++)
			{
				MS.Packet.SendPacket("2B 01 7C 00"); // start game
			}

			MS.Packet.SendPacket("2B 01 1C"); // close ui
		}
	}
}

void Packet::HandleRecvPacket(const CInPacket *packet, const unsigned long returnAddress)
{
	if (packet == NULL)
	{
		return;
	}
	
	if (packet->Size < 2)
	{
		return;
	}
		
	unsigned short &header = packet->HeaderPtr->Header;
	QStringList data;
		
	for (int i = 0; i < packet->Size; i++)
	{
		data.append(QString().sprintf("%02X", packet->DataPtr->Data[i]));
	}

	QString spacedData = data.join(" ");

	for (int i = 0; i < MS.Packet.Variable.BlockRecvPacketList.count(); i++)
	{
		QString str = MS.Packet.Variable.BlockRecvPacketList.at(i);

		if (str == spacedData.left(str.count()))
		{
			header = -1;
		}
	}
}

bool Packet::SendPacket(const QString packet)
{
	QByteArray data;
	
	if (!TokenizePacket(packet, data))
	{
		return false;
	}

	COutPacket p;

	SecureZeroMemory(&p, sizeof(COutPacket));

	p.Size = data.size();
	p.Data = (unsigned char *)data.data();
	
	try
	{
		InjectPacket(&p);

		return true;
	}
	catch (...)
	{
		return false;
	}
}

void Packet::AddToBlockRecvPacketList(const QString packet)
{
	Variable.BlockRecvPacketList.append(packet);
}

void Packet::RemoveFromBlockRecvPacketList(const QString packet)
{
	Variable.BlockRecvPacketList.removeAll(packet);
}

void Packet::ClearBlockRecvPacketList()
{
	Variable.BlockRecvPacketList.clear();
}