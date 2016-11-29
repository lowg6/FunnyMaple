#include "MultiInclude.h"

void __declspec(naked) Pointer1_Hook()
{
	static unsigned long GodModePrevTime;

	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::StatHook_Rtn]
		je StatHook_Replace
		cmp eax,[Address::Hack::FullGodMode_Rtn]
		je FullGodMode_Replace
		cmp eax,[Address::Hack::MobFreezeStrong_Rtn]
		je MobFreezeStrong_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call1]

StatHook_Replace:
		mov eax,StatHook_Main
StatHook_Exit:
		mov [esp+4],eax
		jmp Exit

FullGodMode_Replace:
		cmp [MS.Hack.Variable.Flag.FullGodMode],1
		jne FullGodMode_Exit
		mov eax,FullGodMode_Main
FullGodMode_Exit:
		mov [esp+4],eax
		jmp Exit

MobFreezeStrong_Replace:
		cmp [MS.Hack.Variable.Flag.MobFreezeStrong],1
		jne MobFreezeStrong_Exit
		mov eax,Address::Hack::MobFreezeStrong_End
MobFreezeStrong_Exit:
		mov [esp+4],eax
		jmp Exit

StatHook_Main:
		push eax
		mov eax,[esp+0x54]
		mov [MS.Hack.Variable.CurrentHp],eax
		mov eax,[esp+0x58]
		mov [MS.Hack.Variable.MaximumHp],eax
		mov eax,[esp+0x5C]
		mov [MS.Hack.Variable.CurrentMp],eax
		mov eax,[esp+0x60]
		mov [MS.Hack.Variable.MaximumMp],eax
		mov eax,[esp+0x64]
		mov [MS.Hack.Variable.CurrentExp],eax
		mov eax,[esp+0x6C]
		mov [MS.Hack.Variable.MaximumExp],eax
		pop eax
		jmp [Address::Hack::StatHook_Rtn]

FullGodMode_Main:
		pushad
		call dword ptr [timeGetTime]
		sub eax,[GodModePrevTime]
		cmp eax,58000
		popad
		jb FullGodMode_Ignore
		pushad
		call dword ptr [timeGetTime]
		mov [GodModePrevTime],eax
		popad
		jmp [Address::Hack::FullGodMode_Rtn]
FullGodMode_Ignore:
		jmp [Address::Hack::FullGodMode_End]
	}
}

void __declspec(naked) Pointer2_Hook()
{
	static short GuardCount;

	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::FullGuard_Rtn]
		je FullGuard_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call2]

FullGuard_Replace:
		cmp [MS.Hack.Variable.Flag.FullGuard],1
		jne FullGuard_Exit
		mov eax,FullGuard_Main
FullGuard_Exit:
		mov [esp+4],eax
		jmp Exit

FullGuard_Main:
		mov ecx,[eax+0x1C4C]
		push ecx
		add eax,0x1C44
		push eax
		cmp [GuardCount],7
		jb FullGuard_Guard
		mov [GuardCount],0
FullGuard_Normal:
		call [Address::MapleStory::_ZtlSecureFuse_long_]
		jmp [Address::Hack::FullGuard_End]
FullGuard_Guard:
		inc [GuardCount]
		jmp [Address::Hack::FullGuard_End]
	}
}

void __declspec(naked) Pointer3_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::GenericNoDelay_Rtn]
		je GenericNoDelay_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call3]

GenericNoDelay_Replace:
		cmp [MS.Hack.Variable.Flag.GenericNoDelay],1
		jne GenericNoDelay_Exit
		mov eax,GenericNoDelay_Main
GenericNoDelay_Exit:
		mov [esp+4],eax
		jmp Exit

GenericNoDelay_Main:
		mov [ebp-0x68],1
		jmp [Address::Hack::GenericNoDelay_Rtn]
	}
}

void __declspec(naked) Pointer4_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+0x34]
		cmp eax,[Address::Hack::UnlimitedMp_Rtn]
		je UnlimitedMp_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call4]
		
UnlimitedMp_Replace:
		cmp [MS.Hack.Variable.Flag.GenericNoDelay],1
		jne UnlimitedMp_Exit
		mov eax,UnlimitedMp_Main
UnlimitedMp_Exit:
		mov [esp+0x34],eax
		jmp Exit

UnlimitedMp_Main:
		xor edi,edi
		jmp [Address::Hack::UnlimitedMp_Rtn]
	}
}

void __declspec(naked) Pointer5_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::JumpDownAnywhere_Rtn]
		je JumpDownAnywhere_Replace
		cmp eax,[Address::Hack::NoMeteor_Rtn]
		je NoMeteor_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call5]

JumpDownAnywhere_Replace:
		cmp [MS.Hack.Variable.Flag.JumpDownAnywhere],1
		jne JumpDownAnywhere_Exit
		mov eax,Address::Hack::JumpDownAnywhere_End
JumpDownAnywhere_Exit:
		mov [esp+4],eax
		jmp Exit

NoMeteor_Replace:
		mov eax,NoMeteor_Main
		mov [esp+4],eax
		jmp Exit

NoMeteor_Main:
		mov ecx,[eax+4]
		mov edx,[eax]
		push ecx
		push edx
		lea ecx,[esi+0x171C]
		call [Address::Hack::NoMeteor_Call1]
		lea ecx,[esi+0x1738]
		call [Address::Hack::NoMeteor_Call2]
		cmp [MS.Hack.Variable.Flag.NoMeteor],1
		je NoMeteor_Jump
		mov ecx,esi
		call [Address::Hack::NoMeteor_Call3]
NoMeteor_Jump:
		jmp [Address::Hack::NoMeteor_End]
	}
}

void __declspec(naked) Pointer6_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::MobFreeze_Rtn]
		je MobFreeze_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call6]

MobFreeze_Replace:
		cmp [MS.Hack.Variable.Flag.MobFreeze],1
		jne MobFreeze_Exit
		mov eax,MobFreeze_Main
MobFreeze_Exit:
		mov [esp+4],eax
		jmp Exit

MobFreeze_Main:
		mov ecx,[Address::Hack::MobFreeze_Offset1]
		mov dword ptr [esi+ecx],4
		mov ecx,[Address::Hack::MobFreeze_Offset2]
		mov dword ptr [esi+ecx],0
		jmp [Address::Hack::MobFreeze_Rtn]
	}
}

void __declspec(naked) Pointer7_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::MobDisarm_Rtn]
		je MobDisarm_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call7]

MobDisarm_Replace:
		cmp [MS.Hack.Variable.Flag.MobDisarm],1
		jne MobDisarm_Exit
		mov eax,Address::Hack::MobDisarm_End
MobDisarm_Exit:
		mov [esp+4],eax
		jmp Exit
	}
}

void __declspec(naked) Pointer8_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::NoMobActionByDamaged_Rtn]
		je NoMobActionByDamaged_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call8]

NoMobActionByDamaged_Replace:
		cmp [MS.Hack.Variable.Flag.NoMobActionByDamaged],1
		jne NoMobActionByDamaged_Exit
		mov eax,Address::Hack::NoMobActionByDamaged_End
NoMobActionByDamaged_Exit:
		mov [esp+4],eax
		jmp Exit
	}
}

void __declspec(naked) Pointer9_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+0x1E8]
		cmp eax,[Address::Hack::MapLoader_Rtn]
		je MapLoader_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call9]

MapLoader_Replace:
		mov eax,MapLoader_Main
		mov [esp+0x1E8],eax
		jmp Exit

MapLoader_Main:
		mov ecx,edi
		call [Address::MapleStory::CMapLoadable::RestoreTile]
		mov ecx,edi
		call [Address::MapleStory::CMapLoadable::RestoreObj]
MapLoader_Jump1:
		mov ecx,[Address::Hack::MapLoader_Ptr]
		mov esi,[ebp+0x7C]
		cmp ecx,ebx
		je MapLoader_Jump2
		push esi
		call [Address::Hack::MapLoader_Call]
		test eax,eax
		je MapLoader_Jump2
		push 1
		push ebx
		jmp MapLoader_Jump3
MapLoader_Jump2:
		push ebx
		push esi
MapLoader_Jump3:
		//mov ecx,edi
		//call [Address::MapleStory::CMapLoadable::RestoreBack]
		//mov ecx,edi
		//call [Address::MapleStory::CMapLoadable::RestoreWeather]
		jmp [Address::Hack::MapLoader_End]
	}
}

void __declspec(naked) Pointer10_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::LoggingInHook_Rtn]
		je LoggingInHook_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call10]

LoggingInHook_Replace:
		mov eax,LoggingInHook_Main
		mov [esp+4],eax
		jmp Exit

LoggingInHook_Main:
		pushad
		call Hack::HandleLoggingIn
		popad
		jmp [Address::Hack::LoggingInHook_Rtn]
	}
}

void __declspec(naked) Pointer11_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::ItemFilter_Rtn]
		je ItemFilter_Replace
Exit:
		pop eax
		jmp [Address::Hack::Call11]

ItemFilter_Replace:
		mov eax,ItemFilter_Main
		mov [esp+4],eax
		jmp Exit

ItemFilter_Main:
		push eax
		mov eax,[esi+0x38]
		test eax,eax
		pop eax
		je ItemFilter_End
		pushad
		push [esi+0x38]
		call Item::HandleItemFilter
		mov [esi+0x38],eax
		popad
		jmp [Address::Hack::ItemFilter_Rtn]
ItemFilter_End:
		jmp [Address::Hack::ItemFilter_End]
	}
}

void __declspec(naked) Pointer12_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::ItemHook_Rtn]
		je ItemHook_Main
Exit:
		pop eax
		jmp [Address::Hack::Call12]

ItemHook_Main:
		mov eax,[esp+0xC]
		mov [MS.Hack.Variable.ItemPosition.x],eax
		mov eax,[esp+0x10]
		mov [MS.Hack.Variable.ItemPosition.y],eax
		jmp Exit
	}
}

void __declspec(naked) Pointer13_Hook()
{
	__asm
	{
		push eax
		mov eax,[esp+4]
		cmp eax,[Address::Hack::RecvPacketHook_Rtn]
		je RecvPacketHook_Main
Exit:
		pop eax
		jmp [Address::Hack::Call13]

RecvPacketHook_Main:
		pushad
		push [esp+0x54]
		push [esp+0x5C]
		call Packet::HandleRecvPacket
		popad
		jmp Exit
	}
}

void __declspec(naked) SendPacket_Hook()
{
	__asm
	{
		pushad
		push [esp+0xBC]
		push [esp+0xC4]
		call Packet::HandleSendPacket
		popad

		push 0xDDC5F3E9
		jmp [Address::Hack::SendPacketHook_End]
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

	for (int i = 0; i < quests.count(); i++)
	{
		QStringList list;
		QString str = QString().sprintf("%04X", quests.at(i));

		list.append(str.mid(2, 2));
		list.append(str.mid(0, 2));

		MS.Packet.SendPacket("DF 00 03 " + list.join(" "));
	}
}

void Hack::SpamDrop10MesosPackets()
{
	if (MainFormClass->ui->checkBoxSpamDrop10MesosPackets->isChecked())
	{
		static unsigned long time;

		if ((timeGetTime() - time) < MainFormClass->ui->spinBoxSpamDrop10MesosPacketsDelay->value())
		{
			return;
		}

		time = timeGetTime();

		for (int i = 0; i < MainFormClass->ui->spinBoxSpamDrop10MesosPacketsCount->value(); i++)
		{
			MS.Packet.SendPacket("CE 00 ** ** ** ** 0A 00 00 00");
		}
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
	MS.Hack.SpamDrop10MesosPackets();
}

void Hack::Initialize()
{
	new boost::thread(&Hack::WriteValueThread, this);

	*(void **)(Address::Hack::Pointer1) = Pointer1_Hook;
	*(void **)(Address::Hack::Pointer2) = Pointer2_Hook;
	*(void **)(Address::Hack::Pointer3) = Pointer3_Hook;
	*(void **)(Address::Hack::Pointer4) = Pointer4_Hook;
	*(void **)(Address::Hack::Pointer5) = Pointer5_Hook;
	*(void **)(Address::Hack::Pointer6) = Pointer6_Hook;
	*(void **)(Address::Hack::Pointer7) = Pointer7_Hook;
	*(void **)(Address::Hack::Pointer8) = Pointer8_Hook;
	*(void **)(Address::Hack::Pointer9) = Pointer9_Hook;
	*(void **)(Address::Hack::Pointer10) = Pointer10_Hook;
	*(void **)(Address::Hack::Pointer11) = Pointer11_Hook;
	*(void **)(Address::Hack::Pointer12) = Pointer12_Hook;
	*(void **)(Address::Hack::Pointer13) = Pointer13_Hook;

	Assembly::WriteJump(Address::Hack::SendPacketHook, SendPacket_Hook, 0);
}