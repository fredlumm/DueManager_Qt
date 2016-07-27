#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>
#include <QVector>
#include <QLinkedList>
#include "Node2.h"

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    void readFile1();
    ~SearchDialog();

private slots:

    void on_SearchButton_clicked();

    void on_CancelButton_clicked();

    void on_searchResult_doubleClicked(const QModelIndex &index);

private:
    Ui::SearchDialog *ui;
    QVector<QLinkedList<Node2 > > * s = new QVector<QLinkedList<Node2 > >(3);
};

#endif // SEARCHDIALOG_H
