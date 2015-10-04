/****************************************************************************
** Meta object code from reading C++ file 'hid_pnp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../USB_IOB_V2/hid_pnp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hid_pnp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HID_PnP_t {
    QByteArrayData data[14];
    char stringdata[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HID_PnP_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HID_PnP_t qt_meta_stringdata_HID_PnP = {
    {
QT_MOC_LITERAL(0, 0, 7),
QT_MOC_LITERAL(1, 8, 15),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 11),
QT_MOC_LITERAL(4, 37, 7),
QT_MOC_LITERAL(5, 45, 7),
QT_MOC_LITERAL(6, 53, 9),
QT_MOC_LITERAL(7, 63, 7),
QT_MOC_LITERAL(8, 71, 7),
QT_MOC_LITERAL(9, 79, 11),
QT_MOC_LITERAL(10, 91, 9),
QT_MOC_LITERAL(11, 101, 10),
QT_MOC_LITERAL(12, 112, 4),
QT_MOC_LITERAL(13, 117, 9)
    },
    "HID_PnP\0hid_comm_update\0\0isConnected\0"
    "UI_Data\0ui_data\0toggle_io\0ioState\0"
    "PollUSB\0toggle_tris\0trisState\0change_pwm\0"
    "duty\0frequency"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HID_PnP[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      11,    2,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::UChar,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar,   10,
    QMetaType::Void, QMetaType::UChar, QMetaType::Long,   12,   13,

       0        // eod
};

void HID_PnP::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HID_PnP *_t = static_cast<HID_PnP *>(_o);
        switch (_id) {
        case 0: _t->hid_comm_update((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< UI_Data(*)>(_a[2]))); break;
        case 1: _t->toggle_io((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 2: _t->PollUSB(); break;
        case 3: _t->toggle_tris((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 4: _t->change_pwm((*reinterpret_cast< unsigned char(*)>(_a[1])),(*reinterpret_cast< long(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HID_PnP::*_t)(bool , UI_Data );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HID_PnP::hid_comm_update)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject HID_PnP::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HID_PnP.data,
      qt_meta_data_HID_PnP,  qt_static_metacall, 0, 0}
};


const QMetaObject *HID_PnP::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HID_PnP::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HID_PnP.stringdata))
        return static_cast<void*>(const_cast< HID_PnP*>(this));
    return QObject::qt_metacast(_clname);
}

int HID_PnP::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void HID_PnP::hid_comm_update(bool _t1, UI_Data _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
