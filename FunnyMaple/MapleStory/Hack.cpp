#include "MultiInclude.h"

void __declspec(naked) LoggingIn_Hook()
{
	static const unsigned long rtn = (Address::Hack::LoggingIn + 5);

	__asm
	{
		pushad
		call Hack::HandleLoggingIn
		popad

		push ebp
		mov ebp,esp
		and esp,-8
		jmp [rtn]
	}
}

void __declspec(naked) StatHook_Hook()
{
	static const unsigned long rtn = (Address::Hack::StatHook + 5);
	
	__asm
	{
		push eax
		mov eax,[esp+8]
		mov [MS.Hack.Variable.CurrentHp],eax
		mov eax,[esp+0xC]
		mov [MS.Hack.Variable.MaximumHp],eax
		mov eax,[esp+0x10]
		mov [MS.Hack.Variable.CurrentMp],eax
		mov eax,[esp+0x14]
		mov [MS.Hack.Variable.MaximumMp],eax
		mov eax,[esp+0x18]
		mov [MS.Hack.Variable.CurrentExp],eax
		mov eax,[esp+0x20]
		mov [MS.Hack.Variable.MaximumExp],eax
		pop eax

		push -1
		push [Address::Hack::StatHook_Push]
		jmp [rtn]
	}
}

void __declspec(naked) ItemHook_Hook()
{
	static const unsigned long rtn = (Address::Hack::ItemHook + 5);
	
	__asm
	{
		mov [MS.Hack.Variable.ItemPosition.x],ebp
		mov [MS.Hack.Variable.ItemPosition.y],eax
		push eax
		push ebp
		lea ecx,[esp+0x30]
		jmp [rtn]
	}
}

void __declspec(naked) FullGodMode_Hook()
{
	static const unsigned long rtn = (Address::Hack::FullGodMode + 5);
	static unsigned long time;
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.FullGodMode],1
		jne Normal
		pushad
		call dword ptr [timeGetTime]
		sub eax,[time]
		cmp eax,58000
		popad
		jb Ignore
		pushad
		call dword ptr [timeGetTime]
		mov [time],eax
		popad
Normal:
		push -1
		push [Address::Hack::FullGodMode_Push]
		jmp [rtn]
Ignore:
		ret 0x2C
	}
}

void __declspec(naked) FullGuard_Hook()
{
	static const unsigned long rtn = (Address::Hack::FullGuard + 5);
	static short count;
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.FullGuard],1
		jne Normal
		cmp [count],7
		jb Guard
		mov [count],0
Normal:
		call [Address::MapleStory::_ZtlSecureFuse_long_]
		jmp [rtn]
Guard:
		inc [count]
		jmp [rtn]
	}
}

void __declspec(naked) NoKnockBack_Hook()
{
	static const unsigned long rtn = (Address::Hack::NoKnockBack + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.NoKnockBack],1
		jne Normal
		ret 0x14
Normal:
		push esi
		mov esi,ecx
		mov ecx,[esp+8]
		jmp [rtn]
	}
}

void __declspec(naked) GenericNoDelay_Hook()
{
	static const unsigned long rtn = (Address::Hack::GenericNoDelay + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.GenericNoDelay],1
		jne Normal
		mov [ebp-0x2F58],1
Normal:
		mov edx,[ebp-0x2F58]
		jmp [rtn]
	}
}

void __declspec(naked) UnlimitedMp_Hook()
{
	static const unsigned long rtn = (Address::Hack::UnlimitedMp + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.GenericNoDelay],1
		jne Normal
		xor edi,edi
		jmp [rtn]
Normal:
		test edi,edi
		jnl Jump
		xor edi,edi
		jmp [rtn]
Jump:
		jmp [Address::Hack::UnlimitedMp_Jnl]
	}
}

void __declspec(naked) ReactorDem_Hook()
{
	static const unsigned long rtn = (Address::Hack::ReactorDem + 5);
			
	__asm
	{
		call dword ptr [IntersectRect]
		cmp [MS.Hack.Variable.Flag.ReactorDem],1
		jne Normal
		mov eax,1
Normal:
		jmp [rtn]
	}
}

void __declspec(naked) JumpDownAnywhere_Hook()
{
	static const unsigned long rtn = (Address::Hack::JumpDownAnywhere + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.JumpDownAnywhere],1
		jne Normal
		jmp [Address::Hack::JumpDownAnywhere_End]
Normal:
		sub eax,5
		cmp eax,[esp+0x10]
		jmp [rtn]
	}
}

void __declspec(naked) MobFreeze_Hook()
{
	static const unsigned long rtn = (Address::Hack::MobFreeze + 5);
			
	__asm
	{
		push ecx
		cmp [MS.Hack.Variable.Flag.MobFreeze],1
		jne Normal
		mov ecx,[Address::Hack::MobFreeze_Offset1]
		mov dword ptr [esi+ecx],4
		mov ecx,[Address::Hack::MobFreeze_Offset2]
		mov dword ptr [esi+ecx],0
Normal:
		mov ecx,esi
		call edx
		jmp [rtn]
	}
}

void __declspec(naked) MobFreezeStrong_Hook()
{
	static const unsigned long rtn = (Address::Hack::MobFreezeStrong + 5);
			
	__asm
	{
		mov [esp+0x18],eax
		cmp [MS.Hack.Variable.Flag.MobFreezeStrong],1
		jne Normal
		jmp [Address::Hack::MobFreezeStrong_Je]
Normal:
		test eax,eax
		jmp [rtn]
	}
}

void __declspec(naked) MobDisarm_Hook()
{
	static const unsigned long rtn = (Address::Hack::MobDisarm + 5);
			
	__asm
	{
		add esp,8
		cmp [MS.Hack.Variable.Flag.MobDisarm],1
		jne Normal
		jmp [Address::Hack::MobDisarm_Jg]
Normal:
		cmp eax,-1
		jmp [rtn]
	}
}

void __declspec(naked) NoMobActionByDamaged_Hook()
{
	static const unsigned long rtn = (Address::Hack::NoMobActionByDamaged + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.NoMobActionByDamaged],1
		jne Normal
		ret 0x58
Normal:
		push -1
		push [Address::Hack::NoMobActionByDamaged_Push]
		jmp [rtn]
	}
}

void __declspec(naked) NoMeteor_Hook()
{
	static const unsigned long rtn = (Address::Hack::NoMeteor + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.NoMeteor],1
		jne Normal
		ret
Normal:
		push ebp
		mov ebp,esp
		and esp,-8
		jmp [rtn]
	}
}

void __declspec(naked) PtInRect_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::FullMapItemVac1_Rtn]
		je Main1
		cmp eax,[Address::Hack::FullMapItemVac2_Rtn]
		je Main2
End:
		pop eax
		jmp dword ptr [PtInRect]

Main1:
		cmp [MS.Hack.Variable.Flag.FullMapItemVac],1
		jne End
		pop eax
		mov eax,1
		ret 0xC
Main2:
		cmp [MS.Hack.Variable.Flag.FullMapItemVac],1
		jne End
		pop eax
		mov eax,[esp+0x58]
		push ebx
		mov ebx,[esp+0xC]
		mov [eax],ebx
		mov ebx,[esp+0x10]
		mov [eax+4],ebx
		pop ebx
		mov eax,1
		ret 0xC
	}
}

void __declspec(naked) FullMapItemVac_Hook()
{
	static const unsigned long rtn = (Address::Hack::FullMapItemVac3 + 5);
			
	__asm
	{
		cmp [MS.Hack.Variable.Flag.FullMapItemVac],1
		jne Normal
		mov ecx,esi
		call edx
		jmp [Address::Hack::FullMapItemVac3_Je]
Normal:
		mov ecx,esi
		call edx
		test eax,eax
		jmp [rtn]
	}
}

void Hack::WriteValueThread()
{
	while (true)
	{
		if (MS.Data.GetAttackCount() > 90)
		{
			MS.Data.SetAttackCount(0);
		}

		Sleep(1);
	}
}

void Hack::KamiVac()
{
	if (!MS.Bot.Variable.Flag.KamiVac)
	{
		return;
	}

	if (MS.Data.GetPeopleCount() > 0)
	{
		return;
	}

	POINT p;

	if (MS.Data.GetItemCount() > 0)
	{
		if (MS.Bot.Variable.Flag.KamiVacLootIncluded)
		{
			p = MS.Data.GetItemPosition();

			MS.Data.Teleport(p.x, p.y);

			return;
		}
	}
	
	if (MS.Data.GetMobCount() > 0)
	{
		if (!MS.Data.GetMobPosition(p))
		{
			return;
		}

		MS.Data.Teleport(p.x - 25, p.y);
	}
}

void Hack::ResetBlockedQuests()
{
	if (!MS.Hack.Variable.Flag.ResetBlockedQuests)
	{
		return;
	}

	static unsigned long time;

	if ((timeGetTime() - time) < 3000)
	{
		return;
	}

	time = timeGetTime();

	QList<int> quests;

	quests.append(7912); // First Time Together
	quests.append(7910); // Moon Bunny
	quests.append(7914); // Dimensional Crack
	quests.append(7916); // Forest of Haze
	quests.append(7918); // Reminent of the Godess
	quests.append(7044); // Lord Pirate
	quests.append(7922); // Romeo and Juliet
	quests.append(7920); // The Ice Knight's Curse
	quests.append(7814); // Dragon Rider
	quests.append(30106); // Tangyoon's Cooking Class

	quests.append(31845); // Dimension Invade
	quests.append(57644); // Alien PQ

	quests.append(7216); // MuLung Dojo - Normal/Hard Mode
	quests.append(7280); // MuLung Dojo - Ranking Mode

	quests.append(7200); // Papulatus
	quests.append(8001); // Bodyguard

	quests.append(30039); // Root Abyss - Von Bon
	quests.append(30032); // Root Abyss - Pierre
	quests.append(30033); // Root Abyss - Chrimson Queen
	quests.append(30041); // Root Abyss - Vellum

	quests.append(30040); // Root Abyss - Chaos Von Bon
	quests.append(30036); // Root Abyss - Chaos Pierre
	quests.append(30037); // Root Abyss - Chaos Chrimson Queen
	quests.append(30042); // Root Abyss - Chaos Vellum

	quests.append(57834); // Root Abyss - The Secret Garden

	quests.append(17537); // Gollux Entering
	quests.append(17450); // Gollux
	
	quests.append(31360); // Colossus

	quests.append(7003); // Zakum

	for (int i = 0; i < quests.count(); i++)
	{
		QStringList list;
		QString str = QString().sprintf("%04X", quests.at(i));

		list.append(str.mid(2, 2));
		list.append(str.mid(0, 2));

		MS.Packet.SendPacket("DE 00 03 " + list.join(" "));
	}
}

void Hack::HandleLoggingIn()
{
	if (MS.Bot.Variable.Flag.Teleporting)
	{
		MS.Data.Teleport(MS.Bot.Variable.TeleportPosition.x, MS.Bot.Variable.TeleportPosition.y);
		SecureZeroMemory(&MS.Bot.Variable.TeleportPosition, sizeof(MS.Bot.Variable.TeleportPosition));

		MS.Bot.Variable.Flag.Teleporting = false;
	}

	if (MS.Bot.Variable.Flag.SendingPacket)
	{
		MS.Packet.SendPacket(MS.Bot.Variable.SendPacketCharacters);
		MS.Bot.Variable.SendPacketCharacters.clear();

		MS.Bot.Variable.Flag.SendingPacket = false;
	}

	MS.Hack.KamiVac();
	MS.Hack.ResetBlockedQuests();
}

void Hack::Initialize()
{
	new boost::thread(&Hack::WriteValueThread, this);

	Assembly::WriteJump(Address::Hack::LoggingIn, LoggingIn_Hook, 1);
	Assembly::WriteJump(Address::Hack::StatHook, StatHook_Hook, 2);
	Assembly::WriteJump(Address::Hack::ItemHook, ItemHook_Hook, 1);

	Assembly::WriteJump(Address::Hack::FullGodMode, FullGodMode_Hook, 2);
	Assembly::WriteJump(Address::Hack::FullGuard, FullGuard_Hook, 0);
	Assembly::WriteJump(Address::Hack::NoKnockBack, NoKnockBack_Hook, 2);
	Assembly::WriteBytes(Address::Hack::InstantLoot, "90 90 90 90 90 90");
	Assembly::WriteBytes(Address::Hack::InstantDrop, "25");
	Assembly::WriteJump(Address::Hack::GenericNoDelay, GenericNoDelay_Hook, 1);
	Assembly::WriteJump(Address::Hack::UnlimitedMp, UnlimitedMp_Hook, 1);
	Assembly::WriteBytes(Address::Hack::UnlimitedBuff, "90");
	Assembly::WriteJump(Address::Hack::ReactorDem, ReactorDem_Hook, 1);
	Assembly::WriteJump(Address::Hack::JumpDownAnywhere, JumpDownAnywhere_Hook, 2);
	
	Assembly::WriteJump(Address::Hack::MobFreeze, MobFreeze_Hook, 0);
	Assembly::WriteJump(Address::Hack::MobFreezeStrong, MobFreezeStrong_Hook, 1);
	Assembly::WriteJump(Address::Hack::MobDisarm, MobDisarm_Hook, 1);
	Assembly::WriteJump(Address::Hack::NoMobActionByDamaged, NoMobActionByDamaged_Hook, 2);
	
	Assembly::WriteBytes(Address::Hack::NoBackground, "C3");
	Assembly::WriteBytes(Address::Hack::NoWeather, "C3");
	Assembly::WriteBytes(Address::Hack::NoFadeIn, "C2 04 00");
	Assembly::WriteBytes(Address::Hack::NoFadeOut, "C2 04 00");
	Assembly::WriteBytes(Address::Hack::NoSkillAnimation, "C2 24 00");
	Assembly::WriteBytes(Address::Hack::NoLootAnimation, "C2 04 00");
	Assembly::WriteBytes(Address::Hack::NoNoticeDialog, "C3");
	Assembly::WriteJump(Address::Hack::NoMeteor, NoMeteor_Hook, 1);
	Assembly::WriteBytes(Address::Hack::NoLogo, "90 90");

	*(void **)(Address::Hack::PtInRect_Pointer) = PtInRect_Hook;
	Assembly::WriteJump(Address::Hack::FullMapItemVac3, FullMapItemVac_Hook, 1);
}