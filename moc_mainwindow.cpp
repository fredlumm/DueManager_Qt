/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[29];
    char stringdata[420];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 20),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 23),
QT_MOC_LITERAL(4, 57, 25),
QT_MOC_LITERAL(5, 83, 23),
QT_MOC_LITERAL(6, 107, 7),
QT_MOC_LITERAL(7, 115, 11),
QT_MOC_LITERAL(8, 127, 4),
QT_MOC_LITERAL(9, 132, 11),
QT_MOC_LITERAL(10, 144, 4),
QT_MOC_LITERAL(11, 149, 14),
QT_MOC_LITERAL(12, 164, 6),
QT_MOC_LITERAL(13, 171, 14),
QT_MOC_LITERAL(14, 186, 7),
QT_MOC_LITERAL(15, 194, 14),
QT_MOC_LITERAL(16, 209, 4),
QT_MOC_LITERAL(17, 214, 14),
QT_MOC_LITERAL(18, 229, 3),
QT_MOC_LITERAL(19, 233, 19),
QT_MOC_LITERAL(20, 253, 9),
QT_MOC_LITERAL(21, 263, 19),
QT_MOC_LITERAL(22, 283, 12),
QT_MOC_LITERAL(23, 296, 23),
QT_MOC_LITERAL(24, 320, 27),
QT_MOC_LITERAL(25, 348, 4),
QT_MOC_LITERAL(26, 353, 27),
QT_MOC_LITERAL(27, 381, 5),
QT_MOC_LITERAL(28, 387, 31)
    },
    "MainWindow\0on_AddButton_clicked\0\0"
    "on_SearchButton_clicked\0"
    "on_actionQuit_2_triggered\0"
    "on_DeleteButton_clicked\0Myslots\0"
    "receiveData\0data\0receiveMode\0mode\0"
    "receiveVHeader\0header\0receiveHHeader\0"
    "Hheader\0receiveMinimum\0mini\0receiveMaximum\0"
    "max\0receiveWeekdayColor\0Weekcolor\0"
    "receiveWeekendColor\0Weekendcolor\0"
    "on_ConfigButton_clicked\0"
    "on_calendarWidget_activated\0date\0"
    "on_NewDueList_doubleClicked\0index\0"
    "on_actionIntroduction_triggered\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08,
       3,    0,  100,    2, 0x08,
       4,    0,  101,    2, 0x08,
       5,    0,  102,    2, 0x08,
       6,    0,  103,    2, 0x0a,
       7,    1,  104,    2, 0x08,
       9,    1,  107,    2, 0x08,
      11,    1,  110,    2, 0x08,
      13,    1,  113,    2, 0x08,
      15,    1,  116,    2, 0x08,
      17,    1,  119,    2, 0x08,
      19,    1,  122,    2, 0x08,
      21,    1,  125,    2, 0x08,
      23,    0,  128,    2, 0x08,
      24,    1,  129,    2, 0x08,
      26,    1,  132,    2, 0x08,
      28,    0,  135,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   25,
    QMetaType::Void, QMetaType::QModelIndex,   27,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_AddButton_clicked(); break;
        case 1: _t->on_SearchButton_clicked(); break;
        case 2: _t->on_actionQuit_2_triggered(); break;
        case 3: _t->on_DeleteButton_clicked(); break;
        case 4: _t->Myslots(); break;
        case 5: _t->receiveData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->receiveMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->receiveVHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->receiveHHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->receiveMinimum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->receiveMaximum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->receiveWeekdayColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->receiveWeekendColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_ConfigButton_clicked(); break;
        case 14: _t->on_calendarWidget_activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 15: _t->on_NewDueList_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 16: _t->on_actionIntroduction_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
