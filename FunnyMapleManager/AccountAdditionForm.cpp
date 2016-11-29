#include "AccountAdditionForm.h"
#include "MainForm.h"
#include "MultiInclude.h"

AccountAdditionForm::AccountAdditionForm(QWidget *parent, Qt::WFlags flags)
	: QDialog(parent, flags)
{
	ui = new Ui::Dialog;

	ui->setupUi(this);
	
	SetupComboBox();
}

AccountAdditionForm::~AccountAdditionForm()
{

}

void AccountAdditionForm::SetupComboBox()
{
	for (int i = 0; i < MapleStory::GetWorldCount(); i++)
	{
		ui->comboBoxWorld->addItem((QString)MapleStory::GetWorldName(i));
	}

	for (int i = 1; i <= MapleStory::GetWorldChannel(ui->comboBoxWorld->currentIndex()); i++)
	{
		ui->comboBoxChannel->addItem(QString::number(i));
	}

	for (int i = 1; i <= 50; i++)
	{
		ui->comboBoxCharacter->addItem(QString::number(i));
	}
}

void AccountAdditionForm::ComboBox_Activated()
{
	QObject *s = sender();

	if (s == ui->comboBoxWorld)
	{
		ui->comboBoxChannel->clear();

		for (int i = 1; i <= MapleStory::GetWorldChannel(ui->comboBoxWorld->currentIndex()); i++)
		{
			ui->comboBoxChannel->addItem(QString::number(i));
		}
	}
}

void AccountAdditionForm::DialogButtonBox_Clicked(QAbstractButton *button)
{
	QObject *s = sender();
	
	if (s == ui->dialogButtonBoxAddAccount)
	{
		QDialogButtonBox::StandardButton btn = ui->dialogButtonBoxAddAccount->standardButton(button);

		if (btn == QDialogButtonBox::Ok)
		{
			QString username = ui->labelUsername->text();
			QString password = ui->labelPassword->text();
			QString secondaryPassword = ui->labelSecondaryPassword->text();
			QString world = ui->comboBoxWorld->currentText();
			QString channel = ui->comboBoxChannel->currentText();
			QString character = ui->comboBoxCharacter->currentText();

			if (username.isEmpty() || password.isEmpty() || secondaryPassword.isEmpty() || channel.isEmpty())
			{
				QMessageBox::critical(this, "Error", "Please enter all.");

				return;
			}
			
			QList<QTreeWidgetItem *>items = MainFormClass->ui->treeWidgetAccountList->findItems(username, Qt::MatchExactly, 1);
		
			if (!items.count() == 0)
			{
				QMessageBox::critical(this, "Error", "This username is already taken.");

				return;
			}

			QTreeWidgetItem *item = new QTreeWidgetItem();

			item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled | Qt::ItemIsEditable | Qt::ItemIsUserCheckable);
			item->setCheckState(0, Qt::Checked);
			item->setText(1, username);
			item->setText(2, password);
			item->setText(3, secondaryPassword);
			item->setText(4, world);
			item->setText(5, channel);
			item->setText(6, character);

			MainFormClass->ui->treeWidgetAccountList->addTopLevelItem(item);
		}

		close();
	}
}