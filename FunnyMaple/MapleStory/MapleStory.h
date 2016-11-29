#pragma once

#include "Address.h"

#include "Packet.h"
#include "Win32Api.h"
#include "Bypass.h"
#include "Data.h"
#include "Hack.h"
#include "Bot.h"
#include "Item.h"
#include "Login.h"

class MapleStory
{
public:
	Win32Api Win32Api;
	Bypass Bypass;
	Data Data;
	Hack Hack;
	Bot Bot;
	Item Item;
	Login Login;
	Packet Packet;

public:
	struct _Variable
	{
		HWND MapleStoryWindow;
		char WindowTitle[128];
	} Variable;

public:
	void ClearMemoryThread(const HANDLE process);

	HWND FindExactWindow(const bool visible, const unsigned long pid, const unsigned short *cls);
	void PushStartUpDialog();
	void PushKey(const unsigned int key);

	void Initialize();
};

extern MapleStory MS;