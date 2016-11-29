#pragma once

class Bypass
{
public:
	struct _Variable
	{
		unsigned char *MemoryDump;
		unsigned long ImageStart, ImageEnd;
	} Variable;

private:
	void DisableCrc();
	void DisableHackingCheck();
	void DisableExecutable();
	bool EnableMultiClient();

public:
	void FixCrcAddress();

	void Initialize();
};