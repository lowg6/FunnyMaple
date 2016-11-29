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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainFormClass
{
public:
    QAction *actionSetPath;
    QAction *actionLaunchProcess;
    QAction *actionTerminateProcess;
    QAction *actionAddToAccountList;
    QAction *actionDeleteFromAccountList;
    QAction *actionSaveSetting;
    QAction *actionOpenSetting;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTreeWidget *treeWidgetAccountList;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainFormClass)
    {
        if (MainFormClass->objectName().isEmpty())
            MainFormClass->setObjectName(QString::fromUtf8("MainFormClass"));
        MainFormClass->resize(531, 536);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/Penguin_1.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainFormClass->setWindowIcon(icon);
        MainFormClass->setStyleSheet(QString::fromUtf8("QMainWindow\n"
"{\n"
"background:white;\n"
"}\n"
"\n"
"QStatusBar\n"
"{\n"
"background:white;\n"
"border-top:1px solid gray;\n"
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
        actionSetPath = new QAction(MainFormClass);
        actionSetPath->setObjectName(QString::fromUtf8("actionSetPath"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/MapleStory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetPath->setIcon(icon1);
        actionLaunchProcess = new QAction(MainFormClass);
        actionLaunchProcess->setObjectName(QString::fromUtf8("actionLaunchProcess"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLaunchProcess->setIcon(icon2);
        actionTerminateProcess = new QAction(MainFormClass);
        actionTerminateProcess->setObjectName(QString::fromUtf8("actionTerminateProcess"));
        actionTerminateProcess->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/close_delete_2.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTerminateProcess->setIcon(icon3);
        actionAddToAccountList = new QAction(MainFormClass);
        actionAddToAccountList->setObjectName(QString::fromUtf8("actionAddToAccountList"));
        actionDeleteFromAccountList = new QAction(MainFormClass);
        actionDeleteFromAccountList->setObjectName(QString::fromUtf8("actionDeleteFromAccountList"));
        actionSaveSetting = new QAction(MainFormClass);
        actionSaveSetting->setObjectName(QString::fromUtf8("actionSaveSetting"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/save_as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSetting->setIcon(icon4);
        actionOpenSetting = new QAction(MainFormClass);
        actionOpenSetting->setObjectName(QString::fromUtf8("actionOpenSetting"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/FunnyMapleManager/Resources/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenSetting->setIcon(icon5);
        centralWidget = new QWidget(MainFormClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        treeWidgetAccountList = new QTreeWidget(centralWidget);
        treeWidgetAccountList->setObjectName(QString::fromUtf8("treeWidgetAccountList"));
        treeWidgetAccountList->setContextMenuPolicy(Qt::ActionsContextMenu);
        treeWidgetAccountList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        treeWidgetAccountList->setIndentation(0);
        treeWidgetAccountList->setUniformRowHeights(true);

        gridLayout->addWidget(treeWidgetAccountList, 0, 0, 1, 2);

        MainFormClass->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainFormClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setMovable(false);
        toolBar->setIconSize(QSize(16, 16));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainFormClass->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionOpenSetting);
        toolBar->addAction(actionSaveSetting);
        toolBar->addSeparator();
        toolBar->addAction(actionLaunchProcess);
        toolBar->addAction(actionTerminateProcess);
        toolBar->addSeparator();
        toolBar->addAction(actionSetPath);

        retranslateUi(MainFormClass);
        QObject::connect(actionSetPath, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionLaunchProcess, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionTerminateProcess, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionAddToAccountList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionDeleteFromAccountList, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionOpenSetting, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));
        QObject::connect(actionSaveSetting, SIGNAL(triggered()), MainFormClass, SLOT(Action_Triggered()));

        QMetaObject::connectSlotsByName(MainFormClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainFormClass)
    {
        MainFormClass->setWindowTitle(QApplication::translate("MainFormClass", "FunnyMapleManager", 0, QApplication::UnicodeUTF8));
        actionSetPath->setText(QApplication::translate("MainFormClass", "Set Path", 0, QApplication::UnicodeUTF8));
        actionLaunchProcess->setText(QApplication::translate("MainFormClass", "Launch", 0, QApplication::UnicodeUTF8));
        actionTerminateProcess->setText(QApplication::translate("MainFormClass", "Terminate", 0, QApplication::UnicodeUTF8));
        actionAddToAccountList->setText(QApplication::translate("MainFormClass", "Add", 0, QApplication::UnicodeUTF8));
        actionDeleteFromAccountList->setText(QApplication::translate("MainFormClass", "Delete", 0, QApplication::UnicodeUTF8));
        actionSaveSetting->setText(QApplication::translate("MainFormClass", "Save", 0, QApplication::UnicodeUTF8));
        actionOpenSetting->setText(QApplication::translate("MainFormClass", "Open", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetAccountList->headerItem();
        ___qtreewidgetitem->setText(6, QApplication::translate("MainFormClass", "Char.", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(5, QApplication::translate("MainFormClass", "Ch.", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(4, QApplication::translate("MainFormClass", "World", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainFormClass", "2nd Password", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainFormClass", "Password", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainFormClass", "Username", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainFormClass", "\343\200\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainFormClass: public Ui_MainFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
