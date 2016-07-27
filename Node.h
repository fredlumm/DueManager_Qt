#ifndef NODE_H
#define NODE_H
#include <QString>

class Node{
private:
    int year;
    int month;
    int date;
    int hour;
    QString content;
    QString category;

public:

    Node(){}

    Node(const QString & y, const int & m, const QString & d, const int & h, const QString & cont, const QString & cate){
        year = y.toInt();
        month = m;
        date = d.toInt();
        hour = h;
        content = cont;
        category = cate;
    }

    Node & operator=(Node &rhs){
        year = rhs.year;
        month = rhs.month;
        date = rhs.date;
        hour = rhs.hour;
        content = rhs.content;
        category = rhs.category;
        return *this;
    }

    const bool & operator>(Node &rhs) const {
        if(year > rhs.year) return true;
        else if(year == rhs.year && month > rhs.month) return true;
        else if(year == rhs.year && month == rhs.month && date > rhs.date) return true;
        else if(year == rhs.year && month == rhs.month && date == rhs.date && hour > rhs.hour) return true;
        else return false;
    }

    const bool & operator<(Node &rhs) const {
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

        const QString ans = content + "-" + QString::number(hour) + ":00" + "-" + QString::number(year) + "-" + month_tmp + "-" + date_tmp + "-" + category + "\n";
        return ans;
    }

    bool search(const QString & rhs){
        if(QString::number(year).indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(QString::number(date).indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(QString::number(month).indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(content.indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        if(category.indexOf(rhs, Qt::CaseInsensitive) != -1) return 1;
        return 0;
    }
};

#endif // NODE_H
