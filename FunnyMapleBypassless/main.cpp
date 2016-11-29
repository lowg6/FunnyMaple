#include "MultiInclude.h"
#include "MainForm.h"
#include <QtGui/QApplication>

int main(int argc, char **argv)
{
	MS.Initialize();

	QApplication a(argc, argv);
	MainForm w;

	return a.exec();
}

BOOL APIENTRY DllMain(HINSTANCE instance, DWORD reason, LPVOID reserved)
{
	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		wchar_t fileName[_MAX_PATH];

		GetModuleFileName((HINSTANCE)instance, fileName, _MAX_PATH);

		currentModulePath = QString::fromUtf16(fileName);

		boost::thread(&main, 0, (char **)NULL);

		break;
	}

	return TRUE;
}