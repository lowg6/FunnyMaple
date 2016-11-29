#ifndef ACCOUNTADDITIONFORM_H
#define ACCOUNTADDITIONFORM_H

#include <QtGui>

#include "ui_AccountAdditionForm.h"

class AccountAdditionForm : public QDialog
{
	Q_OBJECT

public:
	AccountAdditionForm(QWidget *parent = 0, Qt::WFlags flags = 0);
	~AccountAdditionForm();

	Ui::Dialog *ui;

private:
	void SetupComboBox();

private slots:
	void ComboBox_Activated();
	void DialogButtonBox_Clicked(QAbstractButton *button);
};

#endif // ACCOUNTADDITIONFORM_H
