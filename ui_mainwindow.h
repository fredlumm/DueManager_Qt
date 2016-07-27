/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionIntroduction;
    QAction *actionQuit_2;
    QWidget *centralWidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QCalendarWidget *calendarWidget;
    QTableWidget *NewDueList;
    QPushButton *DeleteButton;
    QPushButton *ConfigButton;
    QPushButton *AddButton;
    QPushButton *SearchButton;
    QMenuBar *menuBar;
    QMenu *menuMobile;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(696, 481);
        MainWindow->setAutoFillBackground(true);
        actionIntroduction = new QAction(MainWindow);
        actionIntroduction->setObjectName(QStringLiteral("actionIntroduction"));
        actionQuit_2 = new QAction(MainWindow);
        actionQuit_2->setObjectName(QStringLiteral("actionQuit_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(540, 30, 181, 41));
        label->setAutoFillBackground(false);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 511, 401));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(layoutWidget);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setEnabled(true);
        calendarWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        calendarWidget->setStyleSheet(QStringLiteral(""));

        verticalLayout_2->addWidget(calendarWidget);

        NewDueList = new QTableWidget(layoutWidget);
        NewDueList->setObjectName(QStringLiteral("NewDueList"));

        verticalLayout_2->addWidget(NewDueList);

        DeleteButton = new QPushButton(centralWidget);
        DeleteButton->setObjectName(QStringLiteral("DeleteButton"));
        DeleteButton->setEnabled(true);
        DeleteButton->setGeometry(QRect(610, 310, 61, 32));
        ConfigButton = new QPushButton(centralWidget);
        ConfigButton->setObjectName(QStringLiteral("ConfigButton"));
        ConfigButton->setGeometry(QRect(610, 360, 61, 32));
        AddButton = new QPushButton(centralWidget);
        AddButton->setObjectName(QStringLiteral("AddButton"));
        AddButton->setEnabled(true);
        AddButton->setGeometry(QRect(544, 310, 71, 32));
        SearchButton = new QPushButton(centralWidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setEnabled(true);
        SearchButton->setGeometry(QRect(544, 360, 71, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 696, 22));
        menuMobile = new QMenu(menuBar);
        menuMobile->setObjectName(QStringLiteral("menuMobile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMobile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMobile->addAction(actionQuit_2);
        mainToolBar->addAction(actionIntroduction);
        mainToolBar->addAction(actionQuit_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionIntroduction->setText(QApplication::translate("MainWindow", "Intro", 0));
#ifndef QT_NO_TOOLTIP
        actionIntroduction->setToolTip(QApplication::translate("MainWindow", "Intro", 0));
#endif // QT_NO_TOOLTIP
        actionQuit_2->setText(QApplication::translate("MainWindow", "Quit", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:600; color:#702e0e;\">Due Manager</span></p></body></html>", 0));
        DeleteButton->setText(QString());
        ConfigButton->setText(QString());
        AddButton->setText(QString());
        SearchButton->setText(QString());
        menuMobile->setTitle(QApplication::translate("MainWindow", "Mobile+", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
