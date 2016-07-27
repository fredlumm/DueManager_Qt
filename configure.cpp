#include "configure.h"
#include "ui_configure.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>

//#define AlarmFileName "/Users/ningweichen/Qt/myself/551/alarmdays.txt"
#define AlarmFileName QString(getenv("HOME"))+"/alarmdays.txt"

configure::configure(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::configure)
{
    ui->setupUi(this);

    configure::setWindowTitle("Set Configuration");

    //set background
    Qt::WindowFlags flags = 0;
    flags |= Qt::WindowMinimizeButtonHint;
    setWindowFlags(flags); // 设置禁止最大化
    setFixedSize(650,390); // 禁止改变窗口大小

    ui->maximum->setFixedSize(200,25);
    ui->minimum->setFixedSize(200,25);

    QPixmap pixmap(":/myimage/background3.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    //set display
    ui->Weekstart->addItem("Sunday",Qt::Sunday);
    ui->Weekstart->addItem("Monday",Qt::Monday);
    ui->SelectionMode->addItem("Single Selection");
    ui->SelectionMode->addItem("No Selection");
    ui->VerHead->addItem("NoVerticalHeader");
    ui->VerHead->addItem("ISOWeekNumber");
    ui->HorHead->addItem("ShortDayNames");
    ui->HorHead->addItem("SingleLetterDayNames");
    ui->HorHead->addItem("LongDayNames");
    ui->HorHead->addItem("NoHorizontalHeader");
    ui->Weekcolor->addItem("black");
    ui->Weekcolor->addItem("blue");
    ui->Weekcolor->addItem("red");
    ui->Weekendcolor->addItem("red");
    ui->Weekendcolor->addItem("blue");
    ui->Weekendcolor->addItem("black");

    ui->alarm->addItem("1");
    ui->alarm->addItem("2");
    ui->alarm->addItem("3");
    ui->alarm->addItem("4");
    ui->alarm->addItem("5");
    ui->alarm->addItem("6");
    ui->alarm->addItem("7");
    ui->alarm->addItem("8");
    ui->alarm->addItem("9");
    ui->alarm->addItem("10");

    QFile file1(AlarmFileName);
        QString FirstDayOfWeek_initial;
        int FirstDayOfWeek;
        QString SelectionMode_initial;
        int SelectionMode;
        QString VerticalHeader_initial;
        int VerticalHeader;
        QString HorizontalHeader_initial;
        int HorizontalHeader;
        QString MinimumDate;
        QString MaximumDate;
        QString WeekdayColor_initial;
        int WeekdayColor;
        QString WeekendColor_initial;
        int WeekendColor;
        QString alarmdays_initial;
        int alarmdays;
        if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
             FirstDayOfWeek_initial=file1.readLine();
             FirstDayOfWeek_initial.replace(QString("\n"),QString(""));
             FirstDayOfWeek=FirstDayOfWeek_initial.toInt();
             SelectionMode_initial=file1.readLine();
             SelectionMode_initial.replace(QString("\n"),QString(""));
             SelectionMode=SelectionMode_initial.toInt();
             VerticalHeader_initial=file1.readLine();
             VerticalHeader_initial.replace(QString("\n"),QString(""));
             VerticalHeader=VerticalHeader_initial.toInt();
             HorizontalHeader_initial=file1.readLine();
             HorizontalHeader_initial.replace(QString("\n"),QString(""));
             HorizontalHeader=HorizontalHeader_initial.toInt();
             MinimumDate=file1.readLine();
             MinimumDate.replace(QString("\n"),QString(""));
             MaximumDate=file1.readLine();
             MaximumDate.replace(QString("\n"),QString(""));
             WeekdayColor_initial=file1.readLine();
             WeekdayColor_initial.replace(QString("\n"),QString(""));
             WeekdayColor=WeekdayColor_initial.toInt();
             WeekendColor_initial=file1.readLine();
             WeekendColor_initial.replace(QString("\n"),QString(""));
             WeekendColor=WeekendColor_initial.toInt();
             alarmdays_initial=file1.readLine();
             alarmdays=alarmdays_initial.toInt();
             --alarmdays;
            }
        file1.close();
        ui->Weekstart->setCurrentIndex(FirstDayOfWeek);
        ui->SelectionMode->setCurrentIndex(SelectionMode);
        ui->VerHead->setCurrentIndex(VerticalHeader);
        ui->HorHead->setCurrentIndex(HorizontalHeader);
        ui->minimum->setPlaceholderText(MinimumDate);
        ui->maximum->setPlaceholderText(MaximumDate);
        ui->Weekcolor->setCurrentIndex(WeekdayColor);
        ui->Weekendcolor->setCurrentIndex(WeekendColor);
        ui->alarm->setCurrentIndex(alarmdays);
}

configure::~configure()
{
    delete ui;
}

void configure::on_pushButton_clicked()
{
    emit sendData(ui->Weekstart->currentIndex());
    emit sendMode(ui->SelectionMode->currentIndex());
    emit sendVHeader(ui->VerHead->currentIndex());
    emit sendHHeader(ui->HorHead->currentIndex());
    emit sendMinimum(ui->minimum->toPlainText());
    emit sendMaximum(ui->maximum->toPlainText());
    emit sendWeekdayColor(ui->Weekcolor->currentIndex());
    emit sendWeekendColor(ui->Weekendcolor->currentIndex());

    QFile file(AlarmFileName);
    if(file.open(QIODevice::WriteOnly)){
        qDebug()<<"1";
       QTextStream output(&file);
       output<< QString::number(ui->Weekstart->currentIndex())<<"\n";
       output<< QString::number(ui->SelectionMode->currentIndex())<<"\n";
       output<< QString::number(ui->VerHead->currentIndex())<<"\n";
       output<< QString::number(ui->HorHead->currentIndex())<<"\n";
       output<< ui->minimum->toPlainText()<<"\n";
       output<< ui->maximum->toPlainText()<<"\n";
       output<< QString::number(ui->Weekcolor->currentIndex())<<"\n";
       output<< QString::number(ui->Weekendcolor->currentIndex())<<"\n";
       int days=ui->alarm->currentIndex();
       ++days;
       QString alarmDays = QString::number(days);
       output << alarmDays;
    }
    file.close();

    configure::close();
}

void configure::on_pushButton_2_clicked()
{
    configure::close();
}
