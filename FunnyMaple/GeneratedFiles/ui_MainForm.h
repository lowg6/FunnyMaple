/********************************************************************************
** Form generated from reading UI file 'MainForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFormClass
{
public:
    QAction *actionDeleteFromItemFilterList;
    QAction *actionClearItemFilterList;
    QAction *actionClearRecentDropList;
    QAction *actionDeleteFromRecentDropList;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidgetMain;
    QWidget *tabHome;
    QGridLayout *gridLayout_10;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QCheckBox *checkBoxFullGuard;
    QCheckBox *checkBoxGenericNoDelay;
    QCheckBox *checkBoxNoKnockBack;
    QCheckBox *checkBoxMobFreezeStrong;
    QCheckBox *checkBoxNoMeteor;
    QCheckBox *checkBoxFullGodMode;
    QCheckBox *checkBoxReactorDem;
    QCheckBox *checkBoxJumpDownAnywhere;
    QCheckBox *checkBoxMobFreeze;
    QCheckBox *checkBoxMobDisarm;
    QCheckBox *checkBoxNoMobActionByDamaged;
    QCheckBox *checkBoxResetBlockedQuests;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_3;
    QSlider *horizontalSliderSpeedHack;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QLabel *labelInfomationWorld;
    QLabel *labelInfomationAttackCount;
    QLabel *labelInfomationMapId;
    QLabel *labelInfomationItemCount;
    QWidget *widget_2;
    QGridLayout *gridLayout_9;
    QLabel *labelInfomationChannel;
    QLabel *labelInfomationPosition;
    QLabel *labelInfomationPeopleCount;
    QLabel *labelInfomationMobCount;
    QProgressBar *progressBarInfomationHp;
    QProgressBar *progressBarInfomationMp;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout_16;
    QPushButton *pushButtonSendPacket;
    QLineEdit *lineEditSendPacket;
    QCheckBox *checkBoxOneClickBoardGameDisconnect;
    QWidget *tabBot;
    QGridLayout *gridLayout_18;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_6;
    QComboBox *comboBoxBotMethodList;
    QLabel *label;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_15;
    QSpinBox *spinBoxBotAutoLootDelay;
    QSpinBox *spinBoxBotAutoAttackDelay;
    QCheckBox *checkBoxBotAutoAttack;
    QCheckBox *checkBoxBotAutoLoot;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_19;
    QSpinBox *spinBoxBotAutoChaosLockAttackCount;
    QCheckBox *checkBoxBotAutoChaosLock;
    QCheckBox *checkBoxBotAutoFuryAttack;
    QSpinBox *spinBoxBotAutoFuryAttackValue;
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
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonAddToItemFilterList;
    QTreeWidget *treeWidgetItemFilterList;
    QLineEdit *lineEditAddToItemFilterListName;
    QSpinBox *spinBoxAddToItemFilterListId;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line;
    QWidget *widget_5;
    QGridLayout *gridLayout_12;
    QCheckBox *checkBoxEnableItemFilter;
    QCheckBox *checkBoxItemFilterWhitelist;
    QCheckBox *checkBoxDropMesoOnly;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonSaveSetting;
    QPushButton *pushButtonOpenSetting;
    QPushButton *pushButtonHideWindow;
    QCheckBox *checkBoxStatusBot;
    QWidget *widget_4;
    QGridLayout *gridLayout_8;
    QLabel *label_4;
    QSpinBox *spinBoxLoginCharacterNumber;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QMainWindow *MainFormClass)
    {
        if (MainFormClass->objectName().isEmpty())
            MainFormClass->setObjectName(QString::fromUtf8("MainFormClass"));
        MainFormClass->resize(415, 476);
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
"QTabWidget#tabwMain::pane\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/FunnyMaple/Resources/cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClearItemFilterList->setIcon(icon1);
        actionClearRecentDropList = new QAction(MainFormClass);
        actionClearRecentDropList->setObjectName(QString::fromUtf8("actionClearRecentDropList"));
        actionClearRecentDropList->setIcon(icon1);
        actionDeleteFromRecentDropList = new QAction(MainFormClass);
        actionDeleteFromRecentDropList->setObjectName(QString::fromUtf8("actionDeleteFromRecentDropList"));
        actionDeleteFromRecentDropList->setIcon(icon);
        centralWidget = new QWidget(MainFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidgetMain = new QTabWidget(centralWidget);
        tabWidgetMain->setObjectName(QString::fromUtf8("tabWidgetMain"));
        tabWidgetMain->setIconSize(QSize(20, 20));
        tabHome = new QWidget();
        tabHome->setObjectName(QString::fromUtf8("tabHome"));
        gridLayout_10 = new QGridLayout(tabHome);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(3, 3, 3, 3);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        groupBox_5 = new QGroupBox(tabHome);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        checkBoxFullGuard = new QCheckBox(groupBox_5);
        checkBoxFullGuard->setObjectName(QString::fromUtf8("checkBoxFullGuard"));

        gridLayout_4->addWidget(checkBoxFullGuard, 0, 1, 1, 2);

        checkBoxGenericNoDelay = new QCheckBox(groupBox_5);
        checkBoxGenericNoDelay->setObjectName(QString::fromUtf8("checkBoxGenericNoDelay"));

        gridLayout_4->addWidget(checkBoxGenericNoDelay, 1, 1, 1, 1);

        checkBoxNoKnockBack = new QCheckBox(groupBox_5);
        checkBoxNoKnockBack->setObjectName(QString::fromUtf8("checkBoxNoKnockBack"));

        gridLayout_4->addWidget(checkBoxNoKnockBack, 1, 0, 1, 1);

        checkBoxMobFreezeStrong = new QCheckBox(groupBox_5);
        checkBoxMobFreezeStrong->setObjectName(QString::fromUtf8("checkBoxMobFreezeStrong"));

        gridLayout_4->addWidget(checkBoxMobFreezeStrong, 8, 0, 1, 1);

        checkBoxNoMeteor = new QCheckBox(groupBox_5);
        checkBoxNoMeteor->setObjectName(QString::fromUtf8("checkBoxNoMeteor"));

        gridLayout_4->addWidget(checkBoxNoMeteor, 11, 0, 1, 1);

        checkBoxFullGodMode = new QCheckBox(groupBox_5);
        checkBoxFullGodMode->setObjectName(QString::fromUtf8("checkBoxFullGodMode"));

        gridLayout_4->addWidget(checkBoxFullGodMode, 0, 0, 1, 1);

        checkBoxReactorDem = new QCheckBox(groupBox_5);
        checkBoxReactorDem->setObjectName(QString::fromUtf8("checkBoxReactorDem"));

        gridLayout_4->addWidget(checkBoxReactorDem, 2, 0, 1, 1);

        checkBoxJumpDownAnywhere = new QCheckBox(groupBox_5);
        checkBoxJumpDownAnywhere->setObjectName(QString::fromUtf8("checkBoxJumpDownAnywhere"));

        gridLayout_4->addWidget(checkBoxJumpDownAnywhere, 2, 1, 1, 1);

        checkBoxMobFreeze = new QCheckBox(groupBox_5);
        checkBoxMobFreeze->setObjectName(QString::fromUtf8("checkBoxMobFreeze"));

        gridLayout_4->addWidget(checkBoxMobFreeze, 3, 1, 1, 1);

        checkBoxMobDisarm = new QCheckBox(groupBox_5);
        checkBoxMobDisarm->setObjectName(QString::fromUtf8("checkBoxMobDisarm"));

        gridLayout_4->addWidget(checkBoxMobDisarm, 3, 0, 1, 1);

        checkBoxNoMobActionByDamaged = new QCheckBox(groupBox_5);
        checkBoxNoMobActionByDamaged->setObjectName(QString::fromUtf8("checkBoxNoMobActionByDamaged"));

        gridLayout_4->addWidget(checkBoxNoMobActionByDamaged, 8, 1, 1, 1);

        checkBoxResetBlockedQuests = new QCheckBox(groupBox_5);
        checkBoxResetBlockedQuests->setObjectName(QString::fromUtf8("checkBoxResetBlockedQuests"));

        gridLayout_4->addWidget(checkBoxResetBlockedQuests, 11, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_5, 1, 0, 1, 2);

        groupBox_8 = new QGroupBox(tabHome);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_3 = new QGridLayout(groupBox_8);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSliderSpeedHack = new QSlider(groupBox_8);
        horizontalSliderSpeedHack->setObjectName(QString::fromUtf8("horizontalSliderSpeedHack"));
        horizontalSliderSpeedHack->setMinimum(1);
        horizontalSliderSpeedHack->setMaximum(10);
        horizontalSliderSpeedHack->setOrientation(Qt::Horizontal);
        horizontalSliderSpeedHack->setTickPosition(QSlider::TicksBelow);
        horizontalSliderSpeedHack->setTickInterval(1);

        gridLayout_3->addWidget(horizontalSliderSpeedHack, 0, 0, 1, 1);


        gridLayout_10->addWidget(groupBox_8, 4, 0, 1, 2);

        groupBox_6 = new QGroupBox(tabHome);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_5 = new QGridLayout(groupBox_6);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(groupBox_6);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        labelInfomationWorld = new QLabel(widget);
        labelInfomationWorld->setObjectName(QString::fromUtf8("labelInfomationWorld"));
        labelInfomationWorld->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelInfomationWorld, 0, 0, 1, 1);

        labelInfomationAttackCount = new QLabel(widget);
        labelInfomationAttackCount->setObjectName(QString::fromUtf8("labelInfomationAttackCount"));
        labelInfomationAttackCount->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelInfomationAttackCount, 2, 0, 1, 1);

        labelInfomationMapId = new QLabel(widget);
        labelInfomationMapId->setObjectName(QString::fromUtf8("labelInfomationMapId"));
        labelInfomationMapId->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelInfomationMapId, 1, 0, 1, 1);

        labelInfomationItemCount = new QLabel(widget);
        labelInfomationItemCount->setObjectName(QString::fromUtf8("labelInfomationItemCount"));
        labelInfomationItemCount->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(labelInfomationItemCount, 3, 0, 1, 1);


        gridLayout_5->addWidget(widget, 8, 0, 2, 1);

        widget_2 = new QWidget(groupBox_6);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_9 = new QGridLayout(widget_2);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        labelInfomationChannel = new QLabel(widget_2);
        labelInfomationChannel->setObjectName(QString::fromUtf8("labelInfomationChannel"));
        labelInfomationChannel->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationChannel, 2, 0, 1, 1);

        labelInfomationPosition = new QLabel(widget_2);
        labelInfomationPosition->setObjectName(QString::fromUtf8("labelInfomationPosition"));
        labelInfomationPosition->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationPosition, 4, 0, 1, 1);

        labelInfomationPeopleCount = new QLabel(widget_2);
        labelInfomationPeopleCount->setObjectName(QString::fromUtf8("labelInfomationPeopleCount"));
        labelInfomationPeopleCount->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationPeopleCount, 6, 0, 1, 1);

        labelInfomationMobCount = new QLabel(widget_2);
        labelInfomationMobCount->setObjectName(QString::fromUtf8("labelInfomationMobCount"));
        labelInfomationMobCount->setAlignment(Qt::AlignCenter);

        gridLayout_9->addWidget(labelInfomationMobCount, 5, 0, 1, 1);


        gridLayout_5->addWidget(widget_2, 8, 1, 2, 1);

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

        gridLayout_5->addWidget(progressBarInfomationHp, 1, 0, 1, 1);

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

        gridLayout_5->addWidget(progressBarInfomationMp, 1, 1, 1, 1);


        gridLayout_10->addWidget(groupBox_6, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_3, 5, 0, 1, 2);

        groupBox_12 = new QGroupBox(tabHome);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout_16 = new QGridLayout(groupBox_12);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        pushButtonSendPacket = new QPushButton(groupBox_12);
        pushButtonSendPacket->setObjectName(QString::fromUtf8("pushButtonSendPacket"));

        gridLayout_16->addWidget(pushButtonSendPacket, 0, 1, 1, 1);

        lineEditSendPacket = new QLineEdit(groupBox_12);
        lineEditSendPacket->setObjectName(QString::fromUtf8("lineEditSendPacket"));

        gridLayout_16->addWidget(lineEditSendPacket, 0, 0, 1, 1);

        checkBoxOneClickBoardGameDisconnect = new QCheckBox(groupBox_12);
        checkBoxOneClickBoardGameDisconnect->setObjectName(QString::fromUtf8("checkBoxOneClickBoardGameDisconnect"));

        gridLayout_16->addWidget(checkBoxOneClickBoardGameDisconnect, 1, 0, 1, 2);


        gridLayout_10->addWidget(groupBox_12, 2, 0, 2, 2);

        tabWidgetMain->addTab(tabHome, QString());
        tabBot = new QWidget();
        tabBot->setObjectName(QString::fromUtf8("tabBot"));
        gridLayout_18 = new QGridLayout(tabBot);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(3, 3, 3, 3);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        groupBox = new QGroupBox(tabBot);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_6 = new QGridLayout(groupBox);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        comboBoxBotMethodList = new QComboBox(groupBox);
        comboBoxBotMethodList->setObjectName(QString::fromUtf8("comboBoxBotMethodList"));

        gridLayout_6->addWidget(comboBoxBotMethodList, 0, 1, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 0, 1, 1);


        gridLayout_18->addWidget(groupBox, 1, 0, 2, 1);

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

        groupBox_11 = new QGroupBox(groupBox_7);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_19 = new QGridLayout(groupBox_11);
        gridLayout_19->setSpacing(6);
        gridLayout_19->setContentsMargins(11, 11, 11, 11);
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        spinBoxBotAutoChaosLockAttackCount = new QSpinBox(groupBox_11);
        spinBoxBotAutoChaosLockAttackCount->setObjectName(QString::fromUtf8("spinBoxBotAutoChaosLockAttackCount"));
        spinBoxBotAutoChaosLockAttackCount->setMinimum(0);
        spinBoxBotAutoChaosLockAttackCount->setMaximum(100);
        spinBoxBotAutoChaosLockAttackCount->setValue(0);

        gridLayout_19->addWidget(spinBoxBotAutoChaosLockAttackCount, 0, 1, 1, 1);

        checkBoxBotAutoChaosLock = new QCheckBox(groupBox_11);
        checkBoxBotAutoChaosLock->setObjectName(QString::fromUtf8("checkBoxBotAutoChaosLock"));

        gridLayout_19->addWidget(checkBoxBotAutoChaosLock, 0, 0, 1, 1);

        checkBoxBotAutoFuryAttack = new QCheckBox(groupBox_11);
        checkBoxBotAutoFuryAttack->setObjectName(QString::fromUtf8("checkBoxBotAutoFuryAttack"));

        gridLayout_19->addWidget(checkBoxBotAutoFuryAttack, 1, 0, 1, 1);

        spinBoxBotAutoFuryAttackValue = new QSpinBox(groupBox_11);
        spinBoxBotAutoFuryAttackValue->setObjectName(QString::fromUtf8("spinBoxBotAutoFuryAttackValue"));
        spinBoxBotAutoFuryAttackValue->setMaximum(999);

        gridLayout_19->addWidget(spinBoxBotAutoFuryAttackValue, 1, 1, 1, 1);


        gridLayout_15->addWidget(groupBox_11, 2, 0, 1, 4);


        gridLayout_18->addWidget(groupBox_7, 3, 0, 1, 1);

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


        gridLayout_18->addWidget(groupBox_2, 4, 0, 1, 1);

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


        gridLayout_18->addWidget(groupBox_3, 5, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_18->addItem(verticalSpacer, 6, 0, 1, 1);

        tabWidgetMain->addTab(tabBot, QString());
        tabItem = new QWidget();
        tabItem->setObjectName(QString::fromUtf8("tabItem"));
        gridLayout_2 = new QGridLayout(tabItem);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        pushButtonAddToItemFilterList = new QPushButton(tabItem);
        pushButtonAddToItemFilterList->setObjectName(QString::fromUtf8("pushButtonAddToItemFilterList"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonAddToItemFilterList->sizePolicy().hasHeightForWidth());
        pushButtonAddToItemFilterList->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(pushButtonAddToItemFilterList, 5, 2, 2, 1);

        treeWidgetItemFilterList = new QTreeWidget(tabItem);
        treeWidgetItemFilterList->setObjectName(QString::fromUtf8("treeWidgetItemFilterList"));
        treeWidgetItemFilterList->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidgetItemFilterList->setIndentation(0);
        treeWidgetItemFilterList->setUniformRowHeights(true);
        treeWidgetItemFilterList->setSortingEnabled(true);

        gridLayout_2->addWidget(treeWidgetItemFilterList, 7, 0, 1, 3);

        lineEditAddToItemFilterListName = new QLineEdit(tabItem);
        lineEditAddToItemFilterListName->setObjectName(QString::fromUtf8("lineEditAddToItemFilterListName"));

        gridLayout_2->addWidget(lineEditAddToItemFilterListName, 6, 1, 1, 1);

        spinBoxAddToItemFilterListId = new QSpinBox(tabItem);
        spinBoxAddToItemFilterListId->setObjectName(QString::fromUtf8("spinBoxAddToItemFilterListId"));
        spinBoxAddToItemFilterListId->setMaximum(2147483647);

        gridLayout_2->addWidget(spinBoxAddToItemFilterListId, 5, 1, 1, 1);

        label_2 = new QLabel(tabItem);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 5, 0, 1, 1);

        label_3 = new QLabel(tabItem);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        line = new QFrame(tabItem);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 3, 0, 1, 3);

        widget_5 = new QWidget(tabItem);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        gridLayout_12 = new QGridLayout(widget_5);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        checkBoxEnableItemFilter = new QCheckBox(widget_5);
        checkBoxEnableItemFilter->setObjectName(QString::fromUtf8("checkBoxEnableItemFilter"));

        gridLayout_12->addWidget(checkBoxEnableItemFilter, 0, 0, 1, 1);

        checkBoxItemFilterWhitelist = new QCheckBox(widget_5);
        checkBoxItemFilterWhitelist->setObjectName(QString::fromUtf8("checkBoxItemFilterWhitelist"));

        gridLayout_12->addWidget(checkBoxItemFilterWhitelist, 0, 1, 1, 1);

        checkBoxDropMesoOnly = new QCheckBox(widget_5);
        checkBoxDropMesoOnly->setObjectName(QString::fromUtf8("checkBoxDropMesoOnly"));

        gridLayout_12->addWidget(checkBoxDropMesoOnly, 0, 2, 1, 1);


        gridLayout_2->addWidget(widget_5, 0, 0, 1, 3);

        tabWidgetMain->addTab(tabItem, QString());

        gridLayout->addWidget(tabWidgetMain, 0, 2, 1, 1);

        widget_3 = new QWidget(centralWidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonSaveSetting = new QPushButton(widget_3);
        pushButtonSaveSetting->setObjectName(QString::fromUtf8("pushButtonSaveSetting"));

        verticalLayout->addWidget(pushButtonSaveSetting);

        pushButtonOpenSetting = new QPushButton(widget_3);
        pushButtonOpenSetting->setObjectName(QString::fromUtf8("pushButtonOpenSetting"));

        verticalLayout->addWidget(pushButtonOpenSetting);

        pushButtonHideWindow = new QPushButton(widget_3);
        pushButtonHideWindow->setObjectName(QString::fromUtf8("pushButtonHideWindow"));

        verticalLayout->addWidget(pushButtonHideWindow);

        checkBoxStatusBot = new QCheckBox(widget_3);
        checkBoxStatusBot->setObjectName(QString::fromUtf8("checkBoxStatusBot"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBoxStatusBot->sizePolicy().hasHeightForWidth());
        checkBoxStatusBot->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(checkBoxStatusBot);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        gridLayout_8 = new QGridLayout(widget_4);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        spinBoxLoginCharacterNumber = new QSpinBox(widget_4);
        spinBoxLoginCharacterNumber->setObjectName(QString::fromUtf8("spinBoxLoginCharacterNumber"));
        sizePolicy2.setHeightForWidth(spinBoxLoginCharacterNumber->sizePolicy().hasHeightForWidth());
        spinBoxLoginCharacterNumber->setSizePolicy(sizePolicy2);
        spinBoxLoginCharacterNumber->setMinimum(1);

        gridLayout_8->addWidget(spinBoxLoginCharacterNumber, 0, 1, 1, 1);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout->addWidget(widget_3, 0, 0, 1, 2);

        MainFormClass->setCentralWidget(centralWidget);

        retranslateUi(MainFormClass);
        QObject::connect(checkBoxDropMesoOnly, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxItemFilterWhitelist, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(actionDeleteFromItemFilterList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(checkBoxGenericNoDelay, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxMobFreeze, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxReactorDem, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxMobFreezeStrong, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(actionClearItemFilterList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionClearRecentDropList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionDeleteFromRecentDropList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(pushButtonSaveSetting, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(pushButtonOpenSetting, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(checkBoxMobDisarm, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxJumpDownAnywhere, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxFullGodMode, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxFullGuard, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxNoMobActionByDamaged, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonAddToItemFilterList, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(checkBoxEnableItemFilter, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxNoMeteor, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxNoKnockBack, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxResetBlockedQuests, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(checkBoxStatusBot, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonHideWindow, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(horizontalSliderSpeedHack, SIGNAL(valueChanged(int)), MainFormClass, SLOT(Slider_ValueChanged(int)));
        QObject::connect(checkBoxOneClickBoardGameDisconnect, SIGNAL(toggled(bool)), MainFormClass, SLOT(CheckBox_Toggled(bool)));
        QObject::connect(pushButtonSendPacket, SIGNAL(clicked()), MainFormClass, SLOT(PushButton_Clicked()));
        QObject::connect(spinBoxLoginCharacterNumber, SIGNAL(valueChanged(int)), MainFormClass, SLOT(SpinBox_ValueChanged(int)));

        tabWidgetMain->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFormClass)
    {
        MainFormClass->setWindowTitle(QApplication::translate("MainFormClass", "FunnyMaple", 0, QApplication::UnicodeUTF8));
        actionDeleteFromItemFilterList->setText(QApplication::translate("MainFormClass", "Delete", 0, QApplication::UnicodeUTF8));
        actionClearItemFilterList->setText(QApplication::translate("MainFormClass", "Clear", 0, QApplication::UnicodeUTF8));
        actionClearRecentDropList->setText(QApplication::translate("MainFormClass", "Clear", 0, QApplication::UnicodeUTF8));
        actionDeleteFromRecentDropList->setText(QApplication::translate("MainFormClass", "Delete", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainFormClass", "Hacks", 0, QApplication::UnicodeUTF8));
        checkBoxFullGuard->setText(QApplication::translate("MainFormClass", "7 Times Guard", 0, QApplication::UnicodeUTF8));
        checkBoxGenericNoDelay->setText(QApplication::translate("MainFormClass", "Generic No Delay", 0, QApplication::UnicodeUTF8));
        checkBoxNoKnockBack->setText(QApplication::translate("MainFormClass", "No Knock Back", 0, QApplication::UnicodeUTF8));
        checkBoxMobFreezeStrong->setText(QApplication::translate("MainFormClass", "Mob Freeze Strong", 0, QApplication::UnicodeUTF8));
        checkBoxNoMeteor->setText(QApplication::translate("MainFormClass", "No Meteor", 0, QApplication::UnicodeUTF8));
        checkBoxFullGodMode->setText(QApplication::translate("MainFormClass", "58 Secs God Mode", 0, QApplication::UnicodeUTF8));
        checkBoxReactorDem->setText(QApplication::translate("MainFormClass", "Reactor Dem", 0, QApplication::UnicodeUTF8));
        checkBoxJumpDownAnywhere->setText(QApplication::translate("MainFormClass", "Jump Down Anywhere", 0, QApplication::UnicodeUTF8));
        checkBoxMobFreeze->setText(QApplication::translate("MainFormClass", "Mob Freeze", 0, QApplication::UnicodeUTF8));
        checkBoxMobDisarm->setText(QApplication::translate("MainFormClass", "Mob Disarm", 0, QApplication::UnicodeUTF8));
        checkBoxNoMobActionByDamaged->setText(QApplication::translate("MainFormClass", "No Mob Action By Damaged", 0, QApplication::UnicodeUTF8));
        checkBoxResetBlockedQuests->setText(QApplication::translate("MainFormClass", "Reset Blocked Quests", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("MainFormClass", "Speed Hack", 0, QApplication::UnicodeUTF8));
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
        groupBox_12->setTitle(QApplication::translate("MainFormClass", "Packets", 0, QApplication::UnicodeUTF8));
        pushButtonSendPacket->setText(QApplication::translate("MainFormClass", "Send", 0, QApplication::UnicodeUTF8));
        checkBoxOneClickBoardGameDisconnect->setText(QApplication::translate("MainFormClass", "One Click Board Game Disconnect", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabHome), QApplication::translate("MainFormClass", "Home", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainFormClass", "General", 0, QApplication::UnicodeUTF8));
        comboBoxBotMethodList->clear();
        comboBoxBotMethodList->insertItems(0, QStringList()
         << QApplication::translate("MainFormClass", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Kami Vac", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Kami Vac Loot Included", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Mu Lung Dojo To Farm Mu Gong's Soul", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainFormClass", "Commerci Experience Exploit", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainFormClass", "Method:", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainFormClass", "Auto Action", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoAttack->setText(QApplication::translate("MainFormClass", "Auto Attack (Del) Every MSecs", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoLoot->setText(QApplication::translate("MainFormClass", "Auto Loot (Z) Every MSecs", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("MainFormClass", "For Demon Slayer", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoChaosLock->setText(QApplication::translate("MainFormClass", "Auto CL (Space) Every Atts", 0, QApplication::UnicodeUTF8));
        checkBoxBotAutoFuryAttack->setText(QApplication::translate("MainFormClass", "Auto Fury Attack (Ctrl) At Val", 0, QApplication::UnicodeUTF8));
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
        pushButtonAddToItemFilterList->setText(QApplication::translate("MainFormClass", "Add", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetItemFilterList->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("MainFormClass", "Name", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainFormClass", "ID", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainFormClass", "ID", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainFormClass", "Name", 0, QApplication::UnicodeUTF8));
        checkBoxEnableItemFilter->setText(QApplication::translate("MainFormClass", "Enable", 0, QApplication::UnicodeUTF8));
        checkBoxItemFilterWhitelist->setText(QApplication::translate("MainFormClass", "Whitelist", 0, QApplication::UnicodeUTF8));
        checkBoxDropMesoOnly->setText(QApplication::translate("MainFormClass", "Drop Mesos Only", 0, QApplication::UnicodeUTF8));
        tabWidgetMain->setTabText(tabWidgetMain->indexOf(tabItem), QApplication::translate("MainFormClass", "Item", 0, QApplication::UnicodeUTF8));
        pushButtonSaveSetting->setText(QApplication::translate("MainFormClass", "Save Setting", 0, QApplication::UnicodeUTF8));
        pushButtonOpenSetting->setText(QApplication::translate("MainFormClass", "Open Setting", 0, QApplication::UnicodeUTF8));
        pushButtonHideWindow->setText(QApplication::translate("MainFormClass", "Hide Window (F9)", 0, QApplication::UnicodeUTF8));
        checkBoxStatusBot->setText(QApplication::translate("MainFormClass", "Bot (F1)", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainFormClass", "Char:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainFormClass: public Ui_MainFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
