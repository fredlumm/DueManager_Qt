#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCalendarWidget>
#include <QtCore>
#include <QtGui>
#include <QWidget>
#include <QGroupBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setdisplay();

private slots:

    void on_AddButton_clicked();

    void on_SearchButton_clicked();

    void on_actionQuit_2_triggered();

    void on_DeleteButton_clicked();

public slots:

   void Myslots();

private slots:

   void receiveData(int data);
   void receiveMode(int mode);
   void receiveVHeader(int header);
   void receiveHHeader(int Hheader);
   void receiveMinimum(QString mini);
   void receiveMaximum(QString max);
   void receiveWeekdayColor(int Weekcolor);
   void receiveWeekendColor(int Weekendcolor);

   void on_ConfigButton_clicked();

   void on_calendarWidget_activated(const QDate &date);

   void on_NewDueList_doubleClicked(const QModelIndex &index);

   void on_actionIntroduction_triggered();

private:
    Ui::MainWindow *ui;

private:
    QGroupBox * creatGeneralOptionBox();

protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
