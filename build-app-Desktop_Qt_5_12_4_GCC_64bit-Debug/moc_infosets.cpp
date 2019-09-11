/****************************************************************************
** Meta object code from reading C++ file 'infosets.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/infosets.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'infosets.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InfoSets_t {
    QByteArrayData data[11];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InfoSets_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InfoSets_t qt_meta_stringdata_InfoSets = {
    {
QT_MOC_LITERAL(0, 0, 8), // "InfoSets"
QT_MOC_LITERAL(1, 9, 6), // "uavGps"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 5), // "gps_x"
QT_MOC_LITERAL(4, 23, 5), // "gps_y"
QT_MOC_LITERAL(5, 29, 7), // "boatGps"
QT_MOC_LITERAL(6, 37, 9), // "boatSpeed"
QT_MOC_LITERAL(7, 47, 1), // "s"
QT_MOC_LITERAL(8, 49, 16), // "modeChangeForMap"
QT_MOC_LITERAL(9, 66, 4), // "mode"
QT_MOC_LITERAL(10, 71, 7) // "sendGps"

    },
    "InfoSets\0uavGps\0\0gps_x\0gps_y\0boatGps\0"
    "boatSpeed\0s\0modeChangeForMap\0mode\0"
    "sendGps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InfoSets[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       6,    1,   49,    2, 0x06 /* Public */,
       8,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    4,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void InfoSets::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InfoSets *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uavGps((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 1: _t->boatGps((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->boatSpeed((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->modeChangeForMap((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->sendGps(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InfoSets::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InfoSets::uavGps)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InfoSets::*)(double , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InfoSets::boatGps)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InfoSets::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InfoSets::boatSpeed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InfoSets::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InfoSets::modeChangeForMap)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InfoSets::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_InfoSets.data,
    qt_meta_data_InfoSets,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InfoSets::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InfoSets::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InfoSets.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int InfoSets::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void InfoSets::uavGps(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InfoSets::boatGps(double _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InfoSets::boatSpeed(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InfoSets::modeChangeForMap(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
