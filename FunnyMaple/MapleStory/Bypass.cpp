#include "MultiInclude.h"

void __declspec(naked) Crc1_Hook()
{
	__asm
	{
		push ecx
		call Bypass::FixCrcAddress
		pop ecx

		mov dl,[ecx]
		add dl,1
		jmp [Address::Bypass::Crc1_Rtn]
	}
}
	
void __declspec(naked) Crc2_Hook()
{
	__asm
	{
		push eax
		call Bypass::FixCrcAddress
		pop eax

		mov eax,[eax]
		pushfd
		jmp [Address::Bypass::Crc2_Rtn]
	}
}

void __declspec(naked) Crc3_Hook()
{
	__asm
	{
		push edx
		call Bypass::FixCrcAddress
		pop edx

		xor al,[edx]
		pushfd
		jmp [Address::Bypass::Crc3_Rtn]
	}
}

void __declspec(naked) Crc4_Hook()
{
	__asm
	{
		push eax
		call Bypass::FixCrcAddress
		pop eax

		mov ax,[eax]
		mov [esp],ch
		jmp [Address::Bypass::Crc4_Rtn]
	}
}

void __declspec(naked) Crc5_Hook()
{
	__asm
	{
		push eax
		call Bypass::FixCrcAddress
		pop eax

		mov ax,[eax]
		jmp [Address::Bypass::Crc5_Rtn]
	}
}

void __declspec(naked) Crc6_Hook()
{
	__asm
	{
		push edx
		call Bypass::FixCrcAddress
		pop edx

		mov al,[edx]
		push [esp+8]
		jmp [Address::Bypass::Crc6_Rtn]
	}
}

void __declspec(naked) Bypass::FixCrcAddress()
{
	__asm
	{
		push eax
		mov eax,[esp+8]
		cmp eax,[MS.Bypass.Variable.ImageStart]
		jb Exit
		cmp eax,[MS.Bypass.Variable.ImageEnd]
		ja Exit
		sub eax,[MS.Bypass.Variable.ImageStart]
		add eax,[MS.Bypass.Variable.MemoryDump]
Exit:
		mov [esp+8],eax
		pop eax
		ret
	}
}

void Bypass::DisableCrc()
{
	HMODULE mod = GetModuleHandle(L"MapleStory.exe");
	IMAGE_NT_HEADERS *nth = (IMAGE_NT_HEADERS *)((unsigned long)mod + PIMAGE_DOS_HEADER(mod)->e_lfanew);
	unsigned long size = nth->OptionalHeader.SizeOfCode;

	Variable.ImageStart = (unsigned long)(mod + nth->OptionalHeader.BaseOfCode);
	Variable.ImageEnd = (Variable.ImageStart + size);
		
	Variable.MemoryDump = (unsigned char *)malloc(size);
	memcpy(Variable.MemoryDump, (void *)Variable.ImageStart, size);
		
	Assembly::WriteJump(Address::Bypass::Crc1, Crc1_Hook, Address::Bypass::Crc1_Nops);
	Assembly::WriteJump(Address::Bypass::Crc2, Crc2_Hook, Address::Bypass::Crc2_Nops);
	Assembly::WriteJump(Address::Bypass::Crc3, Crc3_Hook, Address::Bypass::Crc3_Nops);
	Assembly::WriteJump(Address::Bypass::Crc4, Crc4_Hook, Address::Bypass::Crc4_Nops);
	Assembly::WriteJump(Address::Bypass::Crc5, Crc5_Hook, Address::Bypass::Crc5_Nops);
	Assembly::WriteJump(Address::Bypass::Crc6, Crc6_Hook, Address::Bypass::Crc6_Nops);
}

void Bypass::DisableHackingCheck()
{
	Assembly::WriteBytes(Address::Bypass::VEHCheck, "31 C0 C3");
	Assembly::WriteBytes(Address::Bypass::InternalHackingCheck, "C3");
}

void Bypass::DisableExecutable()
{
	Assembly::WriteBytes(Address::Bypass::HSUpdateExe, "8B C3 C2 10 00");
	Assembly::WriteBytes(Address::Bypass::ASPlnchrExe, "C3");
	Assembly::WriteBytes(Address::Bypass::AutoupExe, "C3");
	Assembly::WriteBytes(Address::Bypass::Mkd25trayExe, "C3");
}

bool Bypass::EnableMultiClient()
{
	typedef NTSTATUS (NTAPI *NtQuerySystemInformation_t) (SYSTEM_INFORMATION_CLASS SystemInformationClass, PVOID SystemInformation, ULONG SystemInformationLength, PULONG ReturnLength);
	typedef NTSTATUS (NTAPI *NtQueryObject_t) (HANDLE Handle, OBJECT_INFORMATION_CLASS ObjectInformationClass, PVOID ObjectInformation, ULONG ObjectInformationLength, PULONG ReturnLength);

	struct SYSTEM_HANDLE_INFORMATION 
	{
		DWORD pid;
		BYTE type;
		BYTE flags;
		WORD handle;
		DWORD object;
		DWORD access;
	};
		
	typedef struct _OBJECT_NAME_INFORMATION
	{
		UNICODE_STRING Name;
	} OBJECT_NAME_INFORMATION, *POBJECT_NAME_INFORMATION;

	int handleCount = 1024;

	HMODULE ntdll = GetModuleHandle(L"ntdll");

	if (ntdll == NULL)
	{
		return false;
	}

	NtQueryObject_t ntQO = (NtQueryObject_t)GetProcAddress(ntdll, "NtQueryObject");
	NtQuerySystemInformation_t ntQSI = (NtQuerySystemInformation_t)GetProcAddress(ntdll, "NtQuerySystemInformation");

	if (ntQO == NULL || ntQSI == NULL)
	{
		return false;
	}

	struct HandleInfoSet
	{
		unsigned int count;
		SYSTEM_HANDLE_INFORMATION handles[1];
	};

	HandleInfoSet *infoSet = (HandleInfoSet *)malloc(4 + sizeof(SYSTEM_HANDLE_INFORMATION) * handleCount);
	DWORD length;

	NTSTATUS status = ntQSI((SYSTEM_INFORMATION_CLASS)16, infoSet, 4 + sizeof(SYSTEM_HANDLE_INFORMATION) * handleCount, &length);

	while (status == 0xc0000004 /*STATUS_INFO_LENGTH_MISMATCH*/)
	{
		free(infoSet);

		handleCount *= 2;

		infoSet = (HandleInfoSet *)malloc(4 + sizeof(SYSTEM_HANDLE_INFORMATION) * handleCount);
		status = ntQSI((SYSTEM_INFORMATION_CLASS)16, infoSet, 4 + sizeof(SYSTEM_HANDLE_INFORMATION) * handleCount, &length);
	}

	if (status != 0 /*STATUS_SUCCESS*/)
	{
		free(infoSet);
		
		return false;
	}

	for (unsigned int i = 0; i < infoSet->count; i++)
	{
		wchar_t nameBuffer[1024];

		if (infoSet->handles[i].handle == 0x0012019F) // some buggy thing we need to skip
		{
			continue;
		}

		status = ntQO((HANDLE)infoSet->handles[i].handle, (OBJECT_INFORMATION_CLASS)1, nameBuffer, 1024, &length);

		if (status != 0 /*STATUS_SUCCESS*/)
		{
			continue;
		}

		if (wcsstr(nameBuffer + 4, L"WvsClientMtx") != NULL)
		{
			HANDLE handle;

			DuplicateHandle(GetCurrentProcess(), (HANDLE)infoSet->handles[i].handle, 0, &handle, 0, FALSE, DUPLICATE_CLOSE_SOURCE);

			CloseHandle(handle);

			break;
		}
	}

	free(infoSet);

	return true;
}

void Bypass::Initialize()
{
	DisableCrc();
	DisableHackingCheck();
	DisableExecutable();
	EnableMultiClient();
}