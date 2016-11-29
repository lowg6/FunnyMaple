#include "MainForm.h"
#include "MultiInclude.h"

MainForm *MainFormClass;
QString currentModulePath;

MainForm::MainForm(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	dllPath = currentModulePath.remove(currentModulePath.mid(currentModulePath.lastIndexOf("\\") + 1));

	//initialize pointer
	ui = new Ui::MainFormClass;
	MainFormClass = this;

	//setup gui
	ui->setupUi(this);

	setWindowFlags(Qt::Tool | Qt::MSWindowsFixedSizeDialogHint | Qt::WindowStaysOnTopHint);
	setWindowTitle(windowTitle() + " - " + (QString)Address::Version);

	ui->treeWidgetItemFilterList->addAction(ui->actionDeleteFromItemFilterList);
	ui->treeWidgetItemFilterList->addAction(ui->actionClearItemFilterList);

	ui->treeWidgetItemFilterList->setColumnWidth(0, 60);

	//open setting
	OpenSettingIni();

	//run thread
	new boost::thread(&MainForm::ReceiveHotKeyThread, this);
	new boost::thread(&MainForm::UpdateInfomationThread, this);
}

MainForm::~MainForm()
{

}

void MainForm::SaveSettingIni()
{
	QSettings *setting = new QSettings(dllPath + "Setting.ini", QSettings::IniFormat);

	setting->beginGroup("Hack");
	setting->setValue("checkBoxFullGodMode", ui->checkBoxFullGodMode->isChecked());
	setting->setValue("checkBoxFullGuard", ui->checkBoxFullGuard->isChecked());
	setting->setValue("checkBoxGenericNoDelay", ui->checkBoxGenericNoDelay->isChecked());
	setting->setValue("checkBoxJumpDownAnywhere", ui->checkBoxJumpDownAnywhere->isChecked());
	setting->setValue("checkBoxMobFreeze", ui->checkBoxMobFreeze->isChecked());
	setting->setValue("checkBoxMobFreezeStrong", ui->checkBoxMobFreezeStrong->isChecked());
	setting->setValue("checkBoxMobDisarm", ui->checkBoxMobDisarm->isChecked());
	setting->setValue("checkBoxNoMobActionByDamaged", ui->checkBoxNoMobActionByDamaged->isChecked());
	setting->setValue("checkBoxNoMeteor", ui->checkBoxNoMeteor->isChecked());
	setting->setValue("checkBoxResetBlockedQuests", ui->checkBoxResetBlockedQuests->isChecked());
	setting->endGroup();

	setting->beginGroup("Bot");
	setting->setValue("comboBoxBotMethodList", ui->comboBoxBotMethodList->currentIndex());
	setting->setValue("checkBoxBotAutoAttack", ui->checkBoxBotAutoAttack->isChecked());
	setting->setValue("checkBoxBotAutoLoot", ui->checkBoxBotAutoLoot->isChecked());
	setting->setValue("spinBoxBotAutoAttackDelay", ui->spinBoxBotAutoAttackDelay->value());
	setting->setValue("spinBoxBotAutoLootDelay", ui->spinBoxBotAutoLootDelay->value());
	setting->setValue("checkBoxBotAutoHp", ui->checkBoxBotAutoHp->isChecked());
	setting->setValue("checkBoxBotAutoMp", ui->checkBoxBotAutoMp->isChecked());
	setting->setValue("spinBoxBotAutoHpValue", ui->spinBoxBotAutoHpValue->value());
	setting->setValue("spinBoxBotAutoMpValue", ui->spinBoxBotAutoMpValue->value());
	setting->setValue("checkBoxBotAutoSkill1", ui->checkBoxBotAutoSkill1->isChecked());
	setting->setValue("checkBoxBotAutoSkill2", ui->checkBoxBotAutoSkill2->isChecked());
	setting->setValue("checkBoxBotAutoSkill3", ui->checkBoxBotAutoSkill3->isChecked());
	setting->setValue("checkBoxBotAutoSkill4", ui->checkBoxBotAutoSkill4->isChecked());
	setting->setValue("checkBoxBotAutoSkill5", ui->checkBoxBotAutoSkill5->isChecked());
	setting->setValue("spinBoxBotAutoSkill1Delay", ui->spinBoxBotAutoSkill1Delay->value());
	setting->setValue("spinBoxBotAutoSkill2Delay", ui->spinBoxBotAutoSkill2Delay->value());
	setting->setValue("spinBoxBotAutoSkill3Delay", ui->spinBoxBotAutoSkill3Delay->value());
	setting->setValue("spinBoxBotAutoSkill4Delay", ui->spinBoxBotAutoSkill4Delay->value());
	setting->setValue("spinBoxBotAutoSkill5Delay", ui->spinBoxBotAutoSkill5Delay->value());
	setting->endGroup();

	setting->beginGroup("Item");
	setting->setValue("checkBoxEnableItemFilter", ui->checkBoxEnableItemFilter->isChecked());
	setting->setValue("checkBoxItemFilterWhitelist", ui->checkBoxItemFilterWhitelist->isChecked());
	setting->setValue("checkBoxDropMesoOnly", ui->checkBoxDropMesoOnly->isChecked());
	setting->endGroup();

	setting = new QSettings(dllPath + "Item.ini", QSettings::IniFormat);
	
	int count = ui->treeWidgetItemFilterList->topLevelItemCount();

	if (count != 0)
	{
		for (int i = 0; i < count; i++)
		{
			QTreeWidgetItem *item = ui->treeWidgetItemFilterList->topLevelItem(i);
			QStringList list;

			list.append(item->text(0));
			list.append(item->text(1));

			setting->setValue(QString::number(i), list.join("|"));
		}
	}
	else
	{
		QFile::remove(setting->fileName());
	}
}

void MainForm::OpenSettingIni()
{
	QSettings *setting = new QSettings(dllPath + "Setting.ini", QSettings::IniFormat);

	setting->beginGroup("Hack");
	ui->checkBoxFullGodMode->setChecked(setting->value("checkBoxFullGodMode", false).toBool());
	ui->checkBoxFullGuard->setChecked(setting->value("checkBoxFullGuard", false).toBool());
	ui->checkBoxGenericNoDelay->setChecked(setting->value("checkBoxGenericNoDelay", false).toBool());
	ui->checkBoxJumpDownAnywhere->setChecked(setting->value("checkBoxJumpDownAnywhere", false).toBool());
	ui->checkBoxMobFreeze->setChecked(setting->value("checkBoxMobFreeze", false).toBool());
	ui->checkBoxMobFreezeStrong->setChecked(setting->value("checkBoxMobFreezeStrong", false).toBool());
	ui->checkBoxMobDisarm->setChecked(setting->value("checkBoxMobDisarm", false).toBool());
	ui->checkBoxNoMobActionByDamaged->setChecked(setting->value("checkBoxNoMobActionByDamaged", false).toBool());
	ui->checkBoxNoMeteor->setChecked(setting->value("checkBoxNoMeteor", false).toBool());
	ui->checkBoxResetBlockedQuests->setChecked(setting->value("checkBoxResetBlockedQuests", false).toBool());
	setting->endGroup();

	setting->beginGroup("Bot");
	ui->comboBoxBotMethodList->setCurrentIndex(setting->value("comboBoxBotMethodList", 0).toInt());
	ui->checkBoxBotAutoAttack->setChecked(setting->value("checkBoxBotAutoAttack", false).toBool());
	ui->checkBoxBotAutoLoot->setChecked(setting->value("checkBoxBotAutoLoot", false).toBool());
	ui->spinBoxBotAutoAttackDelay->setValue(setting->value("spinBoxBotAutoAttackDelay", 0).toInt());
	ui->spinBoxBotAutoLootDelay->setValue(setting->value("spinBoxBotAutoLootDelay", 0).toInt());
	ui->checkBoxBotAutoHp->setChecked(setting->value("checkBoxBotAutoHp", false).toBool());
	ui->checkBoxBotAutoMp->setChecked(setting->value("checkBoxBotAutoMp", false).toBool());
	ui->spinBoxBotAutoHpValue->setValue(setting->value("spinBoxBotAutoHpValue", 0).toInt());
	ui->spinBoxBotAutoMpValue->setValue(setting->value("spinBoxBotAutoMpValue", 0).toInt());
	ui->checkBoxBotAutoSkill1->setChecked(setting->value("checkBoxBotAutoSkill1", false).toBool());
	ui->checkBoxBotAutoSkill2->setChecked(setting->value("checkBoxBotAutoSkill2", false).toBool());
	ui->checkBoxBotAutoSkill3->setChecked(setting->value("checkBoxBotAutoSkill3", false).toBool());
	ui->checkBoxBotAutoSkill4->setChecked(setting->value("checkBoxBotAutoSkill4", false).toBool());
	ui->checkBoxBotAutoSkill5->setChecked(setting->value("checkBoxBotAutoSkill5", false).toBool());
	ui->spinBoxBotAutoSkill1Delay->setValue(setting->value("spinBoxBotAutoSkill1Delay", 0).toInt());
	ui->spinBoxBotAutoSkill2Delay->setValue(setting->value("spinBoxBotAutoSkill2Delay", 0).toInt());
	ui->spinBoxBotAutoSkill3Delay->setValue(setting->value("spinBoxBotAutoSkill3Delay", 0).toInt());
	ui->spinBoxBotAutoSkill4Delay->setValue(setting->value("spinBoxBotAutoSkill4Delay", 0).toInt());
	ui->spinBoxBotAutoSkill5Delay->setValue(setting->value("spinBoxBotAutoSkill5Delay", 0).toInt());
	setting->endGroup();

	setting->beginGroup("Item");
	ui->checkBoxEnableItemFilter->setChecked(setting->value("checkBoxEnableItemFilter", false).toBool());
	ui->checkBoxItemFilterWhitelist->setChecked(setting->value("checkBoxItemFilterWhitelist", false).toBool());
	ui->checkBoxDropMesoOnly->setChecked(setting->value("checkBoxDropMesoOnly", false).toBool());
	setting->endGroup();

	setting = new QSettings(dllPath + "Item.ini", QSettings::IniFormat);

	ui->treeWidgetItemFilterList->clear();

	for (int i = 0; setting->value(QString::number(i)).type() != QVariant::Invalid; i++)
	{
		QStringList list = setting->value(QString::number(i), "").toString().split("|");
		QTreeWidgetItem *item = new QTreeWidgetItem();

		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
		item->setText(0, list.at(0));
		item->setText(1, list.at(1));

		ui->treeWidgetItemFilterList->addTopLevelItem(item);
	}

	SetHack();
	SetItem();
}

void MainForm::SetBot()
{
	if (MS.Bot.Variable.Flag.EnableBot)
	{
		MS.Bot.DisableBot();

		return;
	}

	QString method = ui->comboBoxBotMethodList->currentText();
	
	if (method == "None")
	{
		MS.Bot.EnableBot(NULL);
	}
	else if (method == "Kami Vac")
	{
		MS.Bot.EnableBot(Method_KamiVac);
	}
	else if (method == "Kami Vac Loot Included")
	{
		MS.Bot.EnableBot(Method_KamiVacLootIncluded);
	}
	else if (method == "Mu Lung Dojo To Farm Mu Gong's Soul")
	{
		MS.Bot.EnableBot(Method_MuLungDojoToFarmMugongsSoul);
	}

	if (ui->checkBoxBotAutoAttack->isChecked()) MS.Bot.CreateAutoActionThread(VK_DELETE, ui->spinBoxBotAutoAttackDelay->value());
	if (ui->checkBoxBotAutoLoot->isChecked())   MS.Bot.CreateAutoActionThread(VK_Z, ui->spinBoxBotAutoLootDelay->value());

	if (ui->checkBoxBotAutoHp->isChecked())     MS.Bot.CreateAutoRecoveryThread(VK_END, Recovery_Hp, ui->spinBoxBotAutoHpValue->value());
	if (ui->checkBoxBotAutoMp->isChecked())     MS.Bot.CreateAutoRecoveryThread(VK_NEXT, Recovery_Mp, ui->spinBoxBotAutoMpValue->value());

	if (ui->checkBoxBotAutoSkill1->isChecked()) MS.Bot.CreateAutoSkillThread(VK_1, (ui->spinBoxBotAutoSkill1Delay->value() * 1000));
	if (ui->checkBoxBotAutoSkill2->isChecked()) MS.Bot.CreateAutoSkillThread(VK_2, (ui->spinBoxBotAutoSkill2Delay->value() * 1000));
	if (ui->checkBoxBotAutoSkill3->isChecked()) MS.Bot.CreateAutoSkillThread(VK_3, (ui->spinBoxBotAutoSkill3Delay->value() * 1000));
	if (ui->checkBoxBotAutoSkill4->isChecked()) MS.Bot.CreateAutoSkillThread(VK_4, (ui->spinBoxBotAutoSkill4Delay->value() * 1000));
	if (ui->checkBoxBotAutoSkill5->isChecked()) MS.Bot.CreateAutoSkillThread(VK_5, (ui->spinBoxBotAutoSkill5Delay->value() * 1000));
}

void MainForm::SetItem()
{
	MS.Item.Variable.Flag.EnableItemFilter = ui->checkBoxEnableItemFilter->isChecked();
	MS.Item.Variable.Flag.Whitelist = ui->checkBoxItemFilterWhitelist->isChecked();
	MS.Item.Variable.Flag.DropMesoOnly = ui->checkBoxDropMesoOnly->isChecked();

	MS.Item.UpdateItemList(ui->treeWidgetItemFilterList);
}

void MainForm::SetHack()
{
	MS.Hack.Variable.Flag.FullGodMode = ui->checkBoxFullGodMode->isChecked();
	MS.Hack.Variable.Flag.FullGuard = ui->checkBoxFullGuard->isChecked();
	MS.Hack.Variable.Flag.GenericNoDelay = ui->checkBoxGenericNoDelay->isChecked();
	MS.Hack.Variable.Flag.JumpDownAnywhere = ui->checkBoxJumpDownAnywhere->isChecked();
	MS.Hack.Variable.Flag.MobFreeze = ui->checkBoxMobFreeze->isChecked();
	MS.Hack.Variable.Flag.MobFreezeStrong = ui->checkBoxMobFreezeStrong->isChecked();
	MS.Hack.Variable.Flag.MobDisarm = ui->checkBoxMobDisarm->isChecked();
	MS.Hack.Variable.Flag.NoMobActionByDamaged = ui->checkBoxNoMobActionByDamaged->isChecked();
	MS.Hack.Variable.Flag.NoMeteor = ui->checkBoxNoMeteor->isChecked();
	MS.Hack.Variable.Flag.ResetBlockedQuests = ui->checkBoxResetBlockedQuests->isChecked();
}

void MainForm::ReceiveHotKeyThread()
{
	while (true)
	{
		if (GetForegroundWindow() == MS.Variable.MapleStoryWindow)
		{
			if (GetAsyncKeyState(VK_F1) & 1)
			{
				QCheckBox *check = ui->checkBoxStatusBot;

				check->setChecked(!check->isChecked());
			}

			else if (GetAsyncKeyState(VK_F9) & 1)
			{
				QMetaObject::invokeMethod(this, "setVisible", Qt::QueuedConnection, Q_ARG(bool, !isVisible()));
			}
		}

		Sleep(1);
	}
}

void MainForm::UpdateInfomationThread()
{
	while (true)
	{
		if (MS.Data.IsLoggingIn())
		{
			int currentHp = MS.Data.GetCurrentHp(), currentMp = MS.Data.GetCurrentMp();
			int maximumHp = MS.Data.GetMaximumHp(), maximumMp = MS.Data.GetMaximumMp();

			ui->progressBarInfomationHp->setFormat("Hp: " + QString::number(currentHp) + " / " + QString::number(maximumHp) + " (%p%)");
			ui->progressBarInfomationMp->setFormat("Mp: " + QString::number(currentMp) + " / " + QString::number(maximumMp) + " (%p%)");

			QMetaObject::invokeMethod(ui->progressBarInfomationHp, "setMaximum", Qt::QueuedConnection, Q_ARG(int, maximumHp));
			QMetaObject::invokeMethod(ui->progressBarInfomationMp, "setMaximum", Qt::QueuedConnection, Q_ARG(int, maximumMp));
			QMetaObject::invokeMethod(ui->progressBarInfomationHp, "setValue", Qt::QueuedConnection, Q_ARG(int, currentHp));
			QMetaObject::invokeMethod(ui->progressBarInfomationMp, "setValue", Qt::QueuedConnection, Q_ARG(int, currentMp));

			QString world = ((QString)"World: " + MS.Data.GetWorldName(MS.Data.GetWorldIndex()));
			QString channel = ("Channel: " + QString::number(MS.Data.GetChannel()));
			QString map = ("Map: " + QString::number(MS.Data.GetMapId()));
			QString position = ("Pos: [" + QString::number(MS.Data.GetCharacterPosition().x) + "," + QString::number(MS.Data.GetCharacterPosition().y) + "]");
			QString attacks = ("Attacks: " + QString::number(MS.Data.GetAttackCount()));
			QString mobs = ("Mobs: " + QString::number(MS.Data.GetMobCount()));
			QString items = ("Items: " + QString::number(MS.Data.GetItemCount()));
			QString people = ("People: " + QString::number(MS.Data.GetPeopleCount()));

			QMetaObject::invokeMethod(ui->labelInfomationWorld, "setText", Qt::QueuedConnection, Q_ARG(QString, world));
			QMetaObject::invokeMethod(ui->labelInfomationChannel, "setText", Qt::QueuedConnection, Q_ARG(QString, channel));
			QMetaObject::invokeMethod(ui->labelInfomationMapId, "setText", Qt::QueuedConnection, Q_ARG(QString, map));
			QMetaObject::invokeMethod(ui->labelInfomationPosition, "setText", Qt::QueuedConnection, Q_ARG(QString, position));
			QMetaObject::invokeMethod(ui->labelInfomationAttackCount, "setText", Qt::QueuedConnection, Q_ARG(QString, attacks));
			QMetaObject::invokeMethod(ui->labelInfomationMobCount, "setText", Qt::QueuedConnection, Q_ARG(QString, mobs));
			QMetaObject::invokeMethod(ui->labelInfomationItemCount, "setText", Qt::QueuedConnection, Q_ARG(QString, items));
			QMetaObject::invokeMethod(ui->labelInfomationPeopleCount, "setText", Qt::QueuedConnection, Q_ARG(QString, people));
		}

		Sleep(1);
	}
}

void MainForm::CheckBox_Toggled(bool state)
{
	QObject *s = sender();

	if (s == ui->checkBoxStatusBot)
	{
		SetBot();
		
		QMetaObject::invokeMethod(ui->tabBot, "setEnabled", Qt::QueuedConnection, Q_ARG(bool, !ui->checkBoxStatusBot->isChecked()));
	}

	else if (s == ui->checkBoxFullGodMode || s == ui->checkBoxFullGuard || s == ui->checkBoxGenericNoDelay || s == ui->checkBoxJumpDownAnywhere ||
			 s == ui->checkBoxMobFreeze || s == ui->checkBoxMobFreezeStrong || s == ui->checkBoxMobDisarm || s == ui->checkBoxNoMobActionByDamaged ||
			 s == ui->checkBoxNoMeteor || s == ui->checkBoxResetBlockedQuests)
	{
		SetHack();
	}

	else if (s == ui->checkBoxEnableItemFilter || s == ui->checkBoxItemFilterWhitelist || s == ui->checkBoxDropMesoOnly)
	{
		SetItem();
	}

	else if (s == ui->checkBoxBlockDropItemsPacket || s == ui->checkBoxBlockBoardGameWindowPacket)
	{
		QCheckBox *check;
		QString packet;

		if (s == ui->checkBoxBlockDropItemsPacket)
		{
			check = ui->checkBoxBlockDropItemsPacket;
			packet = "E2 02";
		}
		else if (s == ui->checkBoxBlockBoardGameWindowPacket)
		{
			check = ui->checkBoxBlockBoardGameWindowPacket;
			packet = "94 03 14 0D";
		}

		if (check->isChecked())
		{
			MS.Packet.AddToBlockRecvPacketList(packet);
		}
		else
		{
			MS.Packet.RemoveFromBlockRecvPacketList(packet);
		}
	}
}

void MainForm::PushButton_Clicked()
{
	QObject *s = sender();

	if (s == ui->pushButtonHideWindow)
	{
		hide();
	}

	else if (s == ui->pushButtonSaveSetting)
	{
		SaveSettingIni();
	}

	else if (s == ui->pushButtonOpenSetting)
	{
		OpenSettingIni();
	}

	else if (s == ui->pushButtonAddToItemFilterList)
	{
		QString id = ui->spinBoxAddToItemFilterListId->text();
		QString name = ui->lineEditAddToItemFilterListName->text().trimmed();

		if (id.isEmpty() || name.isEmpty())
		{
			return;
		}

		QList<QTreeWidgetItem *>items = ui->treeWidgetItemFilterList->findItems(id, Qt::MatchExactly, 0);
		
		if (!items.count() == 0)
		{
			return;
		}

		QTreeWidgetItem *item = new QTreeWidgetItem();
		
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
		item->setText(0, id);
		item->setText(1, name);

		ui->treeWidgetItemFilterList->addTopLevelItem(item);

		SetItem();

		ui->spinBoxAddToItemFilterListId->clear();
		ui->lineEditAddToItemFilterListName->clear();
	}
}

void MainForm::Action_Triggered()
{
	QObject *s = sender();

	if (s == ui->actionDeleteFromItemFilterList)
	{
		QTreeWidgetItem *item = ui->treeWidgetItemFilterList->currentItem();

		if (item == NULL)
		{
			return;
		}

		delete item;

		SetItem();
	}

	else if (s == ui->actionClearItemFilterList)
	{
		ui->treeWidgetItemFilterList->clear();

		SetItem();
	}
}

void MainForm::Slider_ValueChanged(int value)
{
	QObject *s = sender();

	if (s == ui->horizontalSliderSpeedHack)
	{
		static bool injected;

		if (!injected)
		{
			Detour::SetHook(true, (void **)&MS.Win32Api.GetTickCount, GetTickCount_Hook);
			Detour::SetHook(true, (void **)&MS.Win32Api.timeGetTime, timeGetTime_Hook);

			injected = true;
		}

		MS.Win32Api.SetSpeedHackAcceleration(ui->horizontalSliderSpeedHack->value());

		MS.Win32Api.Variable.Flag.SpeedHack = true;
	}
}

void MainForm::closeEvent(QCloseEvent *event)
{
	switch (QMessageBox::question(this, "Question", "Terminate MapleStory?", QMessageBox::Ok | QMessageBox::Cancel))
	{
	case QMessageBox::Ok:
		TerminateProcess(GetCurrentProcess(), -1);
		
		break;

	case QMessageBox::Cancel:
		event->ignore();
		
		break;
	}
}