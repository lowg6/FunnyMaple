#ifndef MAINFORM_H
#define MAINFORM_H

#include "ui_MainForm.h"

class MainForm : public QMainWindow
{
	Q_OBJECT

public:
	MainForm(QWidget *parent = 0, Qt::WFlags flags = 0);
	~MainForm();

	Ui::MainFormClass *ui;

private:
	void SaveSettingIni();
	void OpenSettingIni();

	void SetBot();
	void SetItem();
	void SetHack();

	void ReceiveHotKeyThread();
	void UpdateInfomationThread();
	
public:
	void AddToRecentDropList(const int id);

private slots:
	void CheckBox_Toggled(bool state);
	void PushButton_Clicked();
	void Action_Triggered();
	void Slider_ValueChanged(int value);
	void SpinBox_ValueChanged(int value);

protected:
	void closeEvent(QCloseEvent *event);
};

extern MainForm *MainFormClass;

#endif // MAINFORM_H
