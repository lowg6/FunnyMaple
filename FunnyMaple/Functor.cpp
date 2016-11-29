#include "MultiInclude.h"

int Converter::CharArrayToByteArray(unsigned char *dest, char *src)
{
	int size = 0;
	
	for (int i = 0; src[i] != 0x00; i++)
	{
		if (src[i] >= 0x61 && src[i] <= 0x66)
		{
			src[i] -= 0x20;
		}

		if (src[i] >= 0x41 && src[i] <= 0x46)
		{
			dest[size] = (src[i] - 0x37); size++;
		}
				
		if (src[i] >= 0x30 && src[i] <= 0x39)
		{
			dest[size] = (src[i] - 0x30); size++;
		}
	}

	size = (size / 2);
		
	for (int i = 0; i < size; i++)
	{
		dest[i] = (dest[i * 2] * 0x10 + dest[i * 2 + 1]);
	}
		
	return size;
};

QStringList Converter::StringToAsciiStringList(QString str)
{
	QStringList list;
	QByteArray bytes = QByteArray::fromHex(QString::fromAscii(str.toAscii().toHex()).toUtf8());

	for (int i = 0; i < bytes.size(); i++)
	{
		list.append(QString().sprintf("%02X", bytes.at(i)));
	}

	return list;
}

bool Assembly::WriteJump(const unsigned long address, const void *destination, const size_t nops)
{
	unsigned long old;
	
	if (!VirtualProtect((void *)address, (nops + 5), PAGE_READWRITE, &old)) 
	{
		return false;
	}

	*(unsigned char *)address = 0xE9;
	*(unsigned long *)(address + 1) = ((unsigned long)destination - address - 5);

	memset((void *)(address + 5), 0x90, nops);
			
	if (!VirtualProtect((void *)address, (nops + 5), old, &old))
	{
		return false;
	}
	
	return true;
}

bool Assembly::WriteCall(const unsigned long address, const void *destination, const size_t nops)
{
	unsigned long old;
	
	if (!VirtualProtect((void *)address, (nops + 5), PAGE_READWRITE, &old)) 
	{
		return false;
	}

	*(unsigned char *)address = 0xE8;
	*(unsigned long *)(address + 1) = ((unsigned long)destination - address - 5);

	memset((void *)(address + 5), 0x90, nops);
			
	if (!VirtualProtect((void *)address, (nops + 5), old, &old))
	{
		return false;
	}
	
	return true;
}

bool Assembly::WriteBytes(const unsigned long address, char *bytes)
{
	unsigned long old;
	unsigned char _bytes[1024];
	size_t size = Converter::CharArrayToByteArray(_bytes, bytes);

	if (!VirtualProtect((void *)address, size, PAGE_READWRITE, &old))
	{
		return false;
	}
		
	memcpy((void *)address, _bytes, size);
			
	if (!VirtualProtect((void *)address, size, old, &old))
	{
		return false;
	}

	return true;
}

const char *Assembly::ReadStringPointer(const unsigned long base, const int offset)
{
	__try
	{
		return (const char *)(*(unsigned long *)base + offset);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return "<Empty>";
	}
}
	
double Assembly::ReadDoublePointer(const unsigned long base, const int offset)
{
	__try
	{
		return (*(double *)(*(unsigned long *)base + offset));
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return 0.0;
	}
}

unsigned long Assembly::ReadPointer(const unsigned long base, const int offset)
{
	__try
	{
		return *(unsigned long *)(*(unsigned long *)base + offset);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return 0;
	}
}

unsigned long Assembly::GetValue(const unsigned long base, const int offset)
{
	__try
	{
		return *(unsigned long *)(base + offset);
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return 0;
	}
}

unsigned long Assembly::ReadIndefinitePointer(unsigned long base, const unsigned long levels, ...)
{
	va_list va;
	va_start(va, levels);
		
	__try
	{
		base = *(unsigned long *)base;
		
		for (unsigned long i = 1; i <= levels; i++)
		{
			base = *(unsigned long *)(base + va_arg(va, int));
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		base = 0;
	}
		
	va_end(va);
		
	return base;
}
	
bool Assembly::IsPointerReadable(const unsigned long address)
{
	if((void*)address == NULL)
	{
		return false;
	}
		
	MEMORY_BASIC_INFORMATION MBI;
	SIZE_T cbStruct = sizeof(MEMORY_BASIC_INFORMATION);

	if(VirtualQuery((void*)address, &MBI, cbStruct) != 0)
	{
		if(!MBI.Protect || MBI.Protect & PAGE_GUARD)
		{
			return false;
		}
	
		if(MBI.Protect & PAGE_EXECUTE_READ || MBI.Protect & PAGE_EXECUTE_READWRITE || MBI.Protect & PAGE_READONLY || MBI.Protect & PAGE_READWRITE)
		{
			return true;
		}
	}
		
	return false;
}
	
bool Assembly::WritePointer(const unsigned long base, const int offset, const int value)
{
	__try
	{
		*(int *)(*(unsigned long *)base + offset) = value;
	
		return true;
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{
		return false;
	}
}

unsigned long Assembly::FindPattern(const unsigned long start, const unsigned long end, const unsigned char *pattern, const unsigned long length, const unsigned char wildcard)
{
	bool found;

	for (unsigned long i = start; i < (end - length); i++)
	{
		for (unsigned long j = 0; j < length; j++)
		{
			if (pattern[j] == wildcard)
			{
				continue;
			}

			if (*(unsigned char *)(i + j) != pattern[j])
			{
				found = false;
				break;
			}

			found = true;
		}

		if (found)
		{
			return i;
		}
	}

	return 0;
}

bool Detour::SetHook(const bool install, void **target, void *detour)
{
	if (DetourTransactionBegin() != NO_ERROR)
	{
		return false;
	}
	
	if (DetourUpdateThread(GetCurrentThread()) == NO_ERROR)
	{
		if ((install ? DetourAttach : DetourDetach)(target, detour) == NO_ERROR)
		{
			if (DetourTransactionCommit() == NO_ERROR)
			{
				return true;
			}
		}
	}
	
	DetourTransactionAbort();

	return false;
}

int Random::GenerateNumberInRange(const int min, const int max)
{
	std::uniform_int_distribution<> dist(min, max);
	static std::mt19937 gen(timeGetTime());

	return dist(gen);
}