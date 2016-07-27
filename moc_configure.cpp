/****************************************************************************
** Meta object code from reading C++ file 'configure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "configure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'configure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_configure_t {
    QByteArrayData data[12];
    char stringdata[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_configure_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_configure_t qt_meta_stringdata_configure = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 8),
QT_MOC_LITERAL(2, 19, 0),
QT_MOC_LITERAL(3, 20, 8),
QT_MOC_LITERAL(4, 29, 11),
QT_MOC_LITERAL(5, 41, 11),
QT_MOC_LITERAL(6, 53, 11),
QT_MOC_LITERAL(7, 65, 11),
QT_MOC_LITERAL(8, 77, 16),
QT_MOC_LITERAL(9, 94, 16),
QT_MOC_LITERAL(10, 111, 21),
QT_MOC_LITERAL(11, 133, 23)
    },
    "configure\0sendData\0\0sendMode\0sendVHeader\0"
    "sendHHeader\0sendMinimum\0sendMaximum\0"
    "sendWeekdayColor\0sendWeekendColor\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_configure[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06,
       3,    1,   67,    2, 0x06,
       4,    1,   70,    2, 0x06,
       5,    1,   73,    2, 0x06,
       6,    1,   76,    2, 0x06,
       7,    1,   79,    2, 0x06,
       8,    1,   82,    2, 0x06,
       9,    1,   85,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    0,   88,    2, 0x08,
      11,    0,   89,    2, 0x08,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void configure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        configure *_t = static_cast<configure *>(_o);
        switch (_id) {
        case 0: _t->sendData((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sendMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->sendVHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sendHHeader((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendMinimum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sendMaximum((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->sendWeekdayColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->sendWeekendColor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendData)) {
                *result = 0;
            }
        }
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendMode)) {
                *result = 1;
            }
        }
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendVHeader)) {
                *result = 2;
            }
        }
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendHHeader)) {
                *result = 3;
            }
        }
        {
            typedef void (configure::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendMinimum)) {
                *result = 4;
            }
        }
        {
            typedef void (configure::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendMaximum)) {
                *result = 5;
            }
        }
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendWeekdayColor)) {
                *result = 6;
            }
        }
        {
            typedef void (configure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&configure::sendWeekendColor)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject configure::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_configure.data,
      qt_meta_data_configure,  qt_static_metacall, 0, 0}
};


const QMetaObject *configure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *configure::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_configure.stringdata))
        return static_cast<void*>(const_cast< configure*>(this));
    return QDialog::qt_metacast(_clname);
}

int configure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void configure::sendData(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void configure::sendMode(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void configure::sendVHeader(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void configure::sendHHeader(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void configure::sendMinimum(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void configure::sendMaximum(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void configure::sendWeekdayColor(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void configure::sendWeekendColor(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
