#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mydialog.h"
#include "searchdialog.h"
#include "Node.h"
#include "Node2.h"
#include "configure.h"
#include "QTableWidget"
#include <QMessageBox>
#include <QLinkedList>
#include "intro.h"
#include <QPalette>
#include <QMap>
#include <QHeaderView>
#include <QHeaderView>
#include <QFont>
#include <QApplication>

//#define StorageFileName "/Users/ningweichen/Qt/myself/551/source.txt"
//#define AlarmFileName "/Users/ningweichen/Qt/myself/551/alarmdays.txt"
#define StorageFileName QString(getenv("HOME"))+"/source.txt"
#define AlarmFileName QString(getenv("HOME"))+"/alarmdays.txt"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MainWindow::setWindowTitle("Due Manager");


//set default selectionmode
    int flag=1;
    QFile file10(AlarmFileName);
    if(file10.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        int temp=file10.readLine().toInt();
        if(temp==0 || temp==1){
            flag=0;
        }
    }
    file10.close();

    if(flag)
    {
        QFile file(AlarmFileName);
        if(file.open(QIODevice::WriteOnly)){
            QTextStream output(&file);
            output<< "0"<<"\n";
            output<< "0"<<"\n";
            output<< "0"<<"\n";
            output<< "0"<<"\n";
            output<<"\n";
            output<<"\n";
            output<< "0"<<"\n";
            output<< "0"<<"\n";
            output << "3";
        }
        file.close();
    }


//show clock
    QTimer *timer = new QTimer(this);
    //连接信号与槽
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(1000);
    resize(700,460);

//setup Qtablewidget & display
    MainWindow::setdisplay();

//set configuration
    QTimer::singleShot(2*1000,this,SLOT(Myslots()));

//set default calendar
    ui->calendarWidget->setGridVisible(true);

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
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
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
     }
     file1.close();

     if(FirstDayOfWeek==0){
          ui->calendarWidget->setFirstDayOfWeek(Qt::Sunday);
      }
     else{
          ui->calendarWidget->setFirstDayOfWeek(Qt::Monday);
      }

      if(SelectionMode==1){
          ui->calendarWidget->setSelectionMode(QCalendarWidget::NoSelection);
      }
      else{
          ui->calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
      }

      if(VerticalHeader==0){
          ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
      }
      else{
          ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
      }

      if(HorizontalHeader==0){
          ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
      }
      else if(HorizontalHeader==1){
          ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
      }
      else if(HorizontalHeader==2){
          ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
      }
      else{
          ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::NoHorizontalHeader);
      }

      QDate date1=QDate::fromString(MinimumDate,"yyyy-MM-dd");
      ui->calendarWidget->setMinimumDate(date1);

      QDate date2=QDate::fromString(MaximumDate,"yyyy-MM-dd");
      ui->calendarWidget->setMaximumDate(date2);

      QTextCharFormat format1;
      if(WeekdayColor==0){
          QBrush brush(Qt::black);
          format1.setForeground(brush);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format1);
       }
       else if(WeekdayColor==1){
          QBrush brush(Qt::blue);
          format1.setForeground(brush);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format1);
          ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format1);
        }
        else{
           QBrush brush(Qt::red);
           format1.setForeground(brush);
           ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format1);
           ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format1);
           ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format1);
           ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format1);
           ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format1);
         }

         QTextCharFormat format2;
         if(WeekendColor==0){
             QBrush brush(Qt::red);
             format2.setForeground(brush);
             ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format2);
             ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format2);
          }
          else if(WeekendColor==1){
              QBrush brush(Qt::blue);
              format2.setForeground(brush);
              ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format2);
              ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format2);
           }
           else{
               QBrush brush(Qt::black);
               format2.setForeground(brush);
               ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format2);
               ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format2);
            }

//set background image & format
    QPixmap pixmap(":/myimage/back1.jpg");
    QPalette palette;
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    this->setPalette(palette);

    ui->DeleteButton->setFixedSize(50,50);
    ui->DeleteButton->setStyleSheet ("QPushButton{border-image:url(:/myimage/delete.png);border:2px groove gray;border-radius:10px;padding:2px 4px;}");
    ui->AddButton->setFixedSize(50,50);
    ui->AddButton->setStyleSheet ("QPushButton{border-image:url(:/myimage/add.png);border:2px groove gray;border-radius:10px;padding:2px 4px;}");
    ui->ConfigButton->setFixedSize(50,50);
    ui->ConfigButton->setStyleSheet ("QPushButton{border-image:url(:/myimage/config.png);border:2px groove gray;border-radius:10px;padding:2px 4px;}");
    ui->SearchButton->setFixedSize(50,50);
    ui->SearchButton->setStyleSheet ("QPushButton{border-image:url(:/myimage/search.png);border:2px groove gray;border-radius:10px;padding:2px 4px;}");

    ui->AddButton->setToolTip("Add an event");
    ui->DeleteButton->setToolTip("Delete an event");
    ui->SearchButton->setToolTip("Search events");
    ui->ConfigButton->setToolTip("Set configuration");

    ui->NewDueList->setStyleSheet("background-color:rgba(192,192,192,0.2)");
    ui->calendarWidget->setStyleSheet("background-color:rgba(253,245,230,1)");

    Qt::WindowFlags flags = 0;
    flags |= Qt::WindowMinimizeButtonHint;
    setWindowFlags(flags); // 设置禁止最大化
    setFixedSize(700,460); // 禁止改变窗口大小

    QColor highlight(222, 184 ,135);
    QTextCharFormat currentDayHighlight;
    currentDayHighlight.setBackground(highlight);
    QDate today = QDate::currentDate();
    ui->calendarWidget->setDateTextFormat(today, currentDayHighlight);
}


MainWindow::~MainWindow()
{
    MainWindow::Myslots();
    delete ui;
}


void MainWindow::on_AddButton_clicked()
{
    MyDialog mDialog;
    mDialog.readFile();
    mDialog.setModal(false);
    mDialog.exec();

    MainWindow::setdisplay();
}


void MainWindow::on_SearchButton_clicked()
{
    SearchDialog sDialog;
    sDialog.readFile1();
    sDialog.setModal(false);
    //connect(sDialog,SIGNAL(sendData(QString)),this,SLOT(receiveData(QString)));
    sDialog.exec();
}

void MainWindow::on_actionQuit_2_triggered()
{
    //MainWindow::Myslots();
    MainWindow::close();
}

void MainWindow::on_DeleteButton_clicked()
{ 
    QMessageBox::StandardButton inquiry;
    QPixmap pixmap(":/myimage/back3.jpg");
    QPalette palette1;
    palette1.setBrush(backgroundRole(),QBrush(pixmap));
    //inquiry.setPalette(palette1);
    inquiry = QMessageBox::question(this, "Question", "Are you sure to delete this event?", QMessageBox::Yes | QMessageBox::No);

    if(inquiry == QMessageBox::Yes){

    if(ui->NewDueList->currentIndex().row()==-1){
        return;
    }

    int linenumber1 = 0;
    QFile file(StorageFileName);
    QString str;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        while(!file.atEnd()){
            str = file.readLine();
            if(str.compare("urgent\n", Qt::CaseSensitive)!=0 && str.compare("important\n", Qt::CaseSensitive)!=0 && str.compare("normal\n", Qt::CaseSensitive)!=0 && str.length()>10)
            {
                linenumber1++;
            }
        }
    }
    file.close();
    if(ui->NewDueList->currentIndex().row()>=linenumber1){
        return;
    }

    int number=ui->NewDueList->currentIndex().row();
    QTableWidgetItem *item1=ui->NewDueList->item(number,0);
    QString deleteitem=item1->text();
    ui->NewDueList->removeRow(number);

    QLinkedList<QString> list;

    QFile file1(StorageFileName);
    QString str1;
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        while(!file1.atEnd())
        {
            str1 = file1.readLine();
            if((str1.section("-", 0, 0))!=deleteitem){
                list<<str1;
            }
        }
    }
    file1.close();

    QFile file2(StorageFileName);
    if(file2.open(QIODevice::WriteOnly)){
       QTextStream out(&file2);
       QString outputFile = "";
       foreach(QString i, list)
       {
           outputFile=outputFile+i;
       }
       out << outputFile;
    }
    file2.close();
    }
}

void MainWindow::paintEvent(QPaintEvent *)

  {
  //set 3 points
      static const QPoint hourHand[3] = {
          QPoint(3, 8),
          QPoint(-3, 8),
          QPoint(0, -40)
      };
      static const QPoint minuteHand[3] = {
          QPoint(3, 8),
          QPoint(-3, 8),
          QPoint(0, -70)
      };
      static const QPoint secondHand[3] = {
          QPoint(3, 8),
          QPoint(-3, 8),
          QPoint(0, -90)
      };

  //set 3 pointers color
      QColor hourColor(127, 0, 127);
      QColor minuteColor(0, 127, 127, 191);
      QColor secondColor(255, 215,0);
      QColor scaleColor(0,0,0);
      QColor scaleColor1(230,230,250);
  //paint range
      int side = qMin(width(), height());
  //get current time
      QTime time = QTime::currentTime();
  //declare painter
      QPainter painter(this);

      painter.setRenderHint(QPainter::Antialiasing);
  //set central point
      painter.translate(width()-width() / 7.5, height() / 2.3);
  //set clock range
      painter.scale(side / 570.0, side / 570.0);

      painter.setPen(Qt::NoPen);
  //set brush color
      painter.setBrush(hourColor);
  //save status
      painter.save();
  //set change
      painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
  //set region
      painter.drawConvexPolygon(hourHand, 3);
  //restore status
      painter.restore();

  //set scale
      painter.setPen(scaleColor1);
  //12 scales
      for (int i = 0; i < 12; ++i) {
         painter.drawLine(88, 0, 96, 0);
          painter.rotate(30.0);
      }

      painter.setPen(Qt::NoPen);

      painter.setBrush(minuteColor);


      painter.save();
      painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
      painter.drawConvexPolygon(minuteHand, 3);
      painter.restore();

      painter.setPen(scaleColor);

      for (int j = 0; j < 60; ++j) {
          if ((j % 5) != 0)
              painter.drawLine(92, 0, 96, 0);
          painter.rotate(6.0);
      }

     painter.setPen(Qt::NoPen);

     painter.setBrush(secondColor);

     painter.save();
     painter.rotate(6.0*time.second());
     painter.drawConvexPolygon(secondHand,3);
     painter.restore();
 }

void MainWindow::setdisplay()
{
    //ui->NewDueList->setStyleSheet("background-color:rgba(210,180,140,0.5)");

    ui->NewDueList->setColumnCount(5);

    QStringList headers;
    headers << "Event" << "Date" << "Hour(24Hr)" << "Category" << "Priority";
    ui->NewDueList->setHorizontalHeaderLabels(headers);
    QFont font=ui->NewDueList->horizontalHeader()->font();
    font.setBold(true);
    ui->NewDueList->horizontalHeader()->setFont(font);

    //set header style
    ui->NewDueList->horizontalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->NewDueList->verticalHeader()->setStyleSheet("QHeaderView::section {background-color:rgba(192,192,192,0.3);color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");
    ui->NewDueList->verticalHeader()->setVisible(false);

    //
    ui->NewDueList->setShowGrid(false);
    ui->NewDueList->setSelectionBehavior(QAbstractItemView::SelectRows);  //设置选择行为时每次选择一行
    ui->NewDueList->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置不可编辑

    //count linenumber
    int linenumber = 0;
    QFile file(StorageFileName);
    QString str;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        while(!file.atEnd()){
            str = file.readLine();
            if(str.compare("urgent\n", Qt::CaseSensitive)!=0 && str.compare("important\n", Qt::CaseSensitive)!=0 && str.compare("normal\n", Qt::CaseSensitive)!=0 && str.length()>10)
            {
                linenumber++;
            }
        }
    }
    //qDebug()<<linenumber;
    file.close();

    //set display
    ui->NewDueList->setRowCount(linenumber);
    int i=0;
    QFile file1(StorageFileName);
    QString str1;
    if(file1.open(QIODevice::ReadOnly | QIODevice::Text)){
        QString temp;
        while(!file1.atEnd())
        {
            str1 = file1.readLine();
            if(str1.compare("urgent\n", Qt::CaseInsensitive) == 0){
                temp = "urgent";
            }
            if(str1.compare("important\n", Qt::CaseInsensitive) == 0){
                temp = "important";
            }
            if(str1.compare("normal\n", Qt::CaseInsensitive) == 0){
                temp = "normal";
            }
            //qDebug()<<temp;

            if((str1.compare("urgent\n", Qt::CaseSensitive)!=0) && (str1.compare("important\n", Qt::CaseSensitive)!=0) && (str1.compare("normal\n", Qt::CaseSensitive)!=0) && (str1.length()>10))
            {
                ui->NewDueList->setItem(i, 0, new QTableWidgetItem(QString(str1.section("-", 0, 0))));
                ui->NewDueList->setItem(i, 1, new QTableWidgetItem(QString(str1.section("-", 3, 3)+"/"+str1.section("-", 4, 4)+"/"+str1.section("-", 2, 2))));
                ui->NewDueList->setItem(i, 2, new QTableWidgetItem(QString(str1.section("-", 1, 1))));
                ui->NewDueList->setItem(i, 3, new QTableWidgetItem(QString(str1.section("-", 5, 5))));
                ui->NewDueList->setItem(i, 4, new QTableWidgetItem(QString(temp)));
                i++;
            }
        }
    }
    file1.close();
}

void MainWindow::Myslots(){
    QList<QString> datelist;
    QFile file1(StorageFileName);

    int eventcounter=0;
    int days;
    QMap<QString, QString> eventsTotal;
    QMap<QString, int> eventsToAlarm;

    QString lineStr;
    QString date;

    if(file1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
          while(!file1.atEnd())
                {
                    lineStr = file1.readLine();
                    if(lineStr.length()>10)
                    {
                            if(lineStr.compare("urgent\n", Qt::CaseInsensitive) == 0){

                            }
                             else if(lineStr.compare("important\n", Qt::CaseInsensitive) == 0){

                             }
                             else if(lineStr.compare("normal\n", Qt::CaseInsensitive) == 0){

                             }
                             else{
                                    QString date=lineStr.section('-',2,2)+'-'+lineStr.section('-',3,3)+'-'+lineStr.section('-',4,4);
                                    QString things=lineStr.section('-',0,0);
                                   // qDebug()<<date;
                                    datelist.push_back(date);
                                    eventsTotal.insert(things,date);
                              }
                    }
                }
    }
    file1.close();

    QFile file2(AlarmFileName);
    if(file2.open(QIODevice::ReadOnly | QIODevice::Text)){
       QTextStream input(&file2);
       QString lineStr;
       while(!input.atEnd()){
       lineStr = input.readLine();
       days=lineStr.toInt();
       //qDebug()<<days;
       }
    }
    file2.close();

    QDate currentday = QDate::currentDate();//.toString("dd.MM.yyyy");

    QMapIterator<QString, QString> iter(eventsTotal);
    while(iter.hasNext()){
        iter.next();
        QDate date=QDate::fromString(iter.value(),"yyyy-MM-dd");
        int remain= currentday.daysTo(date);
        if(remain>=0 && remain<=days){
            eventsToAlarm.insert(iter.key(),remain);
            ++eventcounter;
        }
    }

    QMapIterator< QString,int> iter3(eventsToAlarm);
      while(iter3.hasNext())
      {
          iter3.next();
          //qDebug() << iter3.key() << " " <<iter3.value();
      }

      if(eventcounter==1)
      {
          QString info="only "+QString::number(eventcounter,10)+" event is less then " + QString::number(days) + " days to due, so hurry up!!!\n";
          QMapIterator<QString, int> iter(eventsToAlarm);
          while(iter.hasNext())
          {
              iter.next();
              QString value=QString::number(iter.value());
              info=info+"\n"+iter.key()+" has "+value+" days left";
          }
           QMessageBox message(QMessageBox::NoIcon,"Notification",info);
           QPixmap pixmap(":/myimage/back3.jpg");
           QPalette palette1;
           palette1.setBrush(backgroundRole(),QBrush(pixmap));
           message.setPalette(palette1);
           message.setIconPixmap(QPixmap(":/myimage/clock_flat_icon_six_revisions.png"));
           message.exec();
      }

      else if(eventcounter>1)
      {
          QString info=QString::number(eventcounter,10)+" events are less then " + QString::number(days) +  " days to due, please do not waste yout time!!!\n";
          QMapIterator<QString, int> iter(eventsToAlarm);
          while(iter.hasNext())
          {
              iter.next();
              QString value=QString::number(iter.value());
              info=info+"\n"+iter.key()+" has "+value+" days left";
          }
          QMessageBox message(QMessageBox::NoIcon,"Notification",info);
          QPixmap pixmap(":/myimage/back3.jpg");
          QPalette palette1;
          palette1.setBrush(backgroundRole(),QBrush(pixmap));
          message.setPalette(palette1);
          message.setIconPixmap(QPixmap(":/myimage/clock_flat_icon_six_revisions.png"));
          message.exec();
      }

      else
      {
          QString info="Lucky you, have time on hands\n";
          QMessageBox message(QMessageBox::NoIcon,"Notification",info);
          QPixmap pixmap(":/myimage/back3.jpg");
          QPalette palette1;
          palette1.setBrush(backgroundRole(),QBrush(pixmap));
          message.setPalette(palette1);
          message.setIconPixmap(QPixmap(":/myimage/emblem_relax.png"));
          message.exec();
      }
}

void MainWindow::receiveData(int data){
    if(data==0){
       ui->calendarWidget->setFirstDayOfWeek(Qt::Sunday);
    }
    else{
       ui->calendarWidget->setFirstDayOfWeek(Qt::Monday) ;
    }
}

void MainWindow::receiveMode(int data){
    if(data==1){
       ui->calendarWidget->setSelectionMode(QCalendarWidget::NoSelection);
    }
    else{
       ui->calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
    }
}

void MainWindow::receiveVHeader(int header){
    if(header==0){
       ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
    }
    else{
       ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
    }
}

void MainWindow::receiveHHeader(int Hheader){
    if(Hheader==0){
       ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
    }
    else if(Hheader==1){
         ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::SingleLetterDayNames);
        }
    else if(Hheader==2){
        ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::LongDayNames);
    }
     else{
        ui->calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::NoHorizontalHeader);
    }
}

void MainWindow::receiveMinimum(QString mini){
    QDate date=QDate::fromString(mini,"yyyy-MM-dd");
    //qDebug()<<date;

    ui->calendarWidget->setMinimumDate(date);
}

void MainWindow::receiveMaximum(QString max){
    QDate date=QDate::fromString(max,"yyyy-MM-dd");
    //qDebug()<<date;
    ui->calendarWidget->setMaximumDate(date);
}

void MainWindow::receiveWeekdayColor(int Weekcolor){
     QTextCharFormat format;
    if(Weekcolor==0){
        QBrush brush(Qt::black);
       format.setForeground(brush);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format);
    }
    else if(Weekcolor==1){
        QBrush brush(Qt::blue);
       format.setForeground(brush);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format);
    }
    else{
        QBrush brush(Qt::red);
       format.setForeground(brush);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Monday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Tuesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Wednesday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Thursday,format);
       ui->calendarWidget->setWeekdayTextFormat(Qt::Friday,format);
    }
}

void MainWindow::receiveWeekendColor(int Weekendcolor){
    QTextCharFormat format;
   if(Weekendcolor==0){
       QBrush brush(Qt::red);
      format.setForeground(brush);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format);
   }
   else if(Weekendcolor==1){
       QBrush brush(Qt::blue);
      format.setForeground(brush);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format);
   }
   else{
       QBrush brush(Qt::black);
      format.setForeground(brush);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Saturday,format);
      ui->calendarWidget->setWeekdayTextFormat(Qt::Sunday,format);
   }
}

void MainWindow::on_ConfigButton_clicked()
{
    configure *config=new configure;
    config->setModal(false);
    connect(config,SIGNAL(sendData(int)),this,SLOT(receiveData(int)));
    connect(config,SIGNAL(sendMode(int)),this,SLOT(receiveMode(int)));
    connect(config,SIGNAL(sendVHeader(int)),this,SLOT(receiveVHeader(int)));
    connect(config,SIGNAL(sendHHeader(int)),this,SLOT(receiveHHeader(int)));
    connect(config,SIGNAL(sendMinimum(QString)),this,SLOT(receiveMinimum(QString)));
    connect(config,SIGNAL(sendMaximum(QString)),this,SLOT(receiveMaximum(QString)));
    connect(config,SIGNAL(sendWeekdayColor(int)),this,SLOT(receiveWeekdayColor(int)));
    connect(config,SIGNAL(sendWeekendColor(int)),this,SLOT(receiveWeekendColor(int)));
    config->exec();
}

void MainWindow::on_calendarWidget_activated(const QDate &date)
{
    //MainWindow::on_AddButton_clicked();
    MyDialog mDialog;
    mDialog.readFile();
    mDialog.setModal(false);
    QDate date2=ui->calendarWidget->selectedDate();
    QString str=date2.toString("yy-MM-dd");
    QString Year_initial=str.section("-",0,0);
    QString Month_initial=str.section("-",1,1);
    QString Day_initial=str.section("-",2,2);
    int Year=Year_initial.toInt();
    int Month=Month_initial.toInt();
    int Day=Day_initial.toInt();

    mDialog.showDate(Year, Month, Day);
    mDialog.exec();

    MainWindow::setdisplay();
}

void MainWindow::on_NewDueList_doubleClicked(const QModelIndex &index)
{
    if(ui->NewDueList->currentItem()->column()>0){
        return;
    }
     QString temp=ui->NewDueList->item(ui->NewDueList->currentItem()->row(),ui->NewDueList->currentItem()->column())->text();
     QString info="Event:\n\n"+temp;
     QMessageBox message(QMessageBox::NoIcon,"Notification",info);
     QPixmap pixmap(":/myimage/back3.jpg");
     QPalette palette1;
     palette1.setBrush(backgroundRole(),QBrush(pixmap));
     message.setPalette(palette1);
     message.setIconPixmap(QPixmap(":/myimage/event.png"));
     message.exec();
}



void MainWindow::on_actionIntroduction_triggered()
{
    intro mIntro;
    mIntro.setModal(false);
    mIntro.exec();
    //qDebug()<<"Guide Info";
}
