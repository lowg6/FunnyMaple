#pragma once

namespace Converter
{
	int CharArrayToByteArray(unsigned char *dest, char *src);
	QStringList StringToAsciiStringList(QString str);
}

namespace Assembly
{
	bool WriteJump(const unsigned long address, const void *destination, const size_t nops);
	bool WriteCall(const unsigned long address, const void *destination, const size_t nops);
	bool WriteBytes(const unsigned long address, char *bytes);

	const char *ReadStringPointer(const unsigned long base, const int offset);
	double ReadDoublePointer(const unsigned long base, const int offset);
	unsigned long ReadPointer(const unsigned long base, const int offset);
	unsigned long GetValue(const unsigned long base, const int offset);
	unsigned long ReadIndefinitePointer(unsigned long base, const unsigned long levels, ...);
	bool IsPointerReadable(const unsigned long address);
	bool WritePointer(const unsigned long base, const int offset, const int value);

	unsigned long FindPattern(const unsigned long start, const unsigned long end, const unsigned char *pattern, const unsigned long length, const unsigned char wildcard = 0x00);
}

namespace Detour
{
	bool SetHook(const bool install, void **target, void *detour);
}

namespace Random
{
	int GenerateNumberInRange(const int min, const int max);
}