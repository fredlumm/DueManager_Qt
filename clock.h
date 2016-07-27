#ifndef CLOCK_H
#define CLOCK_H

#include <QDialog>

namespace Ui {
class clock;
}

class clock : public QDialog
{
    Q_OBJECT

public:
    explicit clock(QWidget *parent = 0);
    ~clock();

private:
    Ui::clock *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // CLOCK_H
