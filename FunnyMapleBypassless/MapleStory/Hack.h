#pragma once

class Hack
{
public:
	struct _Variable
	{
		struct _Flag
		{
			bool FullGodMode, FullGuard, GenericNoDelay, JumpDownAnywhere, MobFreezeStrong, MobDisarm, NoMobActionByDamaged, MobFreeze, NoMeteor, ResetBlockedQuests;
		} Flag;

		int CurrentHp, CurrentMp, CurrentExp;
		int MaximumHp, MaximumMp, MaximumExp;

		POINT ItemPosition;
	} Variable;

private:
	void WriteValueThread();

public:
	void KamiVac();
	void ResetBlockedQuests();
	void SpamDrop10MesosPackets();

	void HandleLoggingIn();

	void Initialize();
};