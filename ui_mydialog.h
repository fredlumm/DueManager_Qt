/********************************************************************************
** Form generated from reading UI file 'mydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG_H
#define UI_MYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyDialog
{
public:
    QLabel *Item;
    QPushButton *Save;
    QPushButton *Cancel;
    QLabel *label;
    QRadioButton *HomeworkButton;
    QRadioButton *SeminarButton;
    QRadioButton *SocialButton;
    QRadioButton *OthersButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QComboBox *year;
    QComboBox *month;
    QComboBox *date;
    QComboBox *hour;
    QComboBox *type;
    QLineEdit *content;

    void setupUi(QDialog *MyDialog)
    {
        if (MyDialog->objectName().isEmpty())
            MyDialog->setObjectName(QStringLiteral("MyDialog"));
        MyDialog->resize(576, 300);
        Item = new QLabel(MyDialog);
        Item->setObjectName(QStringLiteral("Item"));
        Item->setGeometry(QRect(40, 100, 61, 16));
        Save = new QPushButton(MyDialog);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(430, 200, 113, 32));
        Cancel = new QPushButton(MyDialog);
        Cancel->setObjectName(QStringLiteral("Cancel"));
        Cancel->setGeometry(QRect(430, 240, 113, 32));
        label = new QLabel(MyDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 150, 61, 16));
        HomeworkButton = new QRadioButton(MyDialog);
        HomeworkButton->setObjectName(QStringLiteral("HomeworkButton"));
        HomeworkButton->setGeometry(QRect(90, 150, 102, 20));
        HomeworkButton->setChecked(true);
        SeminarButton = new QRadioButton(MyDialog);
        SeminarButton->setObjectName(QStringLiteral("SeminarButton"));
        SeminarButton->setGeometry(QRect(90, 180, 102, 20));
        SeminarButton->setChecked(false);
        SocialButton = new QRadioButton(MyDialog);
        SocialButton->setObjectName(QStringLiteral("SocialButton"));
        SocialButton->setGeometry(QRect(90, 210, 121, 20));
        SocialButton->setChecked(false);
        OthersButton = new QRadioButton(MyDialog);
        OthersButton->setObjectName(QStringLiteral("OthersButton"));
        OthersButton->setGeometry(QRect(90, 240, 121, 20));
        OthersButton->setChecked(false);
        layoutWidget = new QWidget(MyDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 536, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        year = new QComboBox(layoutWidget);
        year->setObjectName(QStringLiteral("year"));

        horizontalLayout->addWidget(year);

        month = new QComboBox(layoutWidget);
        month->setObjectName(QStringLiteral("month"));

        horizontalLayout->addWidget(month);

        date = new QComboBox(layoutWidget);
        date->setObjectName(QStringLiteral("date"));

        horizontalLayout->addWidget(date);

        hour = new QComboBox(layoutWidget);
        hour->setObjectName(QStringLiteral("hour"));

        horizontalLayout->addWidget(hour);

        type = new QComboBox(layoutWidget);
        type->setObjectName(QStringLiteral("type"));

        horizontalLayout->addWidget(type);

        content = new QLineEdit(MyDialog);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(90, 100, 161, 21));

        retranslateUi(MyDialog);
        QObject::connect(Cancel, SIGNAL(clicked()), MyDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(MyDialog);
    } // setupUi

    void retranslateUi(QDialog *MyDialog)
    {
        MyDialog->setWindowTitle(QApplication::translate("MyDialog", "Dialog", 0));
        Item->setText(QApplication::translate("MyDialog", "Event:", 0));
        Save->setText(QApplication::translate("MyDialog", "save", 0));
        Cancel->setText(QApplication::translate("MyDialog", "cancel", 0));
        label->setText(QApplication::translate("MyDialog", "Category:", 0));
        HomeworkButton->setText(QApplication::translate("MyDialog", "Homework", 0));
        SeminarButton->setText(QApplication::translate("MyDialog", "Seminar", 0));
        SocialButton->setText(QApplication::translate("MyDialog", "Social Activites", 0));
        OthersButton->setText(QApplication::translate("MyDialog", "Others", 0));
    } // retranslateUi

};

namespace Ui {
    class MyDialog: public Ui_MyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG_H
