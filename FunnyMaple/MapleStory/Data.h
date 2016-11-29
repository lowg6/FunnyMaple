#pragma once

class Data
{
public:
	int GetCurrentHp();
	int GetCurrentMp();
	int GetCurrentExp();
	int GetMaximumHp();
	int GetMaximumMp();
	int GetMaximumExp();
	POINT GetCharacterPosition();
	POINT GetItemPosition();
	bool GetMobPosition(POINT &p);
	int GetAttackCount();
	int GetMobCount();
	int GetItemCount();
	int GetChannel();
	int GetMapId();
	int GetPeopleCount();
	int GetWorldIndex();
	char *GetWorldName(const int index);
	bool IsMuLungDojoCleared();

	void SetAttackCount(const int count);
	void Teleport(const int x, const int y);
};