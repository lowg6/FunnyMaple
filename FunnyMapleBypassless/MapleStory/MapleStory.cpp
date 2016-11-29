#include "MultiInclude.h"

MapleStory MS;

void MapleStory::ClearMemoryThread(const HANDLE process)
{
	while (true)
	{
		EmptyWorkingSet(process);

		Sleep(1000);
	}
}

HWND MapleStory::FindExactWindow(const bool visible, const unsigned long pid, const unsigned short *cls)
{
	unsigned long temp;
	unsigned short buf[256];

	for(HWND hwnd = GetTopWindow(NULL); hwnd != NULL; hwnd = GetNextWindow(hwnd, GW_HWNDNEXT))
	{
		GetWindowThreadProcessId(hwnd, &temp);
			
		if (temp != pid)
		{
			continue;
		}

		if (!GetClassName(hwnd, buf, (sizeof(buf) / sizeof(unsigned short))))
		{
			continue;
		}

		if (wcscmp(buf, cls))
		{
			continue;
		}

		if (!visible)
		{
			return hwnd;
		}

		if (IsWindowVisible(hwnd))
		{
			return hwnd;
		}
	}

	return NULL;
}

void MapleStory::PushStartUpDialog()
{
	HWND hwnd;
		
	do
	{
		hwnd = FindExactWindow(true, GetCurrentProcessId(), L"StartUpDlgClass");
		hwnd = FindWindowEx(hwnd, NULL, L"Button", L"Play!");

		Sleep(1);
	}
	while (hwnd == NULL);
		
	MS.Win32Api.SendMessageA(hwnd, WM_LBUTTONDOWN, NULL, NULL);
	MS.Win32Api.SendMessageA(hwnd, WM_LBUTTONUP, NULL, NULL);
}

void MapleStory::PushKey(const unsigned int key)
{
	WPARAM param = ((MapVirtualKey(key, 0) << 16) + 1);

	MS.Win32Api.PostMessageA(Variable.MapleStoryWindow, WM_KEYDOWN, key, param);
	MS.Win32Api.PostMessageA(Variable.MapleStoryWindow, WM_KEYUP, key, param);
}

void MapleStory::Initialize()
{
	while (FindExactWindow(true, GetCurrentProcessId(), L"StartUpDlgClass") == NULL)
	{
		Sleep(1);
	}

	Win32Api.Initialize();
	Hack.Initialize();

	new boost::thread(&MapleStory::ClearMemoryThread, this, GetCurrentProcess());

	PushStartUpDialog();
}