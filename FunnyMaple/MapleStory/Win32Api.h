#pragma once

class Win32Api
{
public:
	struct _Variable
	{
		struct _Flag
		{
			bool SpeedHack;
		} Flag;

		unsigned long SpeedHackTickCount;
		float SpeedHackAcceleration;
	} Variable;

public:
	decltype(&::PtInRect) PtInRect;
	decltype(&::PostMessageA) PostMessageA;
	decltype(&::SendMessageA) SendMessageA;
	decltype(&::CreateWindowExA) CreateWindowExA;
	decltype(&::timeBeginPeriod) timeBeginPeriod;
	decltype(&::timeEndPeriod) timeEndPeriod;
	decltype(&::GetTickCount) GetTickCount;
	decltype(&::timeGetTime) timeGetTime;

public:
	void SetSpeedHackAcceleration(float acceleration);

	void SpeedHackTickThread();

	void Initialize();
};