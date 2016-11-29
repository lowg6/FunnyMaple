#ifndef MAINFORM_H
#define MAINFORM_H

#include <QtGui>

#include "ui_MainForm.h"

class MainForm : public QMainWindow
{
	Q_OBJECT

public:
	MainForm(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainForm();

	Ui::MainFormClass *ui;

private:
	struct ProcessInfomation
	{
		Q_PID Process;
		QString Login;
	};

	QList<ProcessInfomation> ProcessInfomationList;

	QString GamePath, DllPath;
	int LaunchProcessInterval;
	bool WorkingProcess;

private:
	void SaveSettingIni();
	void OpenSettingIni();

	QProcess *LaunchProcess(const QString path, const QString loginInfomation);
	void TerminateAllProcesses();

	bool CreateLoginInfomationSharedMemory();
	bool UpdateLoginInfomationSharedMemory(const QString loginInfomation);
	QString CreateLoginInfomation(const QString username, const QString password, const QString secondaryPassword, const QString world, const QString channel, const QString character);

	void WatchProcessThread();

private slots:
	void Action_Triggered();

protected:
	void closeEvent(QCloseEvent *event);
};

extern MainForm *MainFormClass;

#endif // MAINFORM_H
