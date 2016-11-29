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
		boost::thread(&main, 0, (char **)NULL);

		break;
	}

	return TRUE;
}