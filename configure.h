#ifndef CONFIGURE_H
#define CONFIGURE_H

#include <QDialog>

namespace Ui {
class configure;
}

class configure : public QDialog
{
    Q_OBJECT

public:
    explicit configure(QWidget *parent = 0);
    ~configure();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void  sendData(int);
    void  sendMode(int);
    void  sendVHeader(int);
    void  sendHHeader(int);
    void sendMinimum(QString);
    void sendMaximum(QString);
    void sendWeekdayColor(int);
    void sendWeekendColor(int);


private:
    Ui::configure *ui;
};

#endif // CONFIGURE_H
