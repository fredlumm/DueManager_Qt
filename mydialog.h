#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QVector>
#include <QLinkedList>
#include "Node.h"

namespace Ui {
class MyDialog;
}

class MyDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MyDialog(QWidget *parent = 0);
    void readFile();
    void showDate(int Year,int Month,int Day);
    ~MyDialog();

private slots:

    void on_Save_clicked();

    void on_Cancel_clicked();

private:
    Ui::MyDialog *ui;
    QVector<QLinkedList<Node > > * d = new QVector<QLinkedList<Node > >(3);
};

#endif // MYDIALOG_H
