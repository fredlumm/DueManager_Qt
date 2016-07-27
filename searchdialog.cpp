#include "searchdialog.h"
#include "ui_searchdialog.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QMessageBox>
#include "Node2.h"
#include <QComboBox>
#include <QLinkedList>
#include <QVector>
#include <QTextEdit>
#include <QList>
#include <QDebug>
#include <iostream>
#include <QString>

//#define StorageFileName "/Users/ningweichen/Qt/myself/551/source.txt"
#define StorageFileName QString(getenv("HOME"))+"/source.txt"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    SearchDialog::setWindowTitle("Search Events");

    //set background
    QPixmap pixmap(":/myimage/background4.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    Qt::WindowFlags flags = 0;
    flags |= Qt::WindowMinimizeButtonHint;
    setWindowFlags(flags); // 设置禁止最大化
    setFixedSize(400,330); // 禁止改变窗口大小

    //set qtablewidget
    ui->search_box->setStyleSheet("background-color:rgba(192,192,192,0.5)");
    ui->search_box->setFixedSize(200,27);

    ui->searchResult->setStyleSheet("background-color:rgba(192,192,192,0.3)");
    ui->searchResult->setFixedSize(202,165);

    ui->searchResult->setColumnCount(2);

    QStringList headers;
    headers << "Event" << "Date";
    ui->searchResult->setHorizontalHeaderLabels(headers);
    QFont font=ui->searchResult->horizontalHeader()->font();
    font.setBold(true);
    ui->searchResult->horizontalHeader()->setFont(font);

    //set header style
    ui->searchResult->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->searchResult->verticalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->searchResult->verticalHeader()->setVisible(false);
    ui->searchResult->setShowGrid(false);
    ui->searchResult->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->searchResult->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑

    //set enter
    connect(ui->search_box, SIGNAL(finishEditing()),this,SLOT(on_SearchButton_clicked()));
}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void input(QLinkedList<Node2 > & data, Node2 * tmpData){
    if(data.size() <= 0){
        data.append(*tmpData);
    }
    else{
        QLinkedList<Node2 >::iterator it = data.begin();
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

void SearchDialog::readFile1(){
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
                    Node2 * tmp = new Node2(str.section('-', 2, 2), str.section('-', 3, 3).toInt(), str.section("-", 4, 4), str.section("-", 1, 1).toInt(), str.section("-", 0, 0), str.section("-", 5, 5));
                    input((*s)[i], tmp);
                }
            }
        }
    }
    file.close();
}

void SearchDialog::on_CancelButton_clicked()
{
    SearchDialog::close();
}

void SearchDialog::on_SearchButton_clicked()
{
    if(ui->search_box->text()==""){
        QMessageBox::information(this,"Error","Please input item");
        return;
    }
    ui->searchResult->clear();

    QStringList headers;
    headers << "Event" << "Date";
    ui->searchResult->setHorizontalHeaderLabels(headers);
    QFont font=ui->searchResult->horizontalHeader()->font();
    font.setBold(true);
    ui->searchResult->horizontalHeader()->setFont(font);

    ui->searchResult->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->searchResult->verticalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->searchResult->verticalHeader()->setVisible(false);
    ui->searchResult->setShowGrid(false);
    ui->searchResult->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->searchResult->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑

    QString input = ui->search_box->text().toLower();

    QString strUrgent = "urgent"; QString strImportant = "important"; QString strNormal = "normal";
    //QString ansUrgent = "urgent event\n"; QString ansImportant = "important event\n"; QString ansNormal = "normal event\n";

    int flag=0;
    if(strUrgent.indexOf(input, Qt::CaseInsensitive) != -1){
        int i=1;
        for(QLinkedList<Node2 >::iterator it = (*s)[0].begin(); it != (*s)[0].end(); it++){
            ui->searchResult->setRowCount(i);
            ui->searchResult->setItem(i-1, 0, new QTableWidgetItem(QString((*it).output().section("-", 0, 0))));
            ui->searchResult->setItem(i-1, 1, new QTableWidgetItem(QString((*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2))));
            i++;
            //ansUrgent = ansUrgent + (*it).output().section("-",0,0) + "  " + (*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2) + "\n";
        }
        if(i!=1){
            flag=1;
        }
    }
    if(strImportant.indexOf(input, Qt::CaseInsensitive) != -1){
        int i=1;
        for(QLinkedList<Node2 >::iterator it = (*s)[1].begin(); it != (*s)[1].end(); it++){
            ui->searchResult->setRowCount(i);
            ui->searchResult->setItem(i-1, 0, new QTableWidgetItem(QString((*it).output().section("-", 0, 0))));
            ui->searchResult->setItem(i-1, 1, new QTableWidgetItem(QString((*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2))));
            i++;
           //ansImportant = ansImportant + (*it).output().section("-",0,0) + "  " + (*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2) + "\n";
        }
        if(i!=1){
            flag=1;
        }
    }
    if(strNormal.indexOf(input, Qt::CaseInsensitive) != -1){
        int i=1;
        for(QLinkedList<Node2 >::iterator it = (*s)[2].begin(); it != (*s)[2].end(); it++){
            ui->searchResult->setRowCount(i);
            ui->searchResult->setItem(i-1, 0, new QTableWidgetItem(QString((*it).output().section("-", 0, 0))));
            ui->searchResult->setItem(i-1, 1, new QTableWidgetItem(QString((*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2))));
            i++;
            //ansNormal = ansNormal + (*it).output().section("-",0,0) + "  " + (*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2) + "\n";
        }
        if(i!=1){
            flag=1;
        }
    }

    int j=1;
    for(int i = 0; i < 3; i++){
        for(QLinkedList<Node2 >::iterator it = (*s)[i].begin(); it != (*s)[i].end(); it++){
            if((*it).search(ui->search_box->text().toLower()) || (*it).output().indexOf(ui->search_box->text().toLower())!=-1){
                ui->searchResult->setRowCount(j);
                ui->searchResult->setItem(j-1, 0, new QTableWidgetItem(QString((*it).output().section("-", 0, 0))));
                ui->searchResult->setItem(j-1, 1, new QTableWidgetItem(QString((*it).output().section("-",3,3) + "/" + (*it).output().section("-",4,4) + "/" + (*it).output().section("-",2,2))));
                j++;

                }
         }
    }

    if(j==1 && flag==0)
    {
        QMessageBox::information(this,"Notice","No Results!");
    }

}

void SearchDialog::on_searchResult_doubleClicked(const QModelIndex &index)
{
    if(ui->searchResult->currentItem()->column()>0){
        return;
    }
     QString temp=ui->searchResult->item(ui->searchResult->currentItem()->row(),ui->searchResult->currentItem()->column())->text();
     QString info="Event:\n\n"+temp;
     QMessageBox message(QMessageBox::NoIcon,"Notification",info);
     QPixmap pixmap(":/myimage/back3.jpg");
     QPalette palette1;
     palette1.setBrush(backgroundRole(),QBrush(pixmap));
     message.setPalette(palette1);
     message.setIconPixmap(QPixmap(":/myimage/event.png"));
     message.exec();
}
