#include "intro.h"
#include "ui_intro.h"

intro::intro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::intro)
{
    ui->setupUi(this);

    intro::setWindowTitle("Introdunction");

    QPixmap pixmap(":/myimage/back2.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    ui->tabWidget->setStyleSheet("background-color:rgba(192,192,192,0.2)");

    ui->textBrowser->setStyleSheet("background-color:rgba(192,192,192,0)");
    ui->textBrowser_2->setStyleSheet("background-color:rgba(192,192,192,0)");
    ui->textBrowser_3->setStyleSheet("background-color:rgba(192,192,192,0)");
    ui->textBrowser_4->setStyleSheet("background-color:rgba(192,192,192,0)");
    ui->textBrowser_5->setStyleSheet("background-color:rgba(192,192,192,0)");
}

intro::~intro()
{
    delete ui;
}

void intro::on_Done_clicked()
{
    intro::close();
}
