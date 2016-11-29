#include "MultiInclude.h"

void __declspec(naked) EnterUsernamePassword_Hook()
{
	static const unsigned long rtn = (Address::Login::EnterUsernamePassword + 5);

	__asm
	{
		pushad
		call Login::HandleOutEnterUsernamePassword
		popad

		push ebp
		mov ebp,esp
		push -1
		jmp [rtn]
	}
}

void __declspec(naked) EnterSecondaryPassword_Hook()
{
	static const unsigned long rtn = (Address::Login::EnterSecondaryPassword + 5);

	__asm
	{
		pushad
		call Login::HandleOutEnterSecondaryPassword
		popad

		ret 4
	}
}

void __declspec(naked) SelectWorldChannel_Hook()
{
	static const unsigned long rtn = (Address::Login::SelectWorldChannel + 5);
	
	__asm
	{
		pushad
		call Login::HandleOutSelectWorldChannel
		popad

		push esi
		mov esi,ecx
		cmp [esi+0x2AC],1
		jmp [rtn]
	}
}

void __declspec(naked) SelectCharacter_Hook()
{
	static const unsigned long rtn = (Address::Login::SelectCharacter + 5);

	__asm
	{
		pushad
		call Login::HandleOutSelectCharacter
		popad

		push ebp
		push esi
		push edi
		mov esi,ecx
		jmp [rtn]
	}
}

void __declspec(naked) ErrorDialog_Hook()
{
	static const unsigned long rtn = (Address::Login::ErrorDialog + 5);

	__asm
	{
		pushad 
		push -1
		call dword ptr [GetCurrentProcess]
		push eax
		call dword ptr [TerminateProcess]
		popad

		ret
	}
}

bool Login::ReadLoginInfomationFromSharedMemory()
{
	QSharedMemory *sharedMemory = new QSharedMemory("LoginInfomationSharedMemory");

	if (!sharedMemory->attach())
	{
		return false;
	}
	
	QBuffer buffer;
	QDataStream in(&buffer);

	buffer.setData((char *)sharedMemory->constData(), sharedMemory->size());

	if (!buffer.open(QBuffer::ReadOnly))
	{
		return false;
	}

	if (!sharedMemory->lock())
	{
		return false;
	}

	QByteArray bytes;

	in >> bytes;

	if (!sharedMemory->unlock())
	{
		return false;
	}

	if (!sharedMemory->detach())
	{
		return false;
	}

	QStringList list = QString::fromUtf8(bytes.data()).split("|");

	Variable.Username = list.at(0);
	Variable.Password = list.at(1);
	Variable.SecondaryPassword = list.at(2);
	Variable.World = list.at(3).toInt();
	Variable.Channel = list.at(4).toInt();
	Variable.Character = list.at(5).toInt();

	sprintf(MS.Variable.WindowTitle, "%s_0x%X(%d)", Variable.Username.toUtf8().data(), GetCurrentProcessId(), GetCurrentProcessId());

	return true;
}

void Login::SelectWorldChannelThread()
{
	unsigned long old = __readfsdword(0x18);

	__writefsdword(0x18, 0x7EFDD000);

	__asm
	{
		pushad
		push 2000
		call dword ptr [Sleep]
		popad

		pushad
		push [MS.Login.Variable.Channel]
		push [MS.Login.Variable.World]
		mov ecx,[Address::Login::CLogin]
		mov ecx,[ecx]
		call [Address::MapleStory::CLogin::SendLoginPacket]
		popad
	}

	__writefsdword(0x18, old);
}

void Login::HandleOutEnterUsernamePassword()
{
	QStringList username, password;

	username = Converter::StringToAsciiStringList(MS.Login.Variable.Username);
	password = Converter::StringToAsciiStringList(MS.Login.Variable.Password);

	MS.Packet.SendPacket("37 00 7A 79 19 3F 6C EA 5F 57 1C 20 00 00 00 00 EC E9 00 00 00 00 02 00 " + QString().sprintf("%02X", username.count()) + " 00 " + username.join(" ") + " " + QString().sprintf("%02X", password.count()) + " 00 " + password.join(" ") + " 00");
}

void Login::HandleOutEnterSecondaryPassword()
{
	QStringList secondaryPassword;

	secondaryPassword = Converter::StringToAsciiStringList(MS.Login.Variable.SecondaryPassword);

	MS.Packet.SendPacket("3E 00 " + QString().sprintf("%02X", secondaryPassword.count()) + " 00 " + secondaryPassword.join(" ") + " 00 00 00 00");
}

void Login::HandleOutSelectWorldChannel() // this function for a bit bug
{
	new boost::thread(&Login::SelectWorldChannelThread, this);
}

void Login::HandleOutSelectCharacter()
{
	__asm
	{
		pushad
		push [MS.Login.Variable.Character]
		call [Address::MapleStory::CUIAvatar::SelectCharacter]
		popad

		pushad
		push 2000
		call dword ptr [Sleep]
		popad

		pushad
		push 0
		mov ecx,[Address::Login::CLogin]
		mov ecx,[ecx]
		call [Address::MapleStory::CLogin::SendSelectCharPacket]
		popad
	}
}

void Login::Initialize()
{
	while (!ReadLoginInfomationFromSharedMemory())
	{
		Sleep(1);
	}

	Assembly::WriteJump(Address::Login::EnterUsernamePassword, EnterUsernamePassword_Hook, 0);
	Assembly::WriteJump(Address::Login::EnterSecondaryPassword, EnterSecondaryPassword_Hook, 2);
	Assembly::WriteJump(Address::Login::SelectWorldChannel, SelectWorldChannel_Hook, 5);
	Assembly::WriteJump(Address::Login::SelectCharacter, SelectCharacter_Hook, 0);
	Assembly::WriteJump(Address::Login::ErrorDialog, ErrorDialog_Hook, 2);
}