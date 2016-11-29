#pragma once

namespace Process
{
	bool PassLoginInfomationToDll(const QString username, const QString password, const QString secondaryPassword, const int world, const int channel, const int character);
	bool InjectDll(const unsigned long pid, const char *path);
	bool IsProcessAlive(const unsigned long pid);
	HWND FindExactWindow(const bool visible, const unsigned long pid, const unsigned short *cls);
}

namespace MapleStory
{
	const QString WorldNameList[] = {"Kaede", "Momiji", "Anzu", "Karin", "Sakura", "Sumomo", "Popura", "Azusa", "None", "Natsume", "None", "None", "Mizuki", "Tsutsuji", "Ibara"};
	const int WorldChannelList[] = {18, 14, 14, 14, 14, 10, 10, 18, 0, 10, 0, 0, 10, 10, 10};

	QString GetWorldName(const int index);
	int GetWorldCount();
	int GetWorldIndex(const QString name);
	int GetWorldChannel(const int index);
}