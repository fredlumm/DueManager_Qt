#ifndef NODE2_H
#define NODE2_H

#include <QString>

class Node2{
private:
    int year;
    int month;
    int date;
    int hour;
    QString content;
    QString category;

public:

    Node2(){}

    Node2(const QString & y, const int & m, const QString & d, const int & h, const QString & cont, const QString & cate){
        year = y.toInt();
        month = m;
        date = d.toInt();
        hour = h;
        content = cont;
        category = cate;
    }

    Node2 & operator=(Node2 &rhs){
        year = rhs.year;
        month = rhs.month;
        date = rhs.date;
        hour = rhs.hour;
        content = rhs.content;
        category = rhs.category;
        return *this;
    }

    const bool & operator>(Node2 &rhs) const {
        if(year > rhs.year) return true;
        else if(year == rhs.year && month > rhs.month) return true;
        else if(year == rhs.year && month == rhs.month && date > rhs.date) return true;
        else if(year == rhs.year && month == rhs.month && date == rhs.date && hour > rhs.hour) return true;
        else return false;
    }

    const bool & operator<(Node2 &rhs) const {
        return !(*this > rhs);
    }

    const QString output(){
        QString month_tmp;
        QString date_tmp;
        if(month < 10 && month > 0){
            month_tmp = "0" + QString::number(month);
        }
        else {
            month_tmp = QString::number(month);
        }
        if(date < 10 && date > 0){
            date_tmp = "0" + QString::number(date);
        }
        else{
            date_tmp = QString::number(date);
        }

        const QString ans = content + "-" + QString::number(hour) + "-" + QString::number(year) + "-" + month_tmp + "-" + date_tmp + "-" + category + "\n";
        return ans;
    }

    bool search(const QString & rhs){
        QString month_tmp1;
        QString date_tmp1;
        if(month < 10 && month > 0){
            month_tmp1 = "0" + QString::number(month);
        }
        else {
            month_tmp1 = QString::number(month);
        }
        if(date < 10 && date > 0){
            date_tmp1 = "0" + QString::number(date);
        }
        else{
            date_tmp1 = QString::number(date);
        }
        if(QString::number(year).indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(date_tmp1.indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(month_tmp1.indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(content.toLower().indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(category.toLower().indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        return 0;
    }
};

#endif // Node2_H
