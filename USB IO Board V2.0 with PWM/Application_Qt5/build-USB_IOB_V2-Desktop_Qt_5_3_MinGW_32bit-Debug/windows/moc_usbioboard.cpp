/****************************************************************************
** Meta object code from reading C++ file 'usbioboard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../usbioboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usbioboard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_USBIOBoard_t {
    QByteArrayData data[14];
    char stringdata[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_USBIOBoard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_USBIOBoard_t qt_meta_stringdata_USBIOBoard = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 18),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 4),
QT_MOC_LITERAL(4, 36, 16),
QT_MOC_LITERAL(5, 53, 17),
QT_MOC_LITERAL(6, 71, 4),
QT_MOC_LITERAL(7, 76, 9),
QT_MOC_LITERAL(8, 86, 10),
QT_MOC_LITERAL(9, 97, 11),
QT_MOC_LITERAL(10, 109, 7),
QT_MOC_LITERAL(11, 117, 7),
QT_MOC_LITERAL(12, 125, 9),
QT_MOC_LITERAL(13, 135, 10)
    },
    "USBIOBoard\0signal_update_tris\0\0tris\0"
    "signal_update_io\0singal_update_pwm\0"
    "duty\0frequency\0update_gui\0isConnected\0"
    "UI_Data\0ui_data\0update_io\0update_pwm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_USBIOBoard[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       5,    2,   50,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   55,    2, 0x0a /* Public */,
      12,    0,   60,    2, 0x0a /* Public */,
      13,    0,   61,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::UChar, QMetaType::Long,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 10,    9,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void USBIOBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        USBIOBoard *_t = static_cast<USBIOBoard *>(_o);
        switch (_id) {
        case 0: _t->signal_update_tris((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 1: _t->signal_update_io((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 2: _t->singal_update_pwm((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        case 3: _t->update_gui((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< UI_Data(*)>(_a[2]))); break;
        case 4: _t->update_io(); break;
        case 5: _t->update_pwm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (USBIOBoard::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&USBIOBoard::signal_update_tris)) {
                *result = 0;
            }
        }
        {
            typedef void (USBIOBoard::*_t)(unsigned char );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&USBIOBoard::signal_update_io)) {
                *result = 1;
            }
        }
        {
            typedef void (USBIOBoard::*_t)(unsigned char , long );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&USBIOBoard::singal_update_pwm)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject USBIOBoard::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_USBIOBoard.data,
      qt_meta_data_USBIOBoard,  qt_static_metacall, 0, 0}
};


const QMetaObject *USBIOBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *USBIOBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_USBIOBoard.stringdata))
        return static_cast<void*>(const_cast< USBIOBoard*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int USBIOBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void USBIOBoard::signal_update_tris(unsigned char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void USBIOBoard::signal_update_io(unsigned char _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void USBIOBoard::singal_update_pwm(unsigned char _t1, long _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
