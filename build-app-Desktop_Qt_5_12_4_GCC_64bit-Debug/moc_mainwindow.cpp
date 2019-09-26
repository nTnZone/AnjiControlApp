/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoatSpeed_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoatSpeed_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoatSpeed_t qt_meta_stringdata_BoatSpeed = {
    {
QT_MOC_LITERAL(0, 0, 9) // "BoatSpeed"

    },
    "BoatSpeed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoatSpeed[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void BoatSpeed::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BoatSpeed::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BoatSpeed.data,
    qt_meta_data_BoatSpeed,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoatSpeed::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoatSpeed::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoatSpeed.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BoatSpeed::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PointXY_t {
    QByteArrayData data[10];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PointXY_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PointXY_t qt_meta_stringdata_PointXY = {
    {
QT_MOC_LITERAL(0, 0, 7), // "PointXY"
QT_MOC_LITERAL(1, 8, 16), // "mapCenterChanged"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "longi"
QT_MOC_LITERAL(4, 32, 4), // "lati"
QT_MOC_LITERAL(5, 37, 12), // "saveMapPoint"
QT_MOC_LITERAL(6, 50, 6), // "longti"
QT_MOC_LITERAL(7, 57, 12), // "setMapCenter"
QT_MOC_LITERAL(8, 70, 5), // "data1"
QT_MOC_LITERAL(9, 76, 5) // "data2"

    },
    "PointXY\0mapCenterChanged\0\0longi\0lati\0"
    "saveMapPoint\0longti\0setMapCenter\0data1\0"
    "data2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointXY[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   34,    2, 0x0a /* Public */,
       7,    2,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    8,    9,

       0        // eod
};

void PointXY::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointXY *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapCenterChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->saveMapPoint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->setMapCenter((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PointXY::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointXY::mapCenterChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PointXY::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_PointXY.data,
    qt_meta_data_PointXY,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PointXY::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PointXY::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PointXY.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PointXY::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PointXY::mapCenterChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_showDataButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "on_autoButton_clicked"
QT_MOC_LITERAL(4, 60, 31), // "on_rspeedBox_currentTextChanged"
QT_MOC_LITERAL(5, 92, 4), // "arg1"
QT_MOC_LITERAL(6, 97, 17), // "on_remark_clicked"
QT_MOC_LITERAL(7, 115, 31), // "on_fspeedBox_currentTextChanged"
QT_MOC_LITERAL(8, 147, 23), // "on_manualButton_clicked"
QT_MOC_LITERAL(9, 171, 22), // "on_rightButton_clicked"
QT_MOC_LITERAL(10, 194, 21), // "on_disuButton_clicked"
QT_MOC_LITERAL(11, 216, 23), // "on_stableButton_clicked"
QT_MOC_LITERAL(12, 240, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(13, 260, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(14, 283, 15), // "on_test_clicked"
QT_MOC_LITERAL(15, 299, 12), // "uav_gps_show"
QT_MOC_LITERAL(16, 312, 1), // "x"
QT_MOC_LITERAL(17, 314, 1), // "y"
QT_MOC_LITERAL(18, 316, 20), // "on_confirm_1_clicked"
QT_MOC_LITERAL(19, 337, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(20, 359, 27), // "on_thrusterpowerset_clicked"
QT_MOC_LITERAL(21, 387, 24) // "on_thrusterpower_clicked"

    },
    "MainWindow\0on_showDataButton_clicked\0"
    "\0on_autoButton_clicked\0"
    "on_rspeedBox_currentTextChanged\0arg1\0"
    "on_remark_clicked\0on_fspeedBox_currentTextChanged\0"
    "on_manualButton_clicked\0on_rightButton_clicked\0"
    "on_disuButton_clicked\0on_stableButton_clicked\0"
    "on_upButton_clicked\0on_startButton_clicked\0"
    "on_test_clicked\0uav_gps_show\0x\0y\0"
    "on_confirm_1_clicked\0on_stopButton_clicked\0"
    "on_thrusterpowerset_clicked\0"
    "on_thrusterpower_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    1,  101,    2, 0x08 /* Private */,
       6,    0,  104,    2, 0x08 /* Private */,
       7,    1,  105,    2, 0x08 /* Private */,
       8,    0,  108,    2, 0x08 /* Private */,
       9,    0,  109,    2, 0x08 /* Private */,
      10,    0,  110,    2, 0x08 /* Private */,
      11,    0,  111,    2, 0x08 /* Private */,
      12,    0,  112,    2, 0x08 /* Private */,
      13,    0,  113,    2, 0x08 /* Private */,
      14,    0,  114,    2, 0x08 /* Private */,
      15,    2,  115,    2, 0x08 /* Private */,
      18,    0,  120,    2, 0x08 /* Private */,
      19,    0,  121,    2, 0x08 /* Private */,
      20,    0,  122,    2, 0x08 /* Private */,
      21,    0,  123,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   16,   17,
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
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_showDataButton_clicked(); break;
        case 1: _t->on_autoButton_clicked(); break;
        case 2: _t->on_rspeedBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_remark_clicked(); break;
        case 4: _t->on_fspeedBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_manualButton_clicked(); break;
        case 6: _t->on_rightButton_clicked(); break;
        case 7: _t->on_disuButton_clicked(); break;
        case 8: _t->on_stableButton_clicked(); break;
        case 9: _t->on_upButton_clicked(); break;
        case 10: _t->on_startButton_clicked(); break;
        case 11: _t->on_test_clicked(); break;
        case 12: _t->uav_gps_show((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->on_confirm_1_clicked(); break;
        case 14: _t->on_stopButton_clicked(); break;
        case 15: _t->on_thrusterpowerset_clicked(); break;
        case 16: _t->on_thrusterpower_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
