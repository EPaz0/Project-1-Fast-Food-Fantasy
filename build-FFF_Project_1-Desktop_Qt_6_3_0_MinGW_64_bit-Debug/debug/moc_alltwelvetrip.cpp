/****************************************************************************
** Meta object code from reading C++ file 'alltwelvetrip.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FFF_Project_1/alltwelvetrip.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'alltwelvetrip.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_alltwelvetrip_t {
    const uint offsetsAndSize[24];
    char stringdata0[191];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_alltwelvetrip_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_alltwelvetrip_t qt_meta_stringdata_alltwelvetrip = {
    {
QT_MOC_LITERAL(0, 13), // "alltwelvetrip"
QT_MOC_LITERAL(14, 5), // "Admin"
QT_MOC_LITERAL(20, 0), // ""
QT_MOC_LITERAL(21, 8), // "backMain"
QT_MOC_LITERAL(30, 10), // "AdminCheck"
QT_MOC_LITERAL(41, 7), // "isAdmin"
QT_MOC_LITERAL(49, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(71, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(95, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(119, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(143, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(167, 23) // "on_pushButton_6_clicked"

    },
    "alltwelvetrip\0Admin\0\0backMain\0AdminCheck\0"
    "isAdmin\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked\0"
    "on_pushButton_4_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_6_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_alltwelvetrip[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   77,    2, 0x08,    4 /* Private */,
       6,    0,   78,    2, 0x08,    5 /* Private */,
       7,    0,   79,    2, 0x08,    6 /* Private */,
       8,    0,   80,    2, 0x08,    7 /* Private */,
       9,    0,   81,    2, 0x08,    8 /* Private */,
      10,    0,   82,    2, 0x08,    9 /* Private */,
      11,    0,   83,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void alltwelvetrip::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<alltwelvetrip *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Admin(); break;
        case 1: _t->backMain(); break;
        case 2: _t->AdminCheck(); break;
        case 3: _t->isAdmin(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_pushButton_2_clicked(); break;
        case 6: _t->on_pushButton_3_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->on_pushButton_5_clicked(); break;
        case 9: _t->on_pushButton_6_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (alltwelvetrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&alltwelvetrip::Admin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (alltwelvetrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&alltwelvetrip::backMain)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (alltwelvetrip::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&alltwelvetrip::AdminCheck)) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject alltwelvetrip::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_alltwelvetrip.offsetsAndSize,
    qt_meta_data_alltwelvetrip,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_alltwelvetrip_t
, QtPrivate::TypeAndForceComplete<alltwelvetrip, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *alltwelvetrip::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *alltwelvetrip::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_alltwelvetrip.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int alltwelvetrip::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void alltwelvetrip::Admin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void alltwelvetrip::backMain()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void alltwelvetrip::AdminCheck()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
