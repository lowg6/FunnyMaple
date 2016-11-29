#pragma once

typedef const unsigned long a;

namespace Address
{
	static const char *Version = "JMS 3.26.01";

	namespace MapleStory
	{
		a _ZtlSecureFuse_long_                       = 0x00401600; // e8 ? ? ? ? 83 ? ? 83 ? ? 7d ? 8d [call]

		namespace SECPOINT
		{
			a operator__0                            = 0x004AB460; // e8 ? ? ? ? 68 ? ? ? ? 8d ? ? e8 ? ? ? ? 8d ? ? 51 6a [call]
		}

		namespace TSecType_long_
		{
			a GetData                                = 0x00469770; // e8 ? ? ? ? 8b ? eb ? be ? ? ? ? 8b ? ? ? 85 ? 75 ? 33 ? eb [call]
			a SetData                                = 0x0089E0D0; // e8 ? ? ? ? 8b ? ? ? ? ? ? 85 ? 75 ? 8b ? ? ? ? ? 8b ? ? ? ? ? 51 [call]
		}

		namespace CClientSocket
		{
			a SendPacket                             = 0x005CD5A0; // e8 ? ? ? ? be 01 00 00 00 39 ? ? ? ? ? 74 ? 89 ? ? ? ? ? e8 [call]
		}

		namespace CInPacket
		{
			a CInPacket                              = 0x005CDD80; // e8 ? ? ? ? 8d ? ? ? c7 ? ? ? ff ff ff ff e8 ? ? ? ? 83 ? ? ? 0f [call]
		}

		namespace CSoftKeyboardDlg
		{
			a InitializeSecondaryPassword            = 0x008A4840; // e8 ? ? ? ? 8b ? ? ? ? ? 85 ? 74 ? e8 ? ? ? ? 8b ? ? ? c6 ? ? ? ? ? ? 07 [call]
		}

		namespace CLogin
		{
			a OnRecommendWorldMessage                = 0x008A4C40; // e8 ? ? ? ? c2 08 00 8b ? ? ? 50 83 ? ? e8 ? ? ? ? c2 08 00 8d ? ? ? ? ? 83 [call]
			a OnLatestConnectedWorld                 = 0x0089E320; // 56 8b ? 83 ? ? ? ? ? 01 75 ? 8b ? ? ? e8 ? ? ? ? 3d ? ? ? ? 74
			a SendCheckPasswordPacket                = 0x008ADFE0; // 6a ff 68 ? ? ? ? 64 a1 00 00 00 00 50 83 ? ? a1 ? ? ? ? 33 ? 89 ? ? ? 56 a1 ? ? ? ? 33 ? 50 8d ? ? ? 64 ? ? ? ? ? 8b ? 6a 00 c7
			a SendLoginPacket                        = 0x008A2960; // e8 ? ? ? ? 90 90 90 90 90 90 8b ? ? ? 64 [call]
			a SendSelectCharPacket                   = 0x008A9EA0; // 6a ff 68 ? ? ? ? 64 a1 00 00 00 00 50 83 ? ? 53 55 56 57 a1 ? ? ? ? 33 ? 50 8d ? ? ? 64 a3 00 00 00 00 8b ? 33 ? ? 89 ? ? ? e9
		}

		namespace CUIAvatar
		{
			a Refresh                                = 0x008B4E00; // e8 ? ? ? ? 3b ? 7c ? 81 ? ? ? ? ? 79 ? ? 83 [call]
			a SelectCharacter                        = 0x008B4EA0; // e8 ? ? ? ? e9 ? ? ? ? 8b ? 81 ? ? ? ? ? 79 ? ? 83 ? ? ? 83 ? ? 0f [call]
		}

		namespace CLoginUtilDlg
		{
			a Error                                  = 0x008B95F0; // e8 ? ? ? ? 83 ? ? eb ? 8b ? 0f ? ? ? ? ? ? 2b ? 89 [call]
		}

		namespace CStage
		{
			a FadeIn                                 = 0x00B7ED50; // e8 ? ? ? ? 8b ? ? ? ? ? 8b ? ? ? ? ? 8d ? ? ? 52 89 ? ? ? e8 [call]
			a FadeOut                                = 0x00B7F380; // e8 ? ? ? ? 8b ? ? 85 ? 74 ? c7 ? ? 00 00 00 00 8b ? 8b ? ? 50 ff [call]
		}

		namespace CUtilDlg
		{
			a Notice                                 = 0x012B9730; // e8 ? ? ? ? 8b ? 8b ? ? 83 ? ? 6a 01 8b ? ff ? 5e c2 04 00 6a ff 6a [call]
		}

		namespace CMapLoadable
		{
			a RestoreTile                            = 0x0090A0A0; // e8 ? ? ? ? 8b ? e8 ? ? ? ? 8b ? ? 50 8b ? e8 ? ? ? ? 8b [call]
			a RestoreObj                             = 0x0091B730; // e8 ? ? ? ? 8b ? ? 50 8b ? e8 ? ? ? ? 8b ? e8 [call]
			a RestoreBack                            = 0x009160A0; // e8 ? ? ? ? 8b ? e8 ? ? ? ? 8b ? e8 ? ? ? ? 8b ? e8 ? ? ? ? 53 8b [call]
			a RestoreWeather                         = 0x0090AD80; // e8 ? ? ? ? 8b ? e8 ? ? ? ? 8b ? e8 ? ? ? ? 53 8b [call]
		}

		namespace CVecCtrl
		{
			a SetImpactNext                          = 0x00BC5FC0; // e8 ? ? ? ? 8b ? ? 8b ? 8b ? ff ? 85 ? 75 ? 83 ? ? 75 [call]
		}

		namespace CUser
		{
			a ShowSkillPrepare                       = 0x0116F390; // e8 ? ? ? ? c7 ? ? ? ? ? 88 13 00 00 8b [call]
		}

		namespace CUserLocal
		{
			a Update                                 = 0x012296E0; // 55 8b ? 83 ? ? 6a ff 68 ? ? ? ? 64 a1 00 00 00 00 ? ? b8 ? ? ? ? e8 ? ? ? ? ? ? ? ? a1 ? ? ? ? 33 ? ? 8d ? ? ? ? ? ? 64
			a SetDamaged                             = 0x012175B0; // e8 ? ? ? ? 8b ? ? ? ? ? ? 81 ? ? ? ? ? 89 ? ? ? ? ? e8 ? ? ? ? 8b ? ? ? 3b ? 74 ? 3b ? 74 [call]
			a SetImpact                              = 0x012EA540; // 56 8b ? 8b ? ? ? 8b ? 8b ? ? ? ? ? 51 8b ? ff ? 0f
		}

		namespace CUIStatusBar
		{
			a SetNumberValue                         = 0x0104FC70; // e8 ? ? ? ? 83 ? ? 8b ? 89 ? ? ? 68 ? ? ? ? 68 ? ? ? ? e8 [call]
		}

		namespace CMob
		{
			a GetPos                                 = 0x00946DC0; // 56 8d ? ? ? ? ? 57 8d ? ? e8 ? ? ? ? 8b ? 8b ? e8 ? ? ? ? 8b ? 8b ? ? ? 89 ? 5f 89 ? ? 5e c2 04 00 cc cc cc cc cc cc cc 56 8d ? ? ? ? ? 57 [6th]
			a OnDie                                  = 0x00992E4F; // e8 ? ? ? ? eb ? 8b ? e8 ? ? ? ? eb ? 8b ? e8 ? ? ? ? 8b ? ? ? 81 ? ? ? ? ? e8 [call]
			a ShowDamage                             = 0x00961A40; // e8 ? ? ? ? 8b ? e8 ? ? ? ? 85 ? 0f ? ? ? ? ? 83 ? ? ? 00 0f [call]
			a AddDamageInfo                          = 0x0097A040; // e8 ? ? ? ? 8b ? ? ? ? ? 8b ? ? ? ? ? 83 ? ? ? ? 7e ? c7 ? ? 01 00 00 00 c6 ? ? ? 8d ? ? ? ? ? e8 ? ? ? ? e9 ? ? ? ? e9 ? ? ? ? 68 [call]
		}
	}

	namespace Data
	{
		namespace Character
		{
			a Base                                   = 0x019E6704; // 8B 3D ? ? ? ? 8B 40

			a PID                                    = 0x000044DC; // 8B 86 ? ? 00 00 6A D8
			a X                                      = 0x0000B3A8; // 89 8E ? ? ? ? 8B 50 ? 8B 06 89 96 ? ? ? ? 8B 50
			a Y                                      = (X + 4);
			a Teleporting                            = 0x00009E74; // 8d ? ? ? ? ? 89 ? ? ? e8 ? ? ? ? 85 ? 0f ? ? ? ? ? 8b ? ? ? ? ? 3d ? ? ? ? 74
			a TeleportX                              = 0x00009E98; // 8d ? ? ? ? ? 8b ? e8 ? ? ? ? 8b ? 53 50 8b ? ? 6a 00
			a TeleportY                              = (TeleportX - 12);
			a AttackCount                            = 0x0000A134; // 89 ? ? ? ? ? c7 ? ? ? ? ? ? ? ? ? 8d ? ? ? ? ? c6 ? ? ? ? 89 ? ? ? ? ? 89 ? ? ? ? ? 89 ? ? ? ? ? c7
			a BreathDelay                            = 0x0000054C; // 83 B8 ? ? ? ? 00 7E ? 6A 00 6A 00 6A 00 6A 00 6A 00 6A 00 ? 8B ? 89 ? ? ? 68 ? ? 00 00 ? E8 ? ? ? 00 8B ? E8 ? ? ? ? E8 ? ? ? 00
		}

		namespace Mob
		{
			a Base                                   = 0x019EAB84; // 8b ? ? ? ? ? 83 ? ? 89 ? ? ? e8 ? ? ? ? 85 ? 74 ? 8b ? ? ? eb

			a Count                                  = 0x00000010; // 8B 52 ? 83 C7 ? 8D 44 24 ? 50 8B CF FF D2 8B 00 89
			a Struct1                                = 0x00000028; // 89 7E ? 89 7E ? ? ? ? ? ? 89 46 ? 89 46 ? 89 7E ? 89 7E ? 89 7E ? 89 ? ? 89
			a Struct2                                = 0x00000004; // 89 ? ? 89 ? ? ? e8 ? ? ? ff c7 ? ? ? ff ff ff ff 85 ? 74 ? 6a
			a Struct3                                = 0x00000178; // 83 ? ? ? ? ? 00 0f ? ? ? ? ? 83 ? ? 39 ? ? ? ? ? 0f ? ? ? ? ? 68
			a Struct4                                = 0x00000024; // 89 5C ? ? C7 01 ? ? ? ? 89 ? ? C7 ? ? ? ? ? ? 89 ? ? e8 ? ? ? ff
			a X                                      = 0x00000058;
			a Y                                      = (X + 4);
			a Death                                  = 0x00000624; // 8d ? ? ? ? ? 56 e8 ? ? ? ? 8b ? 8b ? ? ? ? ? 8b ? ? ? ? ? 8b ? ? ? ? ? f7
		}

		namespace Mouse
		{
			a Base                                   = 0x019E6710; // 8B 0D ? ? ? ? 74 12 83 B9 ? ? ? ? ? 74 09 6A ? 6A ? E8

			a Animation                              = 0x00000A40; // 83 ? ? ? ? 00 00 74 ? 6a 00 6a 00 e8 ? ? ? ff c2 04 00 51
			a Location                               = 0x00000978; // 8B B1 ? ? ? ? 85 F6 75 ? 68 ? ? ? ? E8 ? ? ? 00 8B 4C 24 ? 8B 06 8B 90 ? ? ? ? F7 D9
			a X                                      = 0x00000088;
			a Y                                      = (X + 4);
		}

		namespace Server
		{
			a Base                                   = 0x019E65CC; // a1 ? ? ? ? 8b ? ? ? 00 00 89 ? ? ? 00 00 8b ? ? ? 00 00 8b ? ? ? 00 00 51

			a WorldIndex                             = 0x00002154; // 8b ? ? ? 00 00 89 ? ? ? 00 00 8b ? ? ? 00 00 8b ? ? ? 00 00 51
			a CharacterUniqueId                      = 0x000021B8;
			a Channel                                = (WorldIndex + 8);
			a ItemId                                 = 0x00006B84; // 89 ? ? ? ? ? 89 ? ? ? ? ? e8 ? ? ? ? 83 ? ? ? ? 75 ? 53
			a ItemSlot                               = (ItemId + 4);
			a IsMuLungDojoCleared                    = 0x000069A4; // 8b ? ? ? ? ? 8b ? 2b ? ? ? ? ? 89 ? ? ? 89 ? ? ? 89 ? ? ? 3b
		}

		namespace Map
		{
			a Base                                   = 0x019EB38C; // a1 ? ? ? ? 3b ? 74 ? 8b ? ? 83 ? ? 89 ? ? ? ? ? ? eb ? c7

			a Id                                     = 0x00001494; // 8b ? ? ? ? ? 50 8d ? ? ? 51 8b ? ? ? ? ? c6 ? ? ? ? ? ? ? e8
		}

		namespace People
		{
			a Base                                   = 0x019EAB80; // 8B ? ? ? ? ? 50 E8 ? ? ? ? ? ? ? ? 0F 84 ? ? ? ? 39 ? ? ? ? ? 0F 85

			a Count                                  = 0x00000018; // 8B ? ? ? ? 7C ? 83 ? ? 7D ? 8B ? ? ? ? ? 8B 74 ? ? ? ? 74 ? 8B ? ? 8B
		}

		namespace Item
		{
			a Base                                   = 0x019F24D8; // 89 0D ? ? ? ? EB 06 89 3D ? ? ? ? 8D 4E ? C7 06

			a Count                                  = 0x00000014; // 8B 4C 24 ? 83 C1 F8 83 F9 50 77 ? 0F ? ? ? ? ? ? FF
		}

		namespace Portal
		{
			a Base                                   = 0x019F25B8; // 8b ? ? ? ? ? 8b ? ? 85 ? 75 ? 33 ? eb ? 8b ? ? e8 ? ? ? ? 99 f7

			a Count                                  = 0x0000001C;
		}
	}

	namespace Hack
	{
		a LoggingIn                                  = MapleStory::CUserLocal::Update;
		a StatHook                                   = MapleStory::CUIStatusBar::SetNumberValue;
		a StatHook_Push                              = *(a *)(StatHook + 3);
		a ItemHook                                   = 0x0068B060; // 50 55 8d ? ? ? 51 ff ? ? ? ? ? 85 ? 75 ? 8d ? ? ? c7 ? ? ? ff ff ff ff e8 ? ? ? ? 8b ? ? ? eb

		a FullGodMode                                = MapleStory::CUserLocal::SetDamaged;
		a FullGodMode_Push                           = *(a *)(FullGodMode + 3);
		a FullGuard                                  = 0x011AB1E4; // e8 ? ? ? ? 83 ? ? f7 ? 1b ? f7 ? c3 cc cc cc cc cc cc cc cc cc cc cc cc cc 56 8b ? 8b ? 8b ? ? ff
		a NoKnockBack                                = MapleStory::CUserLocal::SetImpact;
		a InstantLoot                                = 0x00503ADF; // 89 ? ? ? ? ? e8 ? ? ? ? 89 ? ? ? ? ? 5e c2 04 00 cc
		a InstantDrop                                = 0x00688B65; // 0D ? ? ? ? 83 C4 ? E9 ? ? ? ? DD 05 ? ? ? ? DC C9
		a GenericNoDelay                             = 0x011EF387; // 8b ? ? ? ? ? 89 ? ? 8b ? ? ? ? ? 50 e8 ? ? ? ? 83 ? ? 85 ? 75
		a UnlimitedMp                                = 0x011D9C40; // 85 ? 7d ? 33 ? 81 ? ? ? ? ? 75 ? 8b ? ? ? 8b ? e8 ? ? ? ? 85
		a UnlimitedMp_Jnl                            = 0x011D9C46; // below UnlimitedMp
		a UnlimitedBuff                              = 0x011A88B8; // 40 89 ? ? b8 01 00 00 00 5e c2 08 00 89
		a ReactorDem                                 = 0x011BE5D1; // ff ? ? ? ? ? 85 ? 74 ? 83 ? ? ? 74 ? 8b ? ? ? ? ? 81 ? ? ? 00 00 e8 ? ? ? ff 8b
		a JumpDownAnywhere                           = 0x011BB560; // 83 ? ? 3b ? ? ? 7d ? 8b ? 8b ? ? 8d ? ? ? 50 8b ? ff ? 8b [2nd]
		a JumpDownAnywhere_End                       = 0x011BB587; // 8b ? c7 ? ? ? ? ? 01 00 00 00 e8 ? ? ? ? 6a 01 6a 01 8b
		
		a MobFreeze                                  = 0x012FCCB6; // 51 8b ? ff ? 8d ? ? ? ? ? e8 ? ? ? ? 8b ? ? ? ? ? c7
		a MobFreeze_Offset1                          = 0x00000328; // 83 ? ? ? ? ? ? 0f ? ? ? ? ? 8b ? ? 8b ? ? ? ? ? 8d ? ? 8b ? ff ? 85 [offset]
		a MobFreeze_Offset2                          = 0x00000330; // 83 ? ? ? ? ? 00 8b ? ? ? ? ? 0f ? ? ? ? ? e8 [offset]
		a MobFreezeStrong                            = 0x00998099; // 89 ? ? ? 85 ? 74 ? 8d ? ? ? 50 e8 ? ? ? ? 8b ? ? 8b ? 8b ? 83 ? ? ff ? 83 ? ? ? 00 75 ? 8b ? ? 89 ? ? ? 85 [2nd]
		a MobFreezeStrong_Je                         = 0x009980BE; // below MobFreezeStrong
		a MobDisarm                                  = 0x00991F86; // 83 ? ? 83 ? ? 0f ? ? ? ? ? 83 ? ? ? ? ? 00 74 ? 8b ? ? ? ? ? 85 ? 75 ? 8b ? ? ? ? ? 8b ? ? ? ? ? 51 05 ? ? ? ? 50 e8 ? ? ? ? 83 ? ? 83 ? ? 74 ? 8b ? ? 8b ? ? 8d ? ? ff ? 8b ? 8b ? 8b ? ? ff ? 85 ? 0f ? ? ? ? ? 8b ? ? 8b ? ? 8b ? ? ? ? ? 8d ? ? ff ? 85 ? 0f ? ? ? ? ? 8b ? ? ? ? ? 8b ? 8b
		a MobDisarm_Jg                               = 0x009923C4; // below MobDisarm
		a NoMobActionByDamaged                       = MapleStory::CMob::AddDamageInfo;
		a NoMobActionByDamaged_Push                  = *(a *)(NoMobActionByDamaged + 3);

		a NoBackground                               = MapleStory::CMapLoadable::RestoreBack;
		a NoWeather                                  = MapleStory::CMapLoadable::RestoreWeather;
		a NoFadeIn                                   = MapleStory::CStage::FadeIn;
		a NoFadeOut                                  = MapleStory::CStage::FadeOut;
		a NoSkillAnimation                           = MapleStory::CUser::ShowSkillPrepare;
		a NoLootAnimation                            = 0x004CFEE0; // 6a ff 68 ? ? ? ? 64 a1 00 00 00 00 ? 83 ? ? ? ? ? ? a1 ? ? ? ? 33 ? ? 8d ? ? ? 64 a3 00 00 00 00 8b ? 89 ? ? ? 8b ? ? 8b ? ? 89 ? ? ? 8b ? 33
		a NoNoticeDialog                             = MapleStory::CUtilDlg::Notice;
		a NoMeteor                                   = 0x00734280; // e8 ? ? ? ? 53 8b ? e8 ? ? ? ? 53 8b ? e8 ? ? ? ? 39 ? ? ? ? ? 7e ? e8 [call]
		a NoLogo                                     = 0x008E8DB1; // 74 ? 2b ? 3d dc 05 00 00 76

		a PtInRect_Pointer                           = 0x019F8C80; // ff ? ? ? ? ? 85 ? 75 ? 8d ? ? ? c7 ? ? ? ff ff ff ff e8 ? ? ? ? 8b ? ? ? eb [ptr]
		a FullMapItemVac1_Rtn                        = 0x006898F5; // 85 ? 74 ? 83 ? ? ? ? 75 ? eb
		a FullMapItemVac2_Rtn                        = 0x0068B06D; // 85 ? 75 ? 8d ? ? ? c7 ? ? ? ff ff ff ff e8 ? ? ? ? 8b ? ? ? eb
		a FullMapItemVac3                            = 0x012EB5AD; // 8b ? ff ? 85 ? 74 ? 8b ? 8b ? ? 5f 8b ? 5e 5b ff ? 5f 5e 5b c3 cc
		a FullMapItemVac3_Je                         = 0x012EB5C1; // below FullMapItemVac3
	}

	namespace Item
	{
		a Filter                                     = 0x00691516; // 8b ? 89 ? ? e8 ? ? ? ? 8b ? 89 ? ? e8 ? ? ? ? 0f ? ? 8b ? 89 ? ? e8 ? ? ? ? 0f ? ? 8b ? 89 ? ? ? ? ? ? e8 ? ? ? ? 0f
		a Filter_End                                 = 0x00692C41; // e9 ? ? ? ? 8d ? ? ? e8 ? ? ? ? 8b ? ? ? 88 ? ? 83 [jmp]
	}

	namespace Login
	{
		a CLogin                                     = 0x019F2FB4; // a1 ? ? ? ? c7 ? ? ? 00 00 00 00 85 ? 74 ? 8d ? ? 8b [ptr]
		a EnterUsernamePassword                      = MapleStory::CLogin::OnRecommendWorldMessage;
		a EnterSecondaryPassword                     = MapleStory::CSoftKeyboardDlg::InitializeSecondaryPassword;
		a SelectWorldChannel                         = MapleStory::CLogin::OnLatestConnectedWorld;
		a SelectCharacter                            = MapleStory::CUIAvatar::Refresh;
		a ErrorDialog                                = MapleStory::CLoginUtilDlg::Error;
	}

	namespace Packet
	{
		a CClientSocket                              = 0x019E6708; // 8b ? ? ? ? ? e8 ? ? ? ? 8d ? ? ? c6 ? ? ? ? ? ? 00 e8 [ptr]
		a Trampoline                                 = (MapleStory::CClientSocket::SendPacket - 9);
		a SendPacketHook                             = MapleStory::CClientSocket::SendPacket;
		a RecvPacketHook                             = MapleStory::CInPacket::CInPacket;
		a RecvPacketHook_Push                        = *(a *)(RecvPacketHook + 3);
	}

	namespace Bypass
	{
		a Crc1                                       = 0x014668E9;
		a Crc2                                       = 0x008A31C8;
		a Crc3                                       = 0x008A8E87;
		a Crc4                                       = 0x005CD4D7;
		a Crc5                                       = 0x0069530A;
		a Crc6                                       = 0x005B1A60;

		a Crc1_Rtn                                   = (Crc1 + 5);
		a Crc2_Rtn                                   = 0x005CC63C;
		a Crc3_Rtn                                   = 0x008AAA6F;
		a Crc4_Rtn                                   = (Crc4 + 5);
		a Crc5_Rtn                                   = 0x008A2B41;
		a Crc6_Rtn                                   = (Crc6 + 5);

		a Crc1_Nops                                  = 0;
		a Crc2_Nops                                  = 3;
		a Crc3_Nops                                  = 3;
		a Crc4_Nops                                  = 1;
		a Crc5_Nops                                  = 3;
		a Crc6_Nops                                  = 1;

		a VEHCheck                                   = 0x005C7710; // 55 8b ? 81 ? ? 02 ? ? a1 ? ? ? ? 33 ? 89 ? ? 53 56 57 6a 00 e9
		a InternalHackingCheck                       = 0x01411F70; // 83 ? ? 56 8b ? 8d ? ? e8 ? ? ? ? 85 ? 0f

		a HSUpdateExe                                = 0x0143C419; // e8 ? ? ? ? 89 ? ? ? ? ? c7 ? ? ff ff ff ff e9 ? ? ? ? 8b ? ? 8b ? 8b ? 89 [call]
		a ASPlnchrExe                                = 0x01411450; // e8 ? ? ? ? 8b ? ? ? ? ? e8 ? ? ? ? 50 e8 ? ? ? ? 8b ? e8 [call]
		a AutoupExe                                  = 0x01411510; // e8 ? ? ? ? 8b ? ? c6 ? ? ? 07 85 ? 74 ? 50 b9 ? ? ? ? e8 ? ? ? ? 8b ? ? c6 ? ? ? 06 [call] [2nd]
		a Mkd25trayExe                               = 0x01411540; // e8 ? ? ? ? 66 ? ? ? 74 ? 8b ? ? ? ? ? 3b ? 74 [call]
	}
}