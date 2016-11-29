/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFormClass
{
public:
    QAction *actionDeleteFromItemFilterList;
    QAction *actionClearItemFilterList;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonSaveSetting;
    QPushButton *pushButtonOpenSetting;
    QTabWidget *tabWidgetMain;
    QWidget *tabHome;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QCheckBox *checkBoxStatusBot;
    QPushButton *pushButtonHideWindow;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QWidget *widget;
    QGridLayout *gridLayout_9;
    QLabel *labelInfomationWorld;
    QLabel *labelInfomationAttackCount;
    QLabel *labelInfomationMapId;
    QLabel *labelInfomationItemCount;
    QWidget *widget_2;
    QGridLayout *gridLayout_10;
    QLabel *labelInfomationChannel;
    QLabel *labelInfomationPosition;
    QLabel *labelInfomationPeopleCount;
    QLabel *labelInfomationMobCount;
    QProgressBar *progressBarInfomationHp;
    QProgressBar *progressBarInfomationMp;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBoxFullGodMode;
    QCheckBox *checkBoxGenericNoDelay;
    QCheckBox *checkBoxJumpDownAnywhere;
    QCheckBox *checkBoxFullGuard;
    QCheckBox *checkBoxMobFreeze;
    QCheckBox *checkBoxMobDisarm;
    QCheckBox *checkBoxMobFreezeStrong;
    QCheckBox *checkBoxResetBlockedQuests;
    QCheckBox *checkBoxNoMeteor;
    QCheckBox *checkBoxNoMobActionByDamaged;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QSlider *horizontalSliderSpeedHack;
    QWidget *tabBot;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_8;
    QComboBox *comboBoxBotMethodList;
    QLabel *label_2;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_15;
    QSpinBox *spinBoxBotAutoLootDelay;
    QSpinBox *spinBoxBotAutoAttackDelay;
    QCheckBox *checkBoxBotAutoAttack;
    QCheckBox *checkBoxBotAutoLoot;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_11;
    QCheckBox *checkBoxBotAutoHp;
    QCheckBox *checkBoxBotAutoMp;
    QSpinBox *spinBoxBotAutoMpValue;
    QSpinBox *spinBoxBotAutoHpValue;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_13;
    QCheckBox *checkBoxBotAutoSkill5;
    QCheckBox *checkBoxBotAutoSkill4;
    QSpinBox *spinBoxBotAutoSkill2Delay;
    QSpinBox *spinBoxBotAutoSkill3Delay;
    QSpinBox *spinBoxBotAutoSkill4Delay;
    QSpinBox *spinBoxBotAutoSkill5Delay;
    QSpinBox *spinBoxBotAutoSkill1Delay;
    QCheckBox *checkBoxBotAutoSkill1;
    QCheckBox *checkBoxBotAutoSkill2;
    QCheckBox *checkBoxBotAutoSkill3;
    QSpacerItem *verticalSpacer;
    QWidget *tabItem;
    QGridLayout *gridLayout_14;
    QTabWidget *tabWidget;
    QWidget *tabItemFilter;
    QGridLayout *gridLayout_12;
    QTreeWidget *treeWidgetItemFilterList;
    QPushButton *pushButtonAddToItemFilterList;
    QLabel *label_3;
    QLabel *label_4;
    QSpinBox *spinBoxAddToItemFilterListId;
    QLineEdit *lineEditAddToItemFilterListName;
    QCheckBox *checkBoxItemFilterWhitelist;
    QCheckBox *checkBoxDropMesoOnly;
    QCheckBox *checkBoxEnableItemFilter;
    QFrame *line;
    QWidget *tabPacket;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_16;
    QLabel *label_5;
    QCheckBox *checkBoxOneClickBoardGameDisconnect;
    QCheckBox *checkBoxSpamDrop10MesosPackets;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *spinBoxSpamDrop10MesosPacketsDelay;
    QSpinBox *spinBoxSpamDrop10MesosPacketsCount;
    QGroupBox *groupBox_10;
    QGridLayout *gridLayout_17;
    QCheckBox *checkBoxBlockDropItemsPacket;
    QCheckBox *checkBoxBlockBoardGameWindowPacket;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainFormClass)
    {
        if (MainFormClass->objectName().isEmpty())
            MainFormClass->setObjectName(QString::fromUtf8("MainFormClass"));
        MainFormClass->resize(299, 422);
        MainFormClass->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background:white;\n"
"}\n"
"\n"
"QTabWidget::pane\n"
"{\n"
"background:white;\n"
"border:1px solid gray;\n"
"}\n"
"\n"
"QTabWidget#tabWidgetMain::pane\n"
"{\n"
"background:white;\n"
"border:none;\n"
"border-top:1px solid gray;\n"
"border-bottom:1px solid gray;\n"
"}\n"
"\n"
"QGroupBox\n"
"{\n"
"border:1px solid gray;\n"
"margin-top:5px;\n"
"}\n"
"\n"
"QGroupBox::title\n"
"{\n"
"color:blue;\n"
"top:-7px;\n"
"left:5px;\n"
"}\n"
"\n"
"QCheckBox:checked\n"
"{\n"
"color:green;\n"
"}"));
        actionDeleteFromItemFilterList = new QAction(MainFormClass);
        actionDeleteFromItemFilterList->setObjectName(QString::fromUtf8("actionDeleteFromItemFilterList"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/FunnyMaple/Resources/page_white_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDeleteFromItemFilterList->setIcon(icon);
        actionClearItemFilterList = new QAction(MainFormClass);
        actionClearItemFilterList->setObjectName(QString::fromUtf8("actionClearItemFilterList"));
        actionClearItemFilterList->setIcon(icon);
        centralWidget = new QWidget(MainFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(0);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonSaveSetting = new QPushButton(centralWidget);
        pushButtonSaveSetting->setObjectName(QString::fromUtf8("pushButtonSaveSetting"));

        gridLayout_2->addWidget(pushButtonSaveSetting, 2, 1, 1, 1);

        pushButtonOpenSetting = new QPushButton(centralWidget);
        pushButtonOpenSetting->setObjectName(QString::fromUtf8("pushButtonOpenSetting"));

        gridLayout_2->addWidget(pushButtonOpenSetting, 2, 2, 1, 1);

        tabWidgetMain = new QTabWidget(centralWidget);
        tabWidgetMain->setObjectName(QString::fromUtf8("tabWidgetMain"));
        tabHome = new QWidget();
        tabHome->setObjectName(QString::fromUtf8("tabHome"));
        gridLayout = new QGridLayout(tabHome);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(tabHome);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(-1, 6, -1, 6);
        checkBoxStatusBot = new QCheckBox(groupBox);
        checkBoxStatusBot->setObjectName(QString::fromUtf8("checkBoxStatusBot"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBoxStatusBot->sizePolicy().hasHeightForWidth());
        checkBoxStatusBot->setSizePolicy(sizePolicy);

        gridLayout_6->addWidget(checkBoxStatusBot, 0, 0, 1, 1);

        pushButtonHideWindow = new QPushButton(groupBox);
        pushButtonHideWindow->setObjectName(QString::fromUtf8("pushButtonHideWindow"));

        gridLayout_6->addWidget(pushButtonHideWindow, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_6 = new QGroupBox(tabHome);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        widget = new QWidget(groupBox_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_9 = new QGridLayout(widget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        labelInfomationWorld = new QLabel(widget);
        labelInfomationWorld->setObjectName(QString::fromUtf8("labelInfomationWorld"));
        labelInfomationWorld->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationWorld, 0, 0, 1, 1);

        labelInfomationAttackCount = new QLabel(widget);
        labelInfomationAttackCount->setObjectName(QString::fromUtf8("labelInfomationAttackCount"));
        labelInfomationAttackCount->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationAttackCount, 2, 0, 1, 1);

        labelInfomationMapId = new QLabel(widget);
        labelInfomationMapId->setObjectName(QString::fromUtf8("labelInfomationMapId"));
        labelInfomationMapId->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationMapId, 1, 0, 1, 1);

        labelInfomationItemCount = new QLabel(widget);
        labelInfomationItemCount->setObjectName(QString::fromUtf8("labelInfomationItemCount"));
        labelInfomationItemCount->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationItemCount, 3, 0, 1, 1);


        gridLayout_7->addWidget(widget, 6, 0, 2, 1);

        widget_2 = new QWidget(groupBox_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_10 = new QGridLayout(widget_2);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        labelInfomationChannel = new QLabel(widget_2);
        labelInfomationChannel->setObjectName(QString::fromUtf8("labelInfomationChannel"));
        labelInfomationChannel->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(labelInfomationChannel, 2, 0, 1, 1);

        labelInfomationPosition = new QLabel(widget_2);
        labelInfomationPosition->setObjectName(QString::fromUtf8("labelInfomationPosition"));
        labelInfomationPosition->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(labelInfomationPosition, 4, 0, 1, 1);

        labelInfomationPeopleCount = new QLabel(widget_2);
        labelInfomationPeopleCount->setObjectName(QString::fromUtf8("labelInfomationPeopleCount"));
        labelInfomationPeopleCount->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(labelInfomationPeopleCount, 6, 0, 1, 1);

        labelInfomationMobCount = new QLabel(widget_2);
        labelInfomationMobCount->setObjectName(QString::fromUtf8("labelInfomationMobCount"));
        labelInfomationMobCount->setAlignment(Qt::AlignCenter);

        gridLayout_10->addWidget(labelInfomationMobCount, 5, 0, 1, 1);


        gridLayout_7->addWidget(widget_2, 6, 1, 2, 1);

        progressBarInfomationHp = new QProgressBar(groupBox_6);
        progressBarInfomationHp->setObjectName(QString::fromUtf8("progressBarInfomationHp"));
        progressBarInfomationHp->setMinimumSize(QSize(0, 25));
        progressBarInfomationHp->setMaximumSize(QSize(16777215, 25));
        progressBarInfomationHp->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"border:1px solid gray;\n"
"margin-top:15px;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"background:red;\n"
"margin:1px;\n"
"}"));
        progressBarInfomationHp->setValue(0);

        gridLayout_7->addWidget(progressBarInfomationHp, 1, 0, 1, 1);

        progressBarInfomationMp = new QProgressBar(groupBox_6);
        progressBarInfomationMp->setObjectName(QString::fromUtf8("progressBarInfomationMp"));
        progressBarInfomationMp->setMinimumSize(QSize(0, 25));
        progressBarInfomationMp->setMaximumSize(QSize(16777215, 25));
        progressBarInfomationMp->setStyleSheet(QString::fromUtf8("QProgressBar\n"
"{\n"
"border:1px solid gray;\n"
"margin-top:15px;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"background:blue;\n"
"margin:1px;\n"
"}"));
        progressBarInfomationMp->setValue(0);

        gridLayout_7->addWidget(progressBarInfomationMp, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_6, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(tabHome);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBoxFullGodMode = new QCheckBox(groupBox_5);
        checkBoxFullGodMode->setObjectName(QString::fromUtf8("checkBoxFullGodMode"));

        gridLayout_4->addWidget(checkBoxFullGodMode, 0, 0, 1, 1);

        checkBoxGenericNoDelay = new QCheckBox(groupBox_5);
        checkBoxGenericNoDelay->setObjectName(QString::fromUtf8("checkBoxGenericNoDelay"));

        gridLayout_4->addWidget(checkBoxGenericNoDelay, 2, 0, 1, 1);

        checkBoxJumpDownAnywhere = new QCheckBox(groupBox_5);
        checkBoxJumpDownAnywhere->setObjectName(QString::fromUtf8("checkBoxJumpDownAnywhere"));

        gridLayout_4->addWidget(checkBoxJumpDownAnywhere, 2, 2, 1, 1);

        checkBoxFullGuard = new QCheckBox(groupBox_5);
        checkBoxFullGuard->setObjectName(QString::fromUtf8("checkBoxFullGuard"));

        gridLayout_4->addWidget(checkBoxFullGuard, 0, 2, 1, 1);

        checkBoxMobFreeze = new QCheckBox(groupBox_5);
        checkBoxMobFreeze->setObjectName(QString::fromUtf8("checkBoxMobFreeze"));

        gridLayout_4->addWidget(checkBoxMobFreeze, 3, 0, 1, 1);

        checkBoxMobDisarm = new QCheckBox(groupBox_5);
        checkBoxMobDisarm->setObjectName(QString::fromUtf8("checkBoxMobDisarm"));

        gridLayout_4->addWidget(checkBoxMobDisarm, 4, 0, 1, 1);

        checkBoxMobFreezeStrong = new QCheckBox(groupBox_5);
        checkBoxMobFreezeStrong->setObjectName(QString::fromUtf8("checkBoxMobFreezeStrong"));

        gridLayout_4->addWidget(checkBoxMobFreezeStrong, 3, 2, 1, 1);

        checkBoxResetBlockedQuests = new QCheckBox(groupBox_5);
        checkBoxResetBlockedQuests->setObjectName(QString::fromUtf8("checkBoxResetBlockedQuests"));

        gridLayout_4->addWidget(checkBoxResetBlockedQuests, 9, 2, 1, 1);

        checkBoxNoMeteor = new QCheckBox(groupBox_5);
        checkBoxNoMeteor->setObjectName(QString::fromUtf8("checkBoxNoMeteor"));

        gridLayout_4->addWidget(checkBoxNoMeteor, 9, 0, 1, 1);

        checkBoxNoMobActionByDamaged = new QCheckBox(groupBox_5);
        checkBoxNoMobActionByDamaged->setObjectName(QString::fromUtf8("checkBoxNoMobActionByDamaged"));

        gridLayout_4->addWidget(checkBoxNoMobActionByDamaged, 4, 2, 1, 1);


        gridLayout->addWidget(groupBox_5, 2, 0, 1, 1);

        groupBox_8 = new QGroupBox(tabHome);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setEnabled(true);
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(-1, 9, -1, 6);
        horizontalSliderSpeedHack = new QSlider(groupBox_8);
        horizontalSliderSpeedHack->setObjectName(QString::fromUtf8("horizontalSliderSpeedHack"));
        horizontalSliderSpeedHack->setMinimum(1);
        horizontalSliderSpeedHack->setMaximum(10);
        horizontalSliderSpeedHack->setOrientation(Qt::Horizontal);
        horizontalSliderSpeedHack->setTickPosition(QSlider::TicksBelow);
        horizontalSliderSpeedHack->setTickInterval(1);

        gridLayout_3->addWidget(horizontalSliderSpeedHack, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_8, 3, 0, 1, 1);

        tabWidgetMain->addTab(tabHome, QString());
        tabBot = new QWidget();
        tabBot->setObjectName(QString::fromUtf8("tabBot"));
        gridLayout_5 = new QGridLayout(tabBot);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(3, 3, 3, 3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_4 = new QGroupBox(tabBot);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_8 = new QGridLayout(groupBox_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        comboBoxBotMethodList = new QComboBox(groupBox_4);
        comboBoxBotMethodList->setObjectName(QString::fromUtf8("comboBoxBotMethodList"));

        gridLayout_8->addWidget(comboBoxBotMethodList, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_8->addWidget(label_2, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox_7 = new QGroupBox(tabBot);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_15 = new QGridLayout(groupBox_7);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        spinBoxBotAutoLootDelay = new QSpinBox(groupBox_7);
        spinBoxBotAutoLootDelay->setObjectName(QString::fromUtf8("spinBoxBotAutoLootDelay"));
        spinBoxBotAutoLootDelay->setMaximum(9999);

        gridLayout_15->addWidget(spinBoxBotAutoLootDelay, 1, 3, 1, 1);

        spinBoxBotAutoAttackDelay = new QSpinBox(groupBox_7);
        spinBoxBotAutoAttackDelay->setObjectName(QString::fromUtf8("spinBoxBotAutoAttackDelay"));
        spinBoxBotAutoAttackDelay->setMinimumSize(QSize(80, 0));
        spinBoxBotAutoAttackDelay->setMaximum(9999);

        gridLayout_15->addWidget(spinBoxBotAutoAttackDelay, 0, 3, 1, 1);

        checkBoxBotAutoAttack = new QCheckBox(groupBox_7);
        checkBoxBotAutoAttack->setObjectName(QString::fromUtf8("checkBoxBotAutoAttack"));

        gridLayout_15->addWidget(checkBoxBotAutoAttack, 0, 0, 1, 1);

        checkBoxBotAutoLoot = new QCheckBox(groupBox_7);
        checkBoxBotAutoLoot->setObjectName(QString::fromUtf8("checkBoxBotAutoLoot"));

        gridLayout_15->addWidget(checkBoxBotAutoLoot, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_15->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_7, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(tabBot);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_11 = new QGridLayout(groupBox_2);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        checkBoxBotAutoHp = new QCheckBox(groupBox_2);
        checkBoxBotAutoHp->setObjectName(QString::fromUtf8("checkBoxBotAutoHp"));

        gridLayout_11->addWidget(checkBoxBotAutoHp, 1, 0, 1, 1);

        checkBoxBotAutoMp = new QCheckBox(groupBox_2);
        checkBoxBotAutoMp->setObjectName(QString::fromUtf8("checkBoxBotAutoMp"));

        gridLayout_11->addWidget(checkBoxBotAutoMp, 2, 0, 1, 1);

        spinBoxBotAutoMpValue = new QSpinBox(groupBox_2);
        spinBoxBotAutoMpValue->setObjectName(QString::fromUtf8("spinBoxBotAutoMpValue"));
        spinBoxBotAutoMpValue->setMaximum(500000);

        gridLayout_11->addWidget(spinBoxBotAutoMpValue, 2, 2, 1, 1);

        spinBoxBotAutoHpValue = new QSpinBox(groupBox_2);
        spinBoxBotAutoHpValue->setObjectName(QString::fromUtf8("spinBoxBotAutoHpValue"));
        spinBoxBotAutoHpValue->setMinimumSize(QSize(80, 0));
        spinBoxBotAutoHpValue->setMaximum(500000);

        gridLayout_11->addWidget(spinBoxBotAutoHpValue, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_11->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(tabBot);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_13 = new QGridLayout(groupBox_3);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        checkBoxBotAutoSkill5 = new QCheckBox(groupBox_3);
        checkBoxBotAutoSkill5->setObjectName(QString::fromUtf8("checkBoxBotAutoSkill5"));

        gridLayout_13->addWidget(checkBoxBotAutoSkill5, 5, 0, 1, 1);

        checkBoxBotAutoSkill4 = new QCheckBox(groupBox_3);
        checkBoxBotAutoSkill4->setObjectName(QString::fromUtf8("checkBoxBotAutoSkill4"));

        gridLayout_13->addWidget(checkBoxBotAutoSkill4, 4, 0, 1, 1);

        spinBoxBotAutoSkill2Delay = new QSpinBox(groupBox_3);
        spinBoxBotAutoSkill2Delay->setObjectName(QString::fromUtf8("spinBoxBotAutoSkill2Delay"));
        spinBoxBotAutoSkill2Delay->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxBotAutoSkill2Delay, 2, 1, 1, 1);

        spinBoxBotAutoSkill3Delay = new QSpinBox(groupBox_3);
        spinBoxBotAutoSkill3Delay->setObjectName(QString::fromUtf8("spinBoxBotAutoSkill3Delay"));
        spinBoxBotAutoSkill3Delay->setMinimumSize(QSize(80, 0));
        spinBoxBotAutoSkill3Delay->setMaximumSize(QSize(80, 16777215));
        spinBoxBotAutoSkill3Delay->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxBotAutoSkill3Delay, 3, 1, 1, 1);

        spinBoxBotAutoSkill4Delay = new QSpinBox(groupBox_3);
        spinBoxBotAutoSkill4Delay->setObjectName(QString::fromUtf8("spinBoxBotAutoSkill4Delay"));
        spinBoxBotAutoSkill4Delay->setMinimumSize(QSize(80, 0));
        spinBoxBotAutoSkill4Delay->setMaximumSize(QSize(80, 16777215));
        spinBoxBotAutoSkill4Delay->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxBotAutoSkill4Delay, 4, 1, 1, 1);

        spinBoxBotAutoSkill5Delay = new QSpinBox(groupBox_3);
        spinBoxBotAutoSkill5Delay->setObjectName(QString::fromUtf8("spinBoxBotAutoSkill5Delay"));
        spinBoxBotAutoSkill5Delay->setMinimumSize(QSize(80, 0));
        spinBoxBotAutoSkill5Delay->setMaximumSize(QSize(80, 16777215));
        spinBoxBotAutoSkill5Delay->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxBotAutoSkill5Delay, 5, 1, 1, 1);

        spinBoxBotAutoSkill1Delay = new QSpinBox(groupBox_3);
        spinBoxBotAutoSkill1Delay->setObjectName(QString::fromUtf8("spinBoxBotAutoSkill1Delay"));
        spinBoxBotAutoSkill1Delay->setMaximum(9999);

        gridLayout_13->addWidget(spinBoxBotAutoSkill1Delay, 1, 1, 1, 1);

        checkBoxBotAutoSkill1 = new QCheckBox(groupBox_3);
        checkBoxBotAutoSkill1->setObjectName(QString::fromUtf8("checkBoxBotAutoSkill1"));

        gridLayout_13->addWidget(checkBoxBotAutoSkill1, 1, 0, 1, 1);

        checkBoxBotAutoSkill2 = new QCheckBox(groupBox_3);
        checkBoxBotAutoSkill2->setObjectName(QString::fromUtf8("checkBoxBotAutoSkill2"));

        gridLayout_13->addWidget(checkBoxBotAutoSkill2, 2, 0, 1, 1);

        checkBoxBotAutoSkill3 = new QCheckBox(groupBox_3);
        checkBoxBotAutoSkill3->setObjectName(QString::fromUtf8("checkBoxBotAutoSkill3"));

        gridLayout_13->addWidget(checkBoxBotAutoSkill3, 3, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 4, 0, 1, 1);

        tabWidgetMain->addTab(tabBot, QString());
        tabItem = new QWidget();
        tabItem->setObjectName(QString::fromUtf8("tabItem"));
        gridLayout_14 = new QGridLayout(tabItem);
        gridLayout_14->setSpacing(6);
        gridLayout_14->setContentsMargins(3, 3, 3, 3);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        tabWidget = new QTabWidget(tabItem);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabItemFilter = new QWidget();
        tabItemFilter->setObjectName(QString::fromUtf8("tabItemFilter"));
        gridLayout_12 = new QGridLayout(tabItemFilter);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        treeWidgetItemFilterList = new QTreeWidget(tabItemFilter);
        treeWidgetItemFilterList->setObjectName(QString::fromUtf8("treeWidgetItemFilterList"));
        treeWidgetItemFilterList->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidgetItemFilterList->setIndentation(0);
        treeWidgetItemFilterList->setUniformRowHeights(true);
        treeWidgetItemFilterList->setSortingEnabled(true);

        gridLayout_12->addWidget(treeWidgetItemFilterList, 5, 0, 3, 5);

        pushButtonAddToItemFilterList = new QPushButton(tabItemFilter);
        pushButtonAddToItemFilterList->setObjectName(QString::fromUtf8("pushButtonAddToItemFilterList"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonAddToItemFilterList->sizePolicy().hasHeightForWidth());
        pushButtonAddToItemFilterList->setSizePolicy(sizePolicy2);

        gridLayout_12->addWidget(pushButtonAddToItemFilterList, 2, 4, 2, 1);

        label_3 = new QLabel(tabItemFilter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(tabItemFilter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_12->addWidget(label_4, 3, 0, 1, 1);

        spinBoxAddToItemFilterListId = new QSpinBox(tabItemFilter);
        spinBoxAddToItemFilterListId->setObjectName(QString::fromUtf8("spinBoxAddToItemFilterListId"));
        spinBoxAddToItemFilterListId->setMaximum(2147483647);

        gridLayout_12->addWidget(spinBoxAddToItemFilterListId, 2, 1, 1, 3);

        lineEditAddToItemFilterListName = new QLineEdit(tabItemFilter);
        lineEditAddToItemFilterListName->setObjectName(QString::fromUtf8("lineEditAddToItemFilterListName"));

        gridLayout_12->addWidget(lineEditAddToItemFilterListName, 3, 1, 1, 3);

        checkBoxItemFilterWhitelist = new QCheckBox(tabItemFilter);
        checkBoxItemFilterWhitelist->setObjectName(QString::fromUtf8("checkBoxItemFilterWhitelist"));

        gridLayout_12->addWidget(checkBoxItemFilterWhitelist, 0, 2, 1, 2);

        checkBoxDropMesoOnly = new QCheckBox(tabItemFilter);
        checkBoxDropMesoOnly->setObjectName(QString::fromUtf8("checkBoxDropMesoOnly"));

        gridLayout_12->addWidget(checkBoxDropMesoOnly, 0, 4, 1, 1);

        checkBoxEnableItemFilter = new QCheckBox(tabItemFilter);
        checkBoxEnableItemFilter->setObjectName(QString::fromUtf8("checkBoxEnableItemFilter"));

        gridLayout_12->addWidget(checkBoxEnableItemFilter, 0, 0, 1, 2);

        line = new QFrame(tabItemFilter);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_12->addWidget(line, 1, 0, 1, 5);

        tabWidget->addTab(tabItemFilter, QString());

        gridLayout_14->addWidget(tabWidget, 0, 0, 1, 1);

        tabWidgetMain->addTab(tabItem, QString());
        tabPacket = new QWidget();
        tabPacket->setObjectName(QString::fromUtf8("tabPacket"));
        gridLayout_18 = new QGridLayout(tabPacket);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(3, 3, 3, 3);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        groupBox_9 = new QGroupBox(tabPacket);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_16 = new QGridLayout(groupBox_9);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_5, 1, 4, 1, 1);

        checkBoxOneClickBoardGameDisconnect = new QCheckBox(groupBox_9);
        checkBoxOneClickBoardGameDisconnect->setObjectName(QString::fromUtf8("checkBoxOneClickBoardGameDisconnect"));

        gridLayout_16->addWidget(checkBoxOneClickBoardGameDisconnect, 2, 0, 1, 7);

        checkBoxSpamDrop10MesosPackets = new QCheckBox(groupBox_9);
        checkBoxSpamDrop10MesosPackets->setObjectName(QString::fromUtf8("checkBoxSpamDrop10MesosPackets"));

        gridLayout_16->addWidget(checkBoxSpamDrop10MesosPackets, 0, 0, 1, 7);

        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_16->addWidget(label_6, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_16->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        spinBoxSpamDrop10MesosPacketsDelay = new QSpinBox(groupBox_9);
        spinBoxSpamDrop10MesosPacketsDelay->setObjectName(QString::fromUtf8("spinBoxSpamDrop10MesosPacketsDelay"));
        spinBoxSpamDrop10MesosPacketsDelay->setMaximum(10);

        gridLayout_16->addWidget(spinBoxSpamDrop10MesosPacketsDelay, 1, 5, 1, 2);

        spinBoxSpamDrop10MesosPacketsCount = new QSpinBox(groupBox_9);
        spinBoxSpamDrop10MesosPacketsCount->setObjectName(QString::fromUtf8("spinBoxSpamDrop10MesosPacketsCount"));
        spinBoxSpamDrop10MesosPacketsCount->setMinimum(1);
        spinBoxSpamDrop10MesosPacketsCount->setMaximum(10);

        gridLayout_16->addWidget(spinBoxSpamDrop10MesosPacketsCount, 1, 2, 1, 2);


        gridLayout_18->addWidget(groupBox_9, 1, 0, 1, 1);

        groupBox_10 = new QGroupBox(tabPacket);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        gridLayout_17 = new QGridLayout(groupBox_10);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        checkBoxBlockDropItemsPacket = new QCheckBox(groupBox_10);
        checkBoxBlockDropItemsPacket->setObjectName(QString::fromUtf8("checkBoxBlockDropItemsPacket"));

        gridLayout_17->addWidget(checkBoxBlockDropItemsPacket, 0, 0, 1, 1);

        checkBoxBlockBoardGameWindowPacket = new QCheckBox(groupBox_10);
        checkBoxBlockBoardGameWindowPacket->setObjectName(QString::fromUtf8("checkBoxBlockBoardGameWindowPacket"));

        gridLayout_17->addWidget(checkBoxBlockBoardGameWindowPacket, 1, 0, 1, 1);


        gridLayout_18->addWidget(groupBox_10, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer_2, 2, 0, 1, 1);

        tabWidgetMain->addTab(tabPacket, QString());

        gridLayout_2->addWidget(tabWidgetMain, 1, 1, 1, 2);

        MainFormClass->setCentralWidget(centralWidget);

        retranslateUi(MainFormClass);
        QObject::connect(checkBoxFullGodMode, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxGenericNoDelay, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxJumpDownAnywhere, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxMobFreezeStrong, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxNoMobActionByDamaged, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxNoMeteor, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxFullGuard, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxMobFreeze, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxMobDisarm, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxResetBlockedQuests, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxStatusBot, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonHideWindow, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(horizontalSliderSpeedHack, SIGNAL(valueChanged(int)), MainFormClass, SLOT(Slider_ValueChanged(int)));
        QObject::connect(pushButtonAddToItemFilterList, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(checkBoxEnableItemFilter, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxItemFilterWhitelist, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxDropMesoOnly, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonSaveSetting, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(pushButtonOpenSetting, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(actionClearItemFilterList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionDeleteFromItemFilterList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(checkBoxBlockDropItemsPacket, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxBlockBoardGameWindowPacket, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxSpamDrop10MesosPackets, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxOneClickBoardGameDisconnect, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));

        tabWidgetMain->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFormClass)
    {
        MainFormClass->setWindowTitle(QApplication::translate("MainFormClass", "FunnyMapleBypassless", 0, QApplication::UnicodeUTF8));
        actionDeleteFromItemFilterList->setText(QApplication::translate("MainFormClass", "Delete", 0, QApplication::UnicodeUTF8));
        actionClearItemFilterList->setText(QApplication::translate("MainFormClass", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClearItemFilterList->setToolTip(QApplication::translate("MainFormClass", "Clear", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButtonSaveSetting->setText(QApplication::translate("MainFormClass", "Save Setting", 0, QApplication::UnicodeUTF8));
        pushButtonOpenSetting->setText(QApplication::translate("MainFormClass", "Open Setting", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainFormClass", "Status", 0, QApplication::UnicodeUTF8));
        checkBoxStatusBot->setText(QApplication::translate("MainFormClass", "Bot (F1)", 0, QApplication::UnicodeUTF8));
        pushButtonHideWindow->setText(QApplication::translate("MainFormClass", "Hide Window (F9)", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("MainFormClass", "Infomation", 0, QApplication::UnicodeUTF8));
        labelInfomationWorld->setText(QApplication::translate("MainFormClass", "World: None", 0, QApplication::UnicodeUTF8));
        labelInfomationAttackCount->setText(QApplication::translate("MainFormClass", "Attacks: None", 0, QApplication::UnicodeUTF8));
        labelInfomationMapId->setText(QApplication::translate("MainFormClass", "Map: None", 0, QApplication::UnicodeUTF8));
        labelInfomationItemCount->setText(QApplication::translate("MainFormClass", "Items: None", 0, QApplication::UnicodeUTF8));
        labelInfomationChannel->setText(QApplication::translate("MainFormClass", "Channel: None", 0, QApplication::UnicodeUTF8));
        labelInfomationPosition->setText(QApplication::translate("MainFormClass", "Pos: None", 0, QApplication::UnicodeUTF8));
        labelInfomationPeopleCount->setText(QApplication::translate("MainFormClass", "People: None", 0, QApplication::UnicodeUTF8));
        labelInfomationMobCount->setText(QApplication::translate("MainFormClass", "Mobs: None", 0, QApplication::UnicodeUTF8));
        progressBarInfomationHp->setFormat(QApplication::translate("MainFormClass", "Hp: 0 / 0 (%p%)", 0, QApplication::UnicodeUTF8));
        progressBarInfomationMp->setFormat(QApplication::translate("MainFormClass", "Mp: 0 / 0 (%p%)", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainFormClass", "Hacks", 0, QApplication::UnicodeUTF8));
        checkBoxFullGodMode->setText(QApplication::translate("MainFormClass", "58 Secs God Mode", 0, QApplication::UnicodeUTF8));
        checkBoxGenericNoDelay->setText(QApplication::translate("MainFormClass", "Generic No Delay", 0, QApplication::UnicodeUTF8));
        checkBoxJumpDownAnywhere->setText(QApplication::translate("MainFormClass", "Jump Down Anywhere", 0, QApplication::UnicodeUTF8));
        checkBoxFullGuard->setText(QApplication::translate("MainFormClass", "7 Times Guard", 0, QApplication::UnicodeUTF8));
        checkBoxMobFreeze->setText(QApplication::translate("MainFormClass", "Mob Freeze", 0, QApplication::UnicodeUTF8));
        checkBoxMobDisarm->setText(QApplication::translate("MainFormClass", "Mob Disarm", 0, QApplication::UnicodeUTF8));
        checkBoxMobFreezeStrong->setText(QApplication::translate("MainFormClass", "Mob Freeze Strong", 0, QApplication::UnicodeUTF8));
        checkBoxResetBlockedQuests->setText(QApplication::translate("MainFormClass", "Reset Blocked Quests", 0, QApplication::UnicodeUTF8));
        checkBoxNoMeteor->setText(QApplication::translate("MainFormClass", "No Meteor", 0, QApplication::UnicodeUTF8));
        checkBoxNoMobActionByDamaged->setText(QApplication::translate("MainFormClass", "No Mob Action By Dmged", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainFormClass", "Speed Hack", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabHome), QApplication::translate("MainFormClass", "Home", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainFormClass", "General", 0, QApplication::UnicodeUTF8));
        comboBoxBotMethodList->clear();
        comboBoxBotMethodList->insertItems(0, QStringList()
         << QApplication::translate("MainFormClass", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Kami Vac", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Mu Lung Dojo To Farm Mu Gong's Soul", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("MainFormClass", "Method:", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainFormClass", "Auto Action", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoAttack->setText(QApplication::translate("MainFormClass", "Auto Attack (Del) Every MSecs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoLoot->setText(QApplication::translate("MainFormClass", "Auto Loot (Z) Every MSecs", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainFormClass", "Auto Recovery", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoHp->setText(QApplication::translate("MainFormClass", "Auto HP (End) At Val", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoMp->setText(QApplication::translate("MainFormClass", "Auto MP (PgDn) At Val", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainFormClass", "Auto Skill", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoSkill5->setText(QApplication::translate("MainFormClass", "Auto Skill (5) Every Secs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoSkill4->setText(QApplication::translate("MainFormClass", "Auto Skill (4) Every Secs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoSkill1->setText(QApplication::translate("MainFormClass", "Auto Skill (1) Every Secs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoSkill2->setText(QApplication::translate("MainFormClass", "Auto Skill (2) Every Secs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoSkill3->setText(QApplication::translate("MainFormClass", "Auto Skill (3) Every Secs", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabBot), QApplication::translate("MainFormClass", "Bot", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetItemFilterList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainFormClass", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainFormClass", "ID", 0, QApplication::UnicodeUTF8));
        pushButtonAddToItemFilterList->setText(QApplication::translate("MainFormClass", "Add", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainFormClass", "ID", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainFormClass", "Name", 0, QApplication::UnicodeUTF8));
        checkBoxItemFilterWhitelist->setText(QApplication::translate("MainFormClass", "Whitelist", 0, QApplication::UnicodeUTF8));
        checkBoxDropMesoOnly->setText(QApplication::translate("MainFormClass", "Drop Meso Only", 0, QApplication::UnicodeUTF8));
        checkBoxEnableItemFilter->setText(QApplication::translate("MainFormClass", "Enable", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabItemFilter), QApplication::translate("MainFormClass", "Item Filter", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabItem), QApplication::translate("MainFormClass", "Item", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("MainFormClass", "Send", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainFormClass", "Delay(ms):", 0, QApplication::UnicodeUTF8));
        checkBoxOneClickBoardGameDisconnect->setText(QApplication::translate("MainFormClass", "One Click Board Game Disconnect", 0, QApplication::UnicodeUTF8));
        checkBoxSpamDrop10MesosPackets->setText(QApplication::translate("MainFormClass", "Spam Drop 10 Mesos Packets", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainFormClass", "Count:", 0, QApplication::UnicodeUTF8));
        groupBox_10->setTitle(QApplication::translate("MainFormClass", "Recv", 0, QApplication::UnicodeUTF8));
        checkBoxBlockDropItemsPacket->setText(QApplication::translate("MainFormClass", "Block Drop Items Packet", 0, QApplication::UnicodeUTF8));
        checkBoxBlockBoardGameWindowPacket->setText(QApplication::translate("MainFormClass", "Block Board Game Window Packet", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabPacket), QApplication::translate("MainFormClass", "Packet", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainFormClass: public Ui_MainFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
