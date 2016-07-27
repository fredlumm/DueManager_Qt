#include "mainwindow.h"
#include "mydialog.h"
#include "searchdialog.h"
#include "configure.h"
#include <QApplication>
#include "dialog.h"
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //test path
    //QString p;
    //p=getenv("HOME");
    //qDebug()<<p;

    MainWindow w;
    w.show();

    return a.exec();
}
