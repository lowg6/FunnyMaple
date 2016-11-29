#include "MainForm.h"
#include "AccountAdditionForm.h"
#include "MultiInclude.h"

MainForm *MainFormClass;

MainForm::MainForm(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	//initialize pointer
	ui = new Ui::MainFormClass;
	MainFormClass = this;

	//set default setting
	DllPath = "FunnyMaple.dll";
	LaunchProcessInterval = 0;

	//setup gui
	ui->setupUi(this);

	ui->treeWidgetAccountList->setColumnWidth(0, 27);
	ui->treeWidgetAccountList->setColumnWidth(1, 120);
	ui->treeWidgetAccountList->setColumnWidth(2, 120);
	ui->treeWidgetAccountList->setColumnWidth(3, 120);
	ui->treeWidgetAccountList->setColumnWidth(4, 60);
	ui->treeWidgetAccountList->setColumnWidth(5, 30);
	ui->treeWidgetAccountList->setColumnWidth(6, 30);

	ui->treeWidgetAccountList->addAction(ui->actionAddToAccountList);
	ui->treeWidgetAccountList->addAction(ui->actionDeleteFromAccountList);

	//open user setting
	OpenSettingIni();

	//run thread
	new boost::thread(&MainForm::WatchProcessThread, this);

	//create login infomation shared memory
	CreateLoginInfomationSharedMemory();
}

MainForm::~MainForm()
{

}

void MainForm::SaveSettingIni()
{
	QSettings *setting = new QSettings("Setting.ini", QSettings::IniFormat);

	setting->setValue("Path", GamePath);
	
	for (int i = 0; i < ui->treeWidgetAccountList->topLevelItemCount(); i++)
	{
		QTreeWidgetItem *item = ui->treeWidgetAccountList->topLevelItem(i);
		QStringList list;

		list.append(QString::number(item->checkState(0)));

		for (int j = 1; j < ui->treeWidgetAccountList->columnCount(); j++)
		{
			list.append(item->text(j));
		}

		QString username = list.at(1);

		setting = new QSettings("Account/" + username + "/Login.ini", QSettings::IniFormat);

		setting->setValue("Workable", list.at(0));
		setting->setValue("Username", username);
		setting->setValue("Password", list.at(2));
		setting->setValue("SecondaryPassword", list.at(3));
		setting->setValue("World", list.at(4));
		setting->setValue("Channel", list.at(5));
		setting->setValue("Character", list.at(6));
	}
}

void MainForm::OpenSettingIni()
{
	QSettings *setting = new QSettings("Setting.ini", QSettings::IniFormat);

	GamePath = setting->value("Path", "").toString();

	setWindowTitle("FunnyMapleManager" + (QString)" - " + GamePath);
	
	QDir *dir = new QDir("Account");
	QStringList files = dir->entryList(QDir::AllDirs | QDir::NoDotAndDotDot);

	ui->treeWidgetAccountList->clear();

	for (int i = 0; i < files.count(); i++)
	{
		setting = new QSettings(dir->dirName() + "/" + files.at(i) + "/Login.ini", QSettings::IniFormat);

		QTreeWidgetItem *item = new QTreeWidgetItem();

		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsEditable | Qt::ItemIsUserCheckable);
		item->setCheckState(0, (Qt::CheckState)setting->value("Workable", "").toString().toInt());
		item->setText(1, setting->value("Username", "").toString());
		item->setText(2, setting->value("Password", "").toString());
		item->setText(3, setting->value("SecondaryPassword", "").toString());
		item->setText(4, setting->value("World", "").toString());
		item->setText(5, setting->value("Channel", "").toString());
		item->setText(6, setting->value("Character", "").toString());

		ui->treeWidgetAccountList->addTopLevelItem(item);
	}
}

QProcess *MainForm::LaunchProcess(const QString path, const QString loginInfomation)
{
	QProcess *process = new QProcess();

	process->start(path, QStringList());

	while (!UpdateLoginInfomationSharedMemory(loginInfomation))
	{
		Sleep(1);
	}

	while (Process::FindExactWindow(true, process->pid()->dwProcessId, L"StartUpDlgClass") == NULL)
	{
		Sleep(1);
	}

	while (!Process::InjectDll(process->pid()->dwProcessId, DllPath.toUtf8().data()))
	{
		Sleep(1);
	}
	
	while (Process::FindExactWindow(true, process->pid()->dwProcessId, L"MapleStoryClass") == NULL)
	{
		Sleep(1);
	}

	return process;
}

void MainForm::TerminateAllProcesses()
{
	for (int i = 0; i < ProcessInfomationList.count(); i++)
	{
		TerminateProcess(ProcessInfomationList.at(i).Process->hProcess, -1);
	}

	ProcessInfomationList.clear();
}

bool MainForm::CreateLoginInfomationSharedMemory()
{
	QSharedMemory *sharedMemory = new QSharedMemory("LoginInfomationSharedMemory");

	if (sharedMemory->isAttached())
	{
		sharedMemory->detach();

		return false;
	}

	if (!sharedMemory->create(1024)) 
	{
		return false;
	}

	return true;
}

bool MainForm::UpdateLoginInfomationSharedMemory(const QString loginInfomation)
{
	QSharedMemory *sharedMemory = new QSharedMemory("LoginInfomationSharedMemory");

	if (!sharedMemory->attach())
	{
		return false;
	}
	
	QBuffer buffer;
	QDataStream out(&buffer);

	if (!buffer.open(QBuffer::ReadWrite))
	{
		return false;
	}

	out << loginInfomation.toUtf8().data();

	if (!sharedMemory->lock()) 
	{
		return false;
	}

	memcpy((char *)sharedMemory->constData(), buffer.data().data(), qMin(sharedMemory->size(), (int)buffer.size()));

	if (!sharedMemory->unlock()) 
	{
		return false;
	}

	return true;
}

QString MainForm::CreateLoginInfomation(const QString username, const QString password, const QString secondaryPassword, const QString world, const QString channel, const QString character)
{
	QStringList list;
					
	list.append(username);
	list.append(password);
	list.append(secondaryPassword);
	list.append(world);
	list.append(channel);
	list.append(character);

	return list.join("|");
}

void MainForm::WatchProcessThread()
{
	while (true)
	{
		if (WorkingProcess)
		{
			for (int i = 0; i < ProcessInfomationList.count(); i++)
			{
				if (Process::FindExactWindow(true, ProcessInfomationList.at(i).Process->dwProcessId, L"MapleStoryClass"))
				{
					continue;
				}

				TerminateProcess(ProcessInfomationList.at(i).Process->hProcess, -1);

				QString login = ProcessInfomationList.at(i).Login;

				ProcessInfomation info;

				info.Process = LaunchProcess(GamePath, login)->pid();
				info.Login = login;

				ProcessInfomationList.replace(i, info);
				
				Sleep(LaunchProcessInterval);
			}
		}

		Sleep(1000);
	}
}

void MainForm::Action_Triggered()
{
	QObject *s = sender();

	if (s == ui->actionAddToAccountList)
	{
		QDialog *dialog = new AccountAdditionForm(this, Qt::Tool | Qt::MSWindowsFixedSizeDialogHint);

		dialog->exec();
	}

	else if (s == ui->actionDeleteFromAccountList)
	{
		QTreeWidgetItem *item = ui->treeWidgetAccountList->currentItem();

		if (item == NULL)
		{
			return;
		}

		delete item;
	}

	else if (s == ui->actionOpenSetting)
	{
		OpenSettingIni();
	}

	else if (s == ui->actionSaveSetting)
	{
		SaveSettingIni();
	}

	else if (s == ui->actionLaunchProcess)
	{
		ProcessInfomationList.clear();

		int accounts = ui->treeWidgetAccountList->topLevelItemCount();

		if (accounts == 0)
		{
			QMessageBox::critical(this, "Error", "Please add an account.");

			return;
		}

		QFile *file = new QFile(GamePath);
	
		if (!file->open(QIODevice::ReadOnly))
		{
			QMessageBox::critical(this, "Error", "Can not open the MapleStory.exe.");

			return;
		}

		file->close();

		file = new QFile(DllPath);
	
		if (!file->open(QIODevice::ReadOnly))
		{
			QMessageBox::critical(this, "Error", "Can not open the dll.");

			return;
		}

		file->close();

		for (int i = 0; i < accounts; i++)
		{
			QTreeWidgetItem *item = ui->treeWidgetAccountList->topLevelItem(i);

			if (item->checkState(0) == Qt::Unchecked)
			{
				continue;
			}

			QString login = CreateLoginInfomation(item->text(1), item->text(2), item->text(3), QString::number(MapleStory::GetWorldIndex(item->text(4))), QString::number(item->text(5).toInt() - 1), QString::number(item->text(6).toInt() - 1));

			ProcessInfomation info;

			info.Process = LaunchProcess(GamePath, login)->pid();
			info.Login = login;

			ProcessInfomationList.append(info);

			Sleep(LaunchProcessInterval);
		}

		WorkingProcess = true;

		ui->actionAddToAccountList->setEnabled(false);
		ui->actionDeleteFromAccountList->setEnabled(false);
		ui->actionLaunchProcess->setEnabled(false);
		ui->actionTerminateProcess->setEnabled(true);
		ui->actionSetPath->setEnabled(false);
	}

	else if (s == ui->actionTerminateProcess)
	{
		WorkingProcess = false;

		TerminateAllProcesses();

		ui->actionAddToAccountList->setEnabled(true);
		ui->actionDeleteFromAccountList->setEnabled(true);
		ui->actionLaunchProcess->setEnabled(true);
		ui->actionTerminateProcess->setEnabled(false);
		ui->actionSetPath->setEnabled(true);
	}

	else if (s == ui->actionSetPath)
	{
		QFile *file = new QFile(QFileDialog::getOpenFileName(this, "Open", NULL, "MapleStory.exe"));
	
		if (!file->open(QIODevice::ReadOnly))
		{
			return;
		}

		setWindowTitle("FunnyMapleManager" + (QString)" - " + (GamePath = file->fileName()));

		file->close();
	}
}

void MainForm::closeEvent(QCloseEvent *event)
{
	TerminateAllProcesses();
}