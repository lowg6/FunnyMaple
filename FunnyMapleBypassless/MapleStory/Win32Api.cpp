#include "MultiInclude.h"

DWORD __stdcall GetTickCount_Hook()
{
	if (MS.Win32Api.Variable.Flag.SpeedHack)
	{
		return MS.Win32Api.Variable.SpeedHackTickCount;
	}

	return MS.Win32Api.GetTickCount();
}

DWORD __stdcall timeGetTime_Hook()
{
	if (MS.Win32Api.Variable.Flag.SpeedHack)
	{
		return MS.Win32Api.Variable.SpeedHackTickCount;
	}

	return MS.Win32Api.timeGetTime();
}

HWND __stdcall CreateWindowExA_Hook(DWORD dwExStyle, LPCSTR lpClassName, LPCSTR lpWindowName, DWORD dwStyle, int x, int y, int nWidth, int nHeight, HWND hWndParent, HMENU hMenu, HINSTANCE hInstance, LPVOID lpParam)
{
	if (strcmp(lpClassName, "MapleStoryClass") == 0)
	{
		MS.Variable.MapleStoryWindow = MS.Win32Api.CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, x, y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);

		return MS.Variable.MapleStoryWindow;
	}

	return MS.Win32Api.CreateWindowExA(dwExStyle, lpClassName, lpWindowName, dwStyle, x, y, nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam);
}

void Win32Api::SetSpeedHackAcceleration(float acceleration)
{
	Variable.SpeedHackAcceleration = acceleration;
}

void Win32Api::SpeedHackTickThread()
{
	SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_TIME_CRITICAL);

	Variable.SpeedHackTickCount = GetTickCount();
	Variable.SpeedHackAcceleration = 1;

	while (true)
	{	
		Variable.SpeedHackTickCount += Variable.SpeedHackAcceleration;

		timeBeginPeriod(1);
		Sleep(1);
		timeEndPeriod(1);
	}
}

void Win32Api::Initialize()
{
	PtInRect = ::PtInRect;
	PostMessageA = ::PostMessageA;
	SendMessageA = ::SendMessageA;
	CreateWindowExA = ::CreateWindowExA;
	timeBeginPeriod = ::timeBeginPeriod;
	timeEndPeriod = ::timeEndPeriod;
	GetTickCount = ::GetTickCount;
	timeGetTime = ::timeGetTime;

	new boost::thread(&Win32Api::SpeedHackTickThread, this);

	Detour::SetHook(true, (void **)&CreateWindowExA, CreateWindowExA_Hook);
	//Detour::SetHook(true, (void **)&GetTickCount, GetTickCount_Hook);
	//Detour::SetHook(true, (void **)&timeGetTime, timeGetTime_Hook);
}