/********************************************************************************
** Form generated from reading UI file 'AccountAdditionForm.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTADDITIONFORM_H
#define UI_ACCOUNTADDITIONFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label_7;
    QComboBox *comboBoxChannel;
    QLabel *label_6;
    QComboBox *comboBoxWorld;
    QLabel *label_2;
    QLineEdit *labelUsername;
    QLabel *label_3;
    QLineEdit *labelPassword;
    QLabel *label_4;
    QLineEdit *labelSecondaryPassword;
    QLabel *label_5;
    QComboBox *comboBoxCharacter;
    QFrame *line;
    QDialogButtonBox *dialogButtonBoxAddAccount;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(511, 96);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"background:white;\n"
"}"));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 1, 4, 1, 1);

        comboBoxChannel = new QComboBox(Dialog);
        comboBoxChannel->setObjectName(QString::fromUtf8("comboBoxChannel"));

        gridLayout->addWidget(comboBoxChannel, 1, 3, 1, 1);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        comboBoxWorld = new QComboBox(Dialog);
        comboBoxWorld->setObjectName(QString::fromUtf8("comboBoxWorld"));

        gridLayout->addWidget(comboBoxWorld, 1, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        labelUsername = new QLineEdit(Dialog);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));

        gridLayout->addWidget(labelUsername, 0, 1, 1, 1);

        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        labelPassword = new QLineEdit(Dialog);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));

        gridLayout->addWidget(labelPassword, 0, 3, 1, 1);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        labelSecondaryPassword = new QLineEdit(Dialog);
        labelSecondaryPassword->setObjectName(QString::fromUtf8("labelSecondaryPassword"));

        gridLayout->addWidget(labelSecondaryPassword, 0, 5, 1, 1);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        comboBoxCharacter = new QComboBox(Dialog);
        comboBoxCharacter->setObjectName(QString::fromUtf8("comboBoxCharacter"));

        gridLayout->addWidget(comboBoxCharacter, 1, 5, 1, 1);

        line = new QFrame(Dialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 6);

        dialogButtonBoxAddAccount = new QDialogButtonBox(Dialog);
        dialogButtonBoxAddAccount->setObjectName(QString::fromUtf8("dialogButtonBoxAddAccount"));
        dialogButtonBoxAddAccount->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Ok);

        gridLayout->addWidget(dialogButtonBoxAddAccount, 3, 0, 1, 6);


        retranslateUi(Dialog);
        QObject::connect(comboBoxWorld, SIGNAL(activated(int)), Dialog, SLOT(ComboBox_Activated()));
        QObject::connect(dialogButtonBoxAddAccount, SIGNAL(clicked(QAbstractButton*)), Dialog, SLOT(DialogButtonBox_Clicked(QAbstractButton*)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Account Addition", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Dialog", "Character: ", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Dialog", "Channel: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Dialog", "Username: ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Dialog", "Password: ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Dialog", "2nd Password: ", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Dialog", "World: ", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTADDITIONFORM_H
