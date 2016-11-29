#include "MultiInclude.h"

void Bot::AutoRecoveryThread(const unsigned int key, const int status, const int value)
{
	while (Variable.Flag.EnableBot)
	{
		if (MS.Data.IsLoggingIn())
		{
			switch (status)
			{
			case Recovery_Hp:
				if (MS.Data.GetCurrentHp() < value)
				{
					MS.PushKey(key);
				}

				break;

			case Recovery_Mp:
				if (MS.Data.GetCurrentMp() < value)
				{
					MS.PushKey(key);
				}

				break;

			}
		}
		
		Sleep(100);
	}
}

void Bot::AutoActionThread(const unsigned int key, const unsigned long delay)
{
	while (Variable.Flag.EnableBot)
	{
		if (MS.Data.IsLoggingIn())
		{
			if (!Variable.Flag.CastingSkill)
			{
				MS.PushKey(key);

				Sleep(delay);
			}
		}

		Sleep(1);
	}
}

void Bot::AutoSkillThread(const unsigned int key, const unsigned long delay)
{
	while (Variable.Flag.EnableBot)
	{
		if (MS.Data.IsLoggingIn())
		{
			if (!Variable.Flag.CastingSkill)
			{
				Variable.Flag.CastingSkill = true;

				MS.PushKey(key);

				Variable.Flag.CastingSkill = false;

				Sleep(delay);
			}
		}

		Sleep(100);
	}
}

void Bot::MuLungDojoThread()
{
	static const int entranceMap = 925020000;
	static const int hallMap     = 925020001;
	static const int exitMap     = 925020002;
	static const int rooftopMap  = 925020003;
	static const int restMaps[]  = {925060600, 925061200, 925061800, 925062400, 925063000, 925063600, 925064200};
	static const int floorMaps[] = {925060100, 925060200, 925060300, 925060400, 925060500, 925060700, 925060800, 925060900, 925061000, 925061100, 925061300, 925061400, 925061500, 925061600, 925061700,
									925061900, 925062000, 925062100, 925062200, 925062300, 925062500, 925062600, 925062700, 925062800, 925062900, 925063100, 925063200, 925063300, 925063400, 925063500,
									925063700, 925063800, 925063900, 925064000, 925064100, 925064300, 925064400, 925064500, 925064600, 925064700};

	enum mapType
	{
		null, entrance, hall, exit, rooftop, rest, floor
	};

	auto isMapType = [=](int map) -> int
	{
		if (map == entranceMap)
		{
			return entrance;
		}

		if (map == hallMap)
		{
			return hall;
		}

		if (map == exitMap)
		{
			return exit;
		}

		if (map == rooftopMap)
		{
			return rooftop;
		}

		for (int i = 0; i < _countof(restMaps); i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (map == (restMaps[i] + j))
				{
					return rest;
				}
			}
		}

		for (int i = 0; i < _countof(floorMaps); i++)
		{
			for (int j = 0; j < 10; j++)
			{
				if (map == (floorMaps[i] + j))
				{
					return floor;
				}
			}
		}

		return null;
	};

	while (Variable.Flag.EnableBot)
	{
		switch (isMapType(MS.Data.GetMapId()))
		{
		case entrance:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			Teleport(-1176, -29);
			Sleep(200);
			MS.PushKey(VK_UP);

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;

		case hall:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			SendPacket("71 00 DD 7B 02 00 00 00 00 00"); // Talk to panda in hall
			Sleep(1000);
			MS.PushKey(VK_RETURN);
			Sleep(1000);
			MS.PushKey(VK_DOWN);
			MS.PushKey(VK_DOWN);
			MS.PushKey(VK_RETURN);
			Sleep(500);
			SendPacket("DF 00 03 70 1C"); // Reset blocked quest

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;

		case exit:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			Teleport(349, 7);
			Sleep(200);
			MS.PushKey(VK_UP);

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;

		case rooftop:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			Teleport(-300, -380);

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;

		case rest:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			Teleport(93, -365);
			Sleep(200);
			MS.PushKey(VK_V);
			Sleep(1000);
			MS.PushKey(VK_DOWN);
			MS.PushKey(VK_RETURN);

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;

		case floor:
			Variable.Flag.StopBot = true;

			Sleep(1200);

			Variable.Flag.KamiVac = true;
			Variable.Flag.StopBot = false;

			while (!MS.Data.IsMuLungDojoCleared())
			{
				Sleep(1);
			}

			int prevMap = MS.Data.GetMapId();
			
			for (int i = 0; i < 10; i++)
			{
				if (prevMap == (925064700 + i)) // If 47th floor
				{
					Variable.Flag.KamiVacLootIncluded = true;

					Sleep(200);

					while (MS.Data.GetItemCount() > 0)
					{
						Sleep(1);
					}

					Variable.Flag.KamiVacLootIncluded = false;
				}
			}

			Variable.Flag.KamiVac = false;
			Variable.Flag.StopBot = true;

			Teleport(428, 7);

			while (prevMap == MS.Data.GetMapId())
			{
				MS.PushKey(VK_UP);
				Sleep(1);
			}

			Sleep(1200);

			Variable.Flag.StopBot = false;

			break;
		}

		Sleep(1);
	}
}

void Bot::CreateAutoRecoveryThread(const unsigned int key, const int status, const int value)
{
	new boost::thread(&Bot::AutoRecoveryThread, this, key, status, value);
}

void Bot::CreateAutoActionThread(const unsigned int key, const unsigned long delay)
{
	new boost::thread(&Bot::AutoActionThread, this, key, delay);
}

void Bot::CreateAutoSkillThread(const unsigned int key, const unsigned long delay)
{
	new boost::thread(&Bot::AutoSkillThread, this, key, delay);
}

void Bot::EnableBot(const int method)
{
	Variable.Flag.EnableBot = true;

	switch (method)
	{
	case Method_KamiVac:
		Variable.Flag.KamiVac = true;

		break;

	case Method_KamiVacLootIncluded:
		Variable.Flag.KamiVac = true;
		Variable.Flag.KamiVacLootIncluded = true;

		break;

	case Method_MuLungDojoToFarmMugongsSoul:
		new boost::thread(&Bot::MuLungDojoThread, this);

		break;
	}
}

void Bot::DisableBot()
{
	SecureZeroMemory(&Variable.Flag, sizeof(Variable.Flag));
	MS.Packet.ClearBlockRecvPacketList();
}

void Bot::Teleport(const int x, const int y)
{
	Variable.TeleportPosition.x = x;
	Variable.TeleportPosition.y = y;
	Variable.Flag.Teleporting = true;
}

void Bot::SendPacket(const QString packet)
{
	Variable.SendPacketCharacters = packet;
	Variable.Flag.SendingPacket = true;
}