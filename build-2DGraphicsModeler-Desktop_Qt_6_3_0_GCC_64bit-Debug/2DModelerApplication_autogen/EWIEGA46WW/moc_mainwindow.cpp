/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[40];
    char stringdata0[453];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 27), // "on_actionSave_All_triggered"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 23), // "on_actionLoad_triggered"
QT_MOC_LITERAL(64, 23), // "on_actionText_triggered"
QT_MOC_LITERAL(88, 23), // "on_actionLine_triggered"
QT_MOC_LITERAL(112, 28), // "on_actionRectangle_triggered"
QT_MOC_LITERAL(141, 25), // "on_actionElipse_triggered"
QT_MOC_LITERAL(167, 26), // "on_actionPolygon_triggered"
QT_MOC_LITERAL(194, 27), // "on_actionPolyline_triggered"
QT_MOC_LITERAL(222, 33), // "on_actionSelected_Shape_trigg..."
QT_MOC_LITERAL(256, 29), // "on_actionContact_Us_triggered"
QT_MOC_LITERAL(286, 25), // "on_actionLogout_triggered"
QT_MOC_LITERAL(312, 23), // "on_actionExit_triggered"
QT_MOC_LITERAL(336, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(358, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(382, 24), // "on_actionLogin_triggered"
QT_MOC_LITERAL(407, 21), // "on_moveButton_clicked"
QT_MOC_LITERAL(429, 10), // "selectLine"
QT_MOC_LITERAL(440, 12) // "changedShape"

    },
    "MainWindow\0on_actionSave_All_triggered\0"
    "\0on_actionLoad_triggered\0"
    "on_actionText_triggered\0on_actionLine_triggered\0"
    "on_actionRectangle_triggered\0"
    "on_actionElipse_triggered\0"
    "on_actionPolygon_triggered\0"
    "on_actionPolyline_triggered\0"
    "on_actionSelected_Shape_triggered\0"
    "on_actionContact_Us_triggered\0"
    "on_actionLogout_triggered\0"
    "on_actionExit_triggered\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0"
    "on_actionLogin_triggered\0on_moveButton_clicked\0"
    "selectLine\0changedShape"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  122,    2, 0x08,    1 /* Private */,
       3,    0,  123,    2, 0x08,    2 /* Private */,
       4,    0,  124,    2, 0x08,    3 /* Private */,
       5,    0,  125,    2, 0x08,    4 /* Private */,
       6,    0,  126,    2, 0x08,    5 /* Private */,
       7,    0,  127,    2, 0x08,    6 /* Private */,
       8,    0,  128,    2, 0x08,    7 /* Private */,
       9,    0,  129,    2, 0x08,    8 /* Private */,
      10,    0,  130,    2, 0x08,    9 /* Private */,
      11,    0,  131,    2, 0x08,   10 /* Private */,
      12,    0,  132,    2, 0x08,   11 /* Private */,
      13,    0,  133,    2, 0x08,   12 /* Private */,
      14,    0,  134,    2, 0x08,   13 /* Private */,
      15,    0,  135,    2, 0x08,   14 /* Private */,
      16,    0,  136,    2, 0x08,   15 /* Private */,
      17,    0,  137,    2, 0x08,   16 /* Private */,
      18,    0,  138,    2, 0x08,   17 /* Private */,
      19,    0,  139,    2, 0x08,   18 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->on_actionSave_All_triggered(); break;
        case 1: _t->on_actionLoad_triggered(); break;
        case 2: _t->on_actionText_triggered(); break;
        case 3: _t->on_actionLine_triggered(); break;
        case 4: _t->on_actionRectangle_triggered(); break;
        case 5: _t->on_actionElipse_triggered(); break;
        case 6: _t->on_actionPolygon_triggered(); break;
        case 7: _t->on_actionPolyline_triggered(); break;
        case 8: _t->on_actionSelected_Shape_triggered(); break;
        case 9: _t->on_actionContact_Us_triggered(); break;
        case 10: _t->on_actionLogout_triggered(); break;
        case 11: _t->on_actionExit_triggered(); break;
        case 12: _t->on_pushButton_clicked(); break;
        case 13: _t->on_pushButton_2_clicked(); break;
        case 14: _t->on_actionLogin_triggered(); break;
        case 15: _t->on_moveButton_clicked(); break;
        case 16: _t->selectLine(); break;
        case 17: _t->changedShape(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
