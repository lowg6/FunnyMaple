#include "MultiInclude.h"

bool Process::InjectDll(const unsigned long pid, const char *path)
{
	bool success;
	HANDLE process = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	
	if (process != NULL)
	{
		void *remoteLib = (void *)GetProcAddress(GetModuleHandle(L"kernel32.dll"), "LoadLibraryA");
		void *remotePath = VirtualAllocEx(process, NULL, strlen(path), MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE);
			
		if (remoteLib != NULL && remotePath != NULL)
		{
			if (WriteProcessMemory(process, remotePath, path, strlen(path), NULL))
			{
				if (CreateRemoteThread(process, NULL, 0, (LPTHREAD_START_ROUTINE)remoteLib, remotePath, 0, NULL) != NULL)
				{
					success = true;
				}
			}
		}
	}

	CloseHandle(process);
	
	return success;
}

bool Process::IsProcessAlive(const unsigned long pid)
{
	bool alive;
	HANDLE snap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
		
	if (snap != INVALID_HANDLE_VALUE)
	{
		PROCESSENTRY32 pe;
			
		pe.dwSize = sizeof(pe);
			
		if (Process32First(snap, &pe))
		{
			while (Process32Next(snap, &pe) && pe.th32ProcessID != pid);
			
			if (pe.th32ProcessID == pid)
			{
				alive = true;
			}
		}
	}

	CloseHandle(snap);

	return alive;
}

HWND Process::FindExactWindow(const bool visible, const unsigned long pid, const unsigned short *cls)
{
	unsigned long temp;
	unsigned short buf[256];

	for(HWND hwnd = GetTopWindow(NULL); hwnd != NULL; hwnd = GetNextWindow(hwnd, GW_HWNDNEXT))
	{
		GetWindowThreadProcessId(hwnd, &temp);
			
		if (temp != pid)
		{
			continue;
		}

		if (!GetClassName(hwnd, buf, (sizeof(buf) / sizeof(unsigned short))))
		{
			continue;
		}

		if (wcscmp(buf, cls))
		{
			continue;
		}

		if (!visible)
		{
			return hwnd;
		}

		if (IsWindowVisible(hwnd))
		{
			return hwnd;
		}
	}

	return NULL;
}

QString MapleStory::GetWorldName(const int index)
{
	return WorldNameList[index];
}

int MapleStory::GetWorldCount()
{
	return _countof(WorldNameList);
}

int MapleStory::GetWorldIndex(const QString name)
{
	QStringList list;

	for (int i = 0; i < _countof(WorldNameList); i++)
	{
		list.append(WorldNameList[i]);
	}

	return list.indexOf(name, 0);
}

int MapleStory::GetWorldChannel(const int index)
{
	return WorldChannelList[index];
}