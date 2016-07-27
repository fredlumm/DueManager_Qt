/********************************************************************************
** Form generated from reading UI file 'intro.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTRO_H
#define UI_INTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_intro
{
public:
    QPushButton *Done;
    QTabWidget *tabWidget;
    QWidget *introduction;
    QTextBrowser *textBrowser;
    QWidget *Add;
    QTextBrowser *textBrowser_2;
    QWidget *Search;
    QTextBrowser *textBrowser_3;
    QWidget *Noti;
    QTextBrowser *textBrowser_4;
    QWidget *Config;
    QTextBrowser *textBrowser_5;

    void setupUi(QDialog *intro)
    {
        if (intro->objectName().isEmpty())
            intro->setObjectName(QStringLiteral("intro"));
        intro->resize(527, 406);
        Done = new QPushButton(intro);
        Done->setObjectName(QStringLiteral("Done"));
        Done->setGeometry(QRect(400, 360, 113, 32));
        tabWidget = new QTabWidget(intro);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 20, 491, 331));
        introduction = new QWidget();
        introduction->setObjectName(QStringLiteral("introduction"));
        textBrowser = new QTextBrowser(introduction);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 0, 461, 251));
        tabWidget->addTab(introduction, QString());
        Add = new QWidget();
        Add->setObjectName(QStringLiteral("Add"));
        textBrowser_2 = new QTextBrowser(Add);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(10, 1, 461, 311));
        tabWidget->addTab(Add, QString());
        Search = new QWidget();
        Search->setObjectName(QStringLiteral("Search"));
        textBrowser_3 = new QTextBrowser(Search);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(10, 0, 461, 301));
        tabWidget->addTab(Search, QString());
        Noti = new QWidget();
        Noti->setObjectName(QStringLiteral("Noti"));
        textBrowser_4 = new QTextBrowser(Noti);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(10, 1, 461, 301));
        tabWidget->addTab(Noti, QString());
        Config = new QWidget();
        Config->setObjectName(QStringLiteral("Config"));
        textBrowser_5 = new QTextBrowser(Config);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(10, 0, 461, 301));
        tabWidget->addTab(Config, QString());

        retranslateUi(intro);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(intro);
    } // setupUi

    void retranslateUi(QDialog *intro)
    {
        intro->setWindowTitle(QApplication::translate("intro", "Dialog", 0));
        Done->setText(QApplication::translate("intro", "Done", 0));
        textBrowser->setHtml(QApplication::translate("intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">Welcome to Due Manager!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">&quot;Due Manager&quot;(Mobile+) is a PC software to help people manage their time scientific"
                        "ally and keep &quot;due&quot; in mind. The core functions of Due Manager are Adding events, Search events, Notification and Calendar Customization. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'.Lucida Grande UI';\">&quot;Due manager&quot; fully considers users' habits, like when adding events, pressing enter has the same effect with clicking save button and it will ask users before they delete an event.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-ind"
                        "ent:0; text-indent:0px;\"><img src=\":/myimage/intro1.png\" /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(introduction), QApplication::translate("intro", "Intro", 0));
        textBrowser_2->setHtml(QApplication::translate("intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">We provide two options to add events. One is clicking the add button at the</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">bottom-right corner. The other one is double clicking any specific date on the calendar. Both options will generate a event-adding window shown as below. You might notice by clicking the date on calendar, customers don't have to choose dates for notif"
                        "ication, it will automatically be set to the clicked date. </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/myimage/intro2.png\" /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(Add), QApplication::translate("intro", "Add Events", 0));
        textBrowser_3->setHtml(QApplication::translate("intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">We also\302\240provide searching function. By clicking the search button, &quot;Due Manager&quot; helps users to look for the specific event based on keywords.</span><span style=\" font-family:'.Lucida Grande UI';\"> </span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">The first box named \342\200\234Please Input Here\342\200\235 is for keywords input. Users can type to search any events containing keywords. It will search through event, date, category and priority of the event and show the result in the bottom after clicking the search button, and the keywords do not have to be whole words. Users can cancel the search by clicking the cancel button.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/myimage/intro3.png\" /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br />"
                        "</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.Lucida Grande UI';\"><br /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(Search), QApplication::translate("intro", "Search Events", 0));
        textBrowser_4->setHtml(QApplication::translate("intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">&quot;Due Manager&quot; chooses a friendly notification mechanism that every time users open and close the software, &quot;Due Manager&quot; will give them a short notification about how many urgent events are coming and remind users to hurry up. Users can decide how many days in advance they want to be notified, and our software will show the key information on time.</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-in"
                        "dent:0; text-indent:0px; font-family:'Helvetica';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/myimage/intro4.png\" /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(Noti), QApplication::translate("intro", "Notification", 0));
        textBrowser_5->setHtml(QApplication::translate("intro", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'.Helvetica Neue DeskInterface'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Helvetica';\">The configuration function allows users to customize the look of calendar and notification time. When users change the configuration,\302\240 all they need to do is to click the &quot;OK&quot; button to affirm or to click &quot;Cancel&quot; to cancel them. We also let users view the events completely by double clicking the events in </span><span style=\" font-family:'Helvetica'; font-style:italic;\">DueList</span><span style=\" font-family:'Helvetica';\"> and </span><span style=\" font-family:'Helvet"
                        "ica'; font-style:italic;\">Search Result. </span><span style=\" font-family:'Helvetica';\">After doing that, a complete version of event will pop out. Of course\302\240users can also pull the scroll bar below to view the event completely. For your information, current date is always highlighted!</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'Helvetica';\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><img src=\":/myimage/intro5.png\" /></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(Config), QApplication::translate("intro", "Set Configuration", 0));
    } // retranslateUi

};

namespace Ui {
    class intro: public Ui_intro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTRO_H
