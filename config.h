#ifndef CONFIG_H
#define CONFIG_H

#include <QDialog>

namespace Ui {
class config;
}

class config : public QDialog
{
    Q_OBJECT

public:
    explicit config(QWidget *parent = 0);
    ~config();

private slots:
    void on_pushButton_clicked();

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
    Ui::config *ui;
};

#endif // CONFIG_H
