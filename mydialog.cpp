#include "mydialog.h"
#include "ui_mydialog.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include "Node.h"
#include <QComboBox>
#include <QLinkedList>
#include <QVector>
#include <QTextEdit>
#include <QList>
#include <QDebug>
#include <iostream>
#include <QDate>

//#define StorageFileName "/Users/ningweichen/Qt/myself/551/source.txt"
#define StorageFileName QString(getenv("HOME"))+"/source.txt"


MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
    MyDialog::setWindowTitle("Add Events");

    //set background
    QPixmap pixmap(":/myimage/background2.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    Qt::WindowFlags flags = 0;
    flags |= Qt::WindowMinimizeButtonHint;
    setWindowFlags(flags); // 设置禁止最大化
    setFixedSize(577,300); // 禁止改变窗口大小

    //set year data
    QDate current_ini=QDate::currentDate();
    QString current=current_ini.toString("yyyy-MM-dd");
    QString year_ini=current.section("-",0,0);
    QString month_ini=current.section("-",1,1);
    QString day_ini=current.section("-",2,2);
    int year=year_ini.toInt();
    int month=month_ini.toInt();
    int day=day_ini.toInt();

    for(int i = 0;i != 10;++i) {
        ui->year->addItem(QString::number(year + i));
    }

    //set month data
    ui->month->addItem("January");
    ui->month->addItem("February");
    ui->month->addItem("March");
    ui->month->addItem("April");
    ui->month->addItem("May");
    ui->month->addItem("June");
    ui->month->addItem("July");
    ui->month->addItem("August");
    ui->month->addItem("September");
    ui->month->addItem("October");
    ui->month->addItem("November");
    ui->month->addItem("December");

    ui->month->setCurrentIndex(month-1);

    //set date data
    for(int i = 1;i < 32;++i) {
        if(i<10){
            ui->date->addItem("0"+QString::number(i));
        }
        else{
            ui->date->addItem(QString::number(i));
        }
    }

    ui->date->setCurrentIndex(day-1);

    //set hour data
    for(int i = 0; i < 24; ++i) {
        ui->hour->addItem(QString::number(i) + ":00 - " + QString::number(i + 1) + ":00");
    }

    //set type data
    ui->type->addItem("Urgent");
    ui->type->addItem("Important");
    ui->type->addItem("Normal");

    //set enter
    connect(ui->content, SIGNAL(finishEditing()),this,SLOT(on_Save_clicked()));
}

void input(QLinkedList<Node > & data, Node * tmpData){
    if(data.size() <= 0){
        data.append(*tmpData);
    }
    else{
        QLinkedList<Node >::iterator it = data.begin();
        for(it; it != data.end(); it++){
           if((*it) > *tmpData){
                data.insert(it, *tmpData);
                break;
           }
        }
        if(it == data.end()){
            data.append(*tmpData);
        }
    }
}

MyDialog::~MyDialog()
{
    delete ui;
}


void MyDialog::on_Save_clicked()
{
    if(ui->content->text()==""){
        QMessageBox::information(this,"Error","Please input item");
    }
    else{
    QString categorytemp;

    if(ui->HomeworkButton->isChecked())
    {
        categorytemp = "Homework";
    }
    else if(ui->SeminarButton->isChecked())
    {
        categorytemp = "Seminar";
    }
    else if(ui->SocialButton->isChecked())
    {
        categorytemp = "Social Activity";
    }
    else if(ui->OthersButton->isChecked())
    {
        categorytemp = "Others";
    }

    //declare vector to store data base on catergory
    Node * tmpData = new Node(ui->year->currentText(), (ui->month->currentIndex() + 1), ui->date->currentText(), ui->hour->currentIndex(), ui->content->text(), categorytemp);
    //QString test=tmpData->output();
    //qDebug()<<test;
    if(ui->type->currentText() == "Urgent"){
        input((*d)[0], tmpData);
    }

    else if(ui->type->currentText() == "Important"){
        input((*d)[1], tmpData);
    }

    else if(ui->type->currentText() == "Normal"){
        input((*d)[2], tmpData);
    }
    delete tmpData;

//write into file
    QFile file(StorageFileName);
    if(file.open(QIODevice::WriteOnly)){
       QTextStream out(&file);
       QString outputFile = "";
       for(int i = 0; i < 3; i++){
           QString ans;
           if(i == 0){
               ans = "urgent\n";
           }
           if(i == 1){
               ans = "important\n";
           }
           if(i == 2){
               ans = "normal\n";
           }
           for(QLinkedList<Node>::iterator it = (*d)[i].begin(); it != (*d)[i].end(); it++){
                ans = ans + (*it).output();
           }
           outputFile = outputFile + ans;
       }
       out << outputFile;
    }
    file.close();
    QMessageBox message(QMessageBox::NoIcon,"Notification","Saved!");
    //QPixmap pixmap(":/myimage/back4.jpg");
    //QPalette palette1;
    //palette1.setBrush(backgroundRole(),QBrush(pixmap));
    //message.setPalette(palette1);
    message.setIconPixmap(QPixmap(":/myimage/yes.png"));
    message.exec();
    MyDialog::close();
    }
}

void MyDialog::readFile(){
    QFile file(StorageFileName);
    QString str;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        int i = 0;
        while(!file.atEnd()){
            str = file.readLine();
            if(str!="\n")
            {
                if(str.compare("urgent\n", Qt::CaseInsensitive) == 0){

                }
                else if(str.compare("important\n", Qt::CaseInsensitive) == 0){
                    i = 1;
                }
                else if(str.compare("normal\n", Qt::CaseInsensitive) == 0){
                    i = 2;
                }
                else {
                    Node * tmp = new Node(str.section('-', 2, 2), str.section('-', 3, 3).toInt(), str.section("-", 4, 4), str.section("-", 1, 1).toInt(), str.section("-", 0, 0), str.section("-", 5, 5));
                    input((*d)[i], tmp);
                }
            }
        }
    }
    file.close();
}

void MyDialog::on_Cancel_clicked()
{
    MyDialog::close();
}

void printData(QVector<QLinkedList<Node > > * d){
    for(int i = 0; i < 3; i++){
        if(i == 0){
            qDebug() << "Urgent Events are\n";
        }
        else if(i == 1){
            qDebug() << "Important Events are\n";
        }
        else{
            qDebug() << "Normal Events are\n";
        }
        for(QLinkedList<Node >::iterator it = (*d)[i].begin(); it != (*d)[i].end(); it++){
            qDebug() << (*it).output();
        }
    }
}

void MyDialog::showDate(int Year,int Month,int Day)
{
    int YearIndex=Year-14;
    int MonthIndex=Month-1;
    int DayIndex=Day-1;
    ui->year->setCurrentIndex(YearIndex);
    ui->month->setCurrentIndex(MonthIndex);
    ui->date->setCurrentIndex(DayIndex);
}
