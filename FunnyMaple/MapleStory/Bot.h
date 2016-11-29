#pragma once

#define Recovery_Hp 1
#define Recovery_Mp 2

#define Method_KamiVac 1
#define Method_KamiVacLootIncluded 2
#define Method_MuLungDojoToFarmMugongsSoul 3

class Bot
{
public:
	struct _Variable
	{
		struct _Flag
		{
			bool EnableBot, StopBot, CastingSkill, Teleporting, SendingPacket;
			bool KamiVac, KamiVacLootIncluded;
		} Flag;

		POINT TeleportPosition;
		QString SendPacketCharacters;
	} Variable;

private:
	void AutoRecoveryThread(const unsigned int key, const int status, const int value);
	void AutoActionThread(const unsigned int key, const unsigned long delay);
	void AutoSkillThread(const unsigned int key, const unsigned long delay);
	void AutoChaosLockThread(const unsigned int key, const int count);
	void AutoFuryAttackThread(const unsigned int key, const int fury);

	void MuLungDojoThread();

public:
	void CreateAutoRecoveryThread(const unsigned int key, const int status, const int value);
	void CreateAutoActionThread(const unsigned int key, const unsigned long delay);
	void CreateAutoSkillThread(const unsigned int key, const unsigned long delay);
	void CreateAutoChaosLockThread(const unsigned int key, const int count);
	void CreateAutoFuryAttackThread(const unsigned int key, const int fury);

	void EnableBot(const int method);
	void DisableBot();

	void Teleport(const int x, const int y);
	void SendPacket(const QString packet);

	void Initialize();
};