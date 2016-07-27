#ifndef INTRO_H
#define INTRO_H

#include <QDialog>

namespace Ui {
class intro;
}

class intro : public QDialog
{
    Q_OBJECT

public:
    explicit intro(QWidget *parent = 0);
    ~intro();

private slots:
    void on_Done_clicked();

private:
    Ui::intro *ui;
};

#endif // INTRO_H
