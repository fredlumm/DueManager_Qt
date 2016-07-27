/********************************************************************************
** Form generated from reading UI file 'searchdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHDIALOG_H
#define UI_SEARCHDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *CancelButton;
    QPushButton *SearchButton;
    QTableWidget *searchResult;
    QLineEdit *search_box;

    void setupUi(QDialog *SearchDialog)
    {
        if (SearchDialog->objectName().isEmpty())
            SearchDialog->setObjectName(QStringLiteral("SearchDialog"));
        SearchDialog->resize(400, 323);
        label = new QLabel(SearchDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 141, 16));
        label_2 = new QLabel(SearchDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 121, 16));
        CancelButton = new QPushButton(SearchDialog);
        CancelButton->setObjectName(QStringLiteral("CancelButton"));
        CancelButton->setGeometry(QRect(280, 290, 113, 32));
        SearchButton = new QPushButton(SearchDialog);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(280, 260, 113, 32));
        SearchButton->setAutoDefault(false);
        SearchButton->setDefault(true);
        searchResult = new QTableWidget(SearchDialog);
        searchResult->setObjectName(QStringLiteral("searchResult"));
        searchResult->setGeometry(QRect(160, 80, 201, 171));
        search_box = new QLineEdit(SearchDialog);
        search_box->setObjectName(QStringLiteral("search_box"));
        search_box->setGeometry(QRect(160, 30, 201, 21));

        retranslateUi(SearchDialog);

        QMetaObject::connectSlotsByName(SearchDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchDialog)
    {
        SearchDialog->setWindowTitle(QApplication::translate("SearchDialog", "Dialog", 0));
        label->setText(QApplication::translate("SearchDialog", "Please Input Here:", 0));
        label_2->setText(QApplication::translate("SearchDialog", "Search Result:", 0));
        CancelButton->setText(QApplication::translate("SearchDialog", "Cancel", 0));
        SearchButton->setText(QApplication::translate("SearchDialog", "Search", 0));
    } // retranslateUi

};

namespace Ui {
    class SearchDialog: public Ui_SearchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHDIALOG_H
