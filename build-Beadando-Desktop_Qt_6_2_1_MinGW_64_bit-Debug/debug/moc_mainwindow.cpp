/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Beadando/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[34];
    char stringdata0[370];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 24), // "on_browse_Button_clicked"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 42), // "on_pic_destination_Cbox_curre..."
QT_MOC_LITERAL(80, 4), // "arg1"
QT_MOC_LITERAL(85, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(109, 22), // "on_largeButton_clicked"
QT_MOC_LITERAL(132, 21), // "on_saveButton_clicked"
QT_MOC_LITERAL(154, 20), // "on_addButton_clicked"
QT_MOC_LITERAL(175, 26), // "on_actionEnglish_triggered"
QT_MOC_LITERAL(202, 28), // "on_actionHungarian_triggered"
QT_MOC_LITERAL(231, 35), // "on_Image_customContextMenuReq..."
QT_MOC_LITERAL(267, 3), // "pos"
QT_MOC_LITERAL(271, 23), // "on_modifyButton_clicked"
QT_MOC_LITERAL(295, 25), // "on_deleteButton_2_clicked"
QT_MOC_LITERAL(321, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(345, 24) // "on_darkMode_stateChanged"

    },
    "MainWindow\0on_browse_Button_clicked\0"
    "\0on_pic_destination_Cbox_currentTextChanged\0"
    "arg1\0on_deleteButton_clicked\0"
    "on_largeButton_clicked\0on_saveButton_clicked\0"
    "on_addButton_clicked\0on_actionEnglish_triggered\0"
    "on_actionHungarian_triggered\0"
    "on_Image_customContextMenuRequested\0"
    "pos\0on_modifyButton_clicked\0"
    "on_deleteButton_2_clicked\0"
    "on_searchButton_clicked\0"
    "on_darkMode_stateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x08,    1 /* Private */,
       3,    1,   93,    2, 0x08,    2 /* Private */,
       5,    0,   96,    2, 0x08,    4 /* Private */,
       6,    0,   97,    2, 0x08,    5 /* Private */,
       7,    0,   98,    2, 0x08,    6 /* Private */,
       8,    0,   99,    2, 0x08,    7 /* Private */,
       9,    0,  100,    2, 0x08,    8 /* Private */,
      10,    0,  101,    2, 0x08,    9 /* Private */,
      11,    1,  102,    2, 0x08,   10 /* Private */,
      13,    0,  105,    2, 0x08,   12 /* Private */,
      14,    0,  106,    2, 0x08,   13 /* Private */,
      15,    0,  107,    2, 0x08,   14 /* Private */,
      16,    1,  108,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_browse_Button_clicked(); break;
        case 1: _t->on_pic_destination_Cbox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_deleteButton_clicked(); break;
        case 3: _t->on_largeButton_clicked(); break;
        case 4: _t->on_saveButton_clicked(); break;
        case 5: _t->on_addButton_clicked(); break;
        case 6: _t->on_actionEnglish_triggered(); break;
        case 7: _t->on_actionHungarian_triggered(); break;
        case 8: _t->on_Image_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: _t->on_modifyButton_clicked(); break;
        case 10: _t->on_deleteButton_2_clicked(); break;
        case 11: _t->on_searchButton_clicked(); break;
        case 12: _t->on_darkMode_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
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
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
