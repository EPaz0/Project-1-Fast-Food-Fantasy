/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../FFF_Project_1/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[36];
    char stringdata0[381];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 7), // "isAdmin"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 25), // "on_actionLog_in_triggered"
QT_MOC_LITERAL(46, 5), // "Admin"
QT_MOC_LITERAL(52, 26), // "on_actionLog_out_triggered"
QT_MOC_LITERAL(79, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(101, 28), // "on_action10_Closet_triggered"
QT_MOC_LITERAL(130, 36), // "on_listWidget_item_itemDouble..."
QT_MOC_LITERAL(167, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(184, 4), // "item"
QT_MOC_LITERAL(189, 23), // "on_SubmitChange_clicked"
QT_MOC_LITERAL(213, 32), // "on_actionShortest_Trip_triggered"
QT_MOC_LITERAL(246, 30), // "on_actionCustom_Trip_triggered"
QT_MOC_LITERAL(277, 37), // "on_listWidget_price_itemDoubl..."
QT_MOC_LITERAL(315, 25), // "on_deleteMenuItem_clicked"
QT_MOC_LITERAL(341, 18), // "on_addMenu_clicked"
QT_MOC_LITERAL(360, 20) // "on_SubmitNew_clicked"

    },
    "MainWindow\0isAdmin\0\0on_actionLog_in_triggered\0"
    "Admin\0on_actionLog_out_triggered\0"
    "on_pushButton_clicked\0"
    "on_action10_Closet_triggered\0"
    "on_listWidget_item_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0on_SubmitChange_clicked\0"
    "on_actionShortest_Trip_triggered\0"
    "on_actionCustom_Trip_triggered\0"
    "on_listWidget_price_itemDoubleClicked\0"
    "on_deleteMenuItem_clicked\0on_addMenu_clicked\0"
    "on_SubmitNew_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   99,    2, 0x08,    2 /* Private */,
       4,    0,  100,    2, 0x08,    3 /* Private */,
       5,    0,  101,    2, 0x08,    4 /* Private */,
       6,    0,  102,    2, 0x08,    5 /* Private */,
       7,    0,  103,    2, 0x08,    6 /* Private */,
       8,    1,  104,    2, 0x08,    7 /* Private */,
      11,    0,  107,    2, 0x08,    9 /* Private */,
      12,    0,  108,    2, 0x08,   10 /* Private */,
      13,    0,  109,    2, 0x08,   11 /* Private */,
      14,    1,  110,    2, 0x08,   12 /* Private */,
      15,    0,  113,    2, 0x08,   14 /* Private */,
      16,    0,  114,    2, 0x08,   15 /* Private */,
      17,    0,  115,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isAdmin(); break;
        case 1: _t->on_actionLog_in_triggered(); break;
        case 2: _t->Admin(); break;
        case 3: _t->on_actionLog_out_triggered(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_action10_Closet_triggered(); break;
        case 6: _t->on_listWidget_item_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_SubmitChange_clicked(); break;
        case 8: _t->on_actionShortest_Trip_triggered(); break;
        case 9: _t->on_actionCustom_Trip_triggered(); break;
        case 10: _t->on_listWidget_price_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->on_deleteMenuItem_clicked(); break;
        case 12: _t->on_addMenu_clicked(); break;
        case 13: _t->on_SubmitNew_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::isAdmin)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::isAdmin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
