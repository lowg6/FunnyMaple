#pragma once

class Packet
{
private:
	struct COutPacket
	{
		int Loopback;
		
		union
		{
			unsigned char *Data;
			void *Unknown;
			unsigned short *Header;
		};
		
		unsigned long Size;
		unsigned int Offset;
		int EncryptedByShanda;
	};

	struct CInPacket
	{
		int Loopback;
		int State;

		union
		{
			void *Data;

			struct
			{
				unsigned long Unknown;
				unsigned short Header;
			} *HeaderPtr;

			struct
			{
				unsigned long Unknown;
				unsigned char Data[0];
			} *DataPtr;
		};
		
		unsigned short Size;
		unsigned short RawSeq;
		unsigned short DataLength;
		unsigned short Unknown1;
		unsigned int Offset;
		void *Unknown2;
	};

private:
	struct _Variable
	{
		QStringList BlockRecvPacketList;
	} Variable;

private:
	bool TokenizePacket(QString packet, QByteArray &data);
	void InjectPacket(const COutPacket *packet);

	void HandleSendPacket(const COutPacket *packet, const unsigned long returnAddress);
	void HandleRecvPacket(const CInPacket *packet, const unsigned long returnAddress);

public:
	bool SendPacket(const QString packet);

	void AddToBlockRecvPacketList(const QString packet);
	void RemoveFromBlockRecvPacketList(const QString packet);
	void ClearBlockRecvPacketList();
};