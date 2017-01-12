#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, LPTSTR argv[])
{
	SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);

	while (true)
	{
				for (DWORD i = 0; i < 100000000; i++)
					for (DWORD i = 0; i < 100000000; i++);
				_fputts(_T("Operation9.exe\n"), stdout);
	}

}