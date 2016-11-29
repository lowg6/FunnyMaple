#pragma once

class Hack
{
public:
	struct _Variable
	{
		struct _Flag
		{
			bool FullGodMode, FullGuard, NoKnockBack, GenericNoDelay, ReactorDem, JumpDownAnywhere, MobFreezeStrong, MobDisarm, NoMobActionByDamaged, MobFreeze, NoMeteor, ResetBlockedQuests, FullMapItemVac;
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

	void HandleLoggingIn();

	void Initialize();
};