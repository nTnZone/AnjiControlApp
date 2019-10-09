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
    QByteArrayData data[12];
    char stringdata0[109];
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
QT_MOC_LITERAL(5, 37, 14), // "BoatGPSChanged"
QT_MOC_LITERAL(6, 52, 11), // "AddObstacle"
QT_MOC_LITERAL(7, 64, 12), // "saveMapPoint"
QT_MOC_LITERAL(8, 77, 6), // "longti"
QT_MOC_LITERAL(9, 84, 12), // "setMapCenter"
QT_MOC_LITERAL(10, 97, 5), // "data1"
QT_MOC_LITERAL(11, 103, 5) // "data2"

    },
    "PointXY\0mapCenterChanged\0\0longi\0lati\0"
    "BoatGPSChanged\0AddObstacle\0saveMapPoint\0"
    "longti\0setMapCenter\0data1\0data2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PointXY[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    2,   54,    2, 0x0a /* Public */,
       9,    2,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   10,   11,

       0        // eod
};

void PointXY::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PointXY *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapCenterChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->BoatGPSChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->AddObstacle((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 3: _t->saveMapPoint((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->setMapCenter((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
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
        {
            using _t = void (PointXY::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointXY::BoatGPSChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PointXY::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PointXY::AddObstacle)) {
                *result = 2;
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
void PointXY::mapCenterChanged(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PointXY::BoatGPSChanged(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PointXY::AddObstacle(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[38];
    char stringdata0[556];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 12), // "IndexChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 1), // "i"
QT_MOC_LITERAL(4, 27, 25), // "on_showDataButton_clicked"
QT_MOC_LITERAL(5, 53, 21), // "on_autoButton_clicked"
QT_MOC_LITERAL(6, 75, 17), // "on_remark_clicked"
QT_MOC_LITERAL(7, 93, 31), // "on_fspeedBox_currentTextChanged"
QT_MOC_LITERAL(8, 125, 4), // "arg1"
QT_MOC_LITERAL(9, 130, 23), // "on_manualButton_clicked"
QT_MOC_LITERAL(10, 154, 22), // "on_rightButton_clicked"
QT_MOC_LITERAL(11, 177, 21), // "on_disuButton_clicked"
QT_MOC_LITERAL(12, 199, 23), // "on_stableButton_clicked"
QT_MOC_LITERAL(13, 223, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(14, 243, 22), // "on_startButton_clicked"
QT_MOC_LITERAL(15, 266, 15), // "on_test_clicked"
QT_MOC_LITERAL(16, 282, 12), // "uav_gps_show"
QT_MOC_LITERAL(17, 295, 1), // "x"
QT_MOC_LITERAL(18, 297, 1), // "y"
QT_MOC_LITERAL(19, 299, 20), // "on_confirm_1_clicked"
QT_MOC_LITERAL(20, 320, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(21, 342, 24), // "on_thrusterpower_clicked"
QT_MOC_LITERAL(22, 367, 17), // "DisplaySerialData"
QT_MOC_LITERAL(23, 385, 4), // "data"
QT_MOC_LITERAL(24, 390, 17), // "Handle_serialData"
QT_MOC_LITERAL(25, 408, 21), // "on_SerialSend_clicked"
QT_MOC_LITERAL(26, 430, 17), // "GampPadSerialSend"
QT_MOC_LITERAL(27, 448, 9), // "SynLonLat"
QT_MOC_LITERAL(28, 458, 3), // "lon"
QT_MOC_LITERAL(29, 462, 3), // "lat"
QT_MOC_LITERAL(30, 466, 12), // "SynLonLatDir"
QT_MOC_LITERAL(31, 479, 3), // "dir"
QT_MOC_LITERAL(32, 483, 14), // "Decode_AUVinfo"
QT_MOC_LITERAL(33, 498, 5), // "char*"
QT_MOC_LITERAL(34, 504, 16), // "changeSpeedIndex"
QT_MOC_LITERAL(35, 521, 1), // "a"
QT_MOC_LITERAL(36, 523, 24), // "on_auvautoButton_toggled"
QT_MOC_LITERAL(37, 548, 7) // "checked"

    },
    "MainWindow\0IndexChanged\0\0i\0"
    "on_showDataButton_clicked\0"
    "on_autoButton_clicked\0on_remark_clicked\0"
    "on_fspeedBox_currentTextChanged\0arg1\0"
    "on_manualButton_clicked\0on_rightButton_clicked\0"
    "on_disuButton_clicked\0on_stableButton_clicked\0"
    "on_upButton_clicked\0on_startButton_clicked\0"
    "on_test_clicked\0uav_gps_show\0x\0y\0"
    "on_confirm_1_clicked\0on_stopButton_clicked\0"
    "on_thrusterpower_clicked\0DisplaySerialData\0"
    "data\0Handle_serialData\0on_SerialSend_clicked\0"
    "GampPadSerialSend\0SynLonLat\0lon\0lat\0"
    "SynLonLatDir\0dir\0Decode_AUVinfo\0char*\0"
    "changeSpeedIndex\0a\0on_auvautoButton_toggled\0"
    "checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  139,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,  142,    2, 0x08 /* Private */,
       5,    0,  143,    2, 0x08 /* Private */,
       6,    0,  144,    2, 0x08 /* Private */,
       7,    1,  145,    2, 0x08 /* Private */,
       9,    0,  148,    2, 0x08 /* Private */,
      10,    0,  149,    2, 0x08 /* Private */,
      11,    0,  150,    2, 0x08 /* Private */,
      12,    0,  151,    2, 0x08 /* Private */,
      13,    0,  152,    2, 0x08 /* Private */,
      14,    0,  153,    2, 0x08 /* Private */,
      15,    0,  154,    2, 0x08 /* Private */,
      16,    2,  155,    2, 0x08 /* Private */,
      19,    0,  160,    2, 0x08 /* Private */,
      20,    0,  161,    2, 0x08 /* Private */,
      21,    0,  162,    2, 0x08 /* Private */,
      22,    1,  163,    2, 0x08 /* Private */,
      24,    1,  166,    2, 0x08 /* Private */,
      25,    0,  169,    2, 0x08 /* Private */,
      26,    1,  170,    2, 0x08 /* Private */,
      27,    2,  173,    2, 0x08 /* Private */,
      30,    3,  178,    2, 0x08 /* Private */,
      32,    1,  185,    2, 0x08 /* Private */,
      34,    1,  188,    2, 0x08 /* Private */,
      36,    1,  191,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   17,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::QByteArray, QMetaType::Double, QMetaType::Double,   28,   29,
    QMetaType::QByteArray, QMetaType::Double, QMetaType::Double, QMetaType::Double,   28,   29,   31,
    QMetaType::Void, 0x80000000 | 33,   23,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Bool,   37,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->IndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_showDataButton_clicked(); break;
        case 2: _t->on_autoButton_clicked(); break;
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
        case 15: _t->on_thrusterpower_clicked(); break;
        case 16: _t->DisplaySerialData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 17: _t->Handle_serialData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->on_SerialSend_clicked(); break;
        case 19: _t->GampPadSerialSend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 20: { QByteArray _r = _t->SynLonLat((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 21: { QByteArray _r = _t->SynLonLatDir((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->Decode_AUVinfo((*reinterpret_cast< char*(*)>(_a[1]))); break;
        case 23: _t->changeSpeedIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_auvautoButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::IndexChanged)) {
                *result = 0;
                return;
            }
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
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::IndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
