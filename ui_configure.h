/********************************************************************************
** Form generated from reading UI file 'configure.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGURE_H
#define UI_CONFIGURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_configure
{
public:
    QTextEdit *maximum;
    QTextEdit *minimum;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *HorHead;
    QComboBox *SelectionMode;
    QComboBox *VerHead;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *Weekcolor;
    QComboBox *Weekendcolor;
    QComboBox *Weekstart;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QComboBox *alarm;

    void setupUi(QDialog *configure)
    {
        if (configure->objectName().isEmpty())
            configure->setObjectName(QStringLiteral("configure"));
        configure->resize(635, 402);
        maximum = new QTextEdit(configure);
        maximum->setObjectName(QStringLiteral("maximum"));
        maximum->setGeometry(QRect(140, 170, 201, 21));
        minimum = new QTextEdit(configure);
        minimum->setObjectName(QStringLiteral("minimum"));
        minimum->setGeometry(QRect(140, 200, 201, 21));
        label_7 = new QLabel(configure);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 170, 111, 20));
        label_8 = new QLabel(configure);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 200, 101, 20));
        label_9 = new QLabel(configure);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 230, 171, 16));
        layoutWidget = new QWidget(configure);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 50, 171, 91));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        HorHead = new QComboBox(layoutWidget);
        HorHead->setObjectName(QStringLiteral("HorHead"));

        verticalLayout->addWidget(HorHead);

        SelectionMode = new QComboBox(layoutWidget);
        SelectionMode->setObjectName(QStringLiteral("SelectionMode"));

        verticalLayout->addWidget(SelectionMode);

        VerHead = new QComboBox(layoutWidget);
        VerHead->setObjectName(QStringLiteral("VerHead"));

        verticalLayout->addWidget(VerHead);

        layoutWidget1 = new QWidget(configure);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 50, 131, 90));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        layoutWidget2 = new QWidget(configure);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(480, 50, 151, 86));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        Weekcolor = new QComboBox(layoutWidget2);
        Weekcolor->setObjectName(QStringLiteral("Weekcolor"));

        verticalLayout_3->addWidget(Weekcolor);

        Weekendcolor = new QComboBox(layoutWidget2);
        Weekendcolor->setObjectName(QStringLiteral("Weekendcolor"));

        verticalLayout_3->addWidget(Weekendcolor);

        Weekstart = new QComboBox(layoutWidget2);
        Weekstart->setObjectName(QStringLiteral("Weekstart"));

        verticalLayout_3->addWidget(Weekstart);

        layoutWidget3 = new QWidget(configure);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(351, 50, 121, 91));
        verticalLayout_4 = new QVBoxLayout(layoutWidget3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(layoutWidget3);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_4->addWidget(label_6);

        label_10 = new QLabel(configure);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 10, 151, 16));
        label_10->setMouseTracking(true);
        label_11 = new QLabel(configure);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 10, 571, 31));
        label_12 = new QLabel(configure);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 250, 581, 31));
        layoutWidget4 = new QWidget(configure);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(430, 350, 191, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget4);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(layoutWidget4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setAutoDefault(false);
        pushButton->setDefault(true);

        horizontalLayout->addWidget(pushButton);

        layoutWidget5 = new QWidget(configure);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(20, 290, 261, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget5);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_2->addWidget(label_13);

        alarm = new QComboBox(layoutWidget5);
        alarm->setObjectName(QStringLiteral("alarm"));

        horizontalLayout_2->addWidget(alarm);

        layoutWidget->raise();
        maximum->raise();
        minimum->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();

        retranslateUi(configure);

        QMetaObject::connectSlotsByName(configure);
    } // setupUi

    void retranslateUi(QDialog *configure)
    {
        configure->setWindowTitle(QApplication::translate("configure", "Dialog", 0));
        label_7->setText(QApplication::translate("configure", "Maximum Date:", 0));
        label_8->setText(QApplication::translate("configure", "Minimum Date:", 0));
        label_9->setText(QApplication::translate("configure", "(Format: YYYY-MM-DD)", 0));
        label->setText(QApplication::translate("configure", "Horizontal Header:", 0));
        label_2->setText(QApplication::translate("configure", "Selection Mode:", 0));
        label_3->setText(QApplication::translate("configure", "Vertical Header:", 0));
        label_4->setText(QApplication::translate("configure", "Weekday color:", 0));
        label_5->setText(QApplication::translate("configure", "Weekend color:", 0));
        label_6->setText(QApplication::translate("configure", "Week Starts With:", 0));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("configure", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Calendar Setup</span></p></body></html>", 0));
        label_12->setText(QApplication::translate("configure", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600;\">Notification Setup</span></p></body></html>", 0));
        pushButton_2->setText(QApplication::translate("configure", "Cancel", 0));
        pushButton->setText(QApplication::translate("configure", "OK", 0));
        label_13->setText(QApplication::translate("configure", "Countdown to Due:", 0));
    } // retranslateUi

};

namespace Ui {
    class configure: public Ui_configure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGURE_H
