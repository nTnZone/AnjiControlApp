/****************************************************************************
** Meta object code from reading C++ file 'gamepadoperator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../app/gamepadoperator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamepadoperator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GamePadOperator_t {
    QByteArrayData data[15];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamePadOperator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamePadOperator_t qt_meta_stringdata_GamePadOperator = {
    {
QT_MOC_LITERAL(0, 0, 15), // "GamePadOperator"
QT_MOC_LITERAL(1, 16, 10), // "serialsend"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 12), // "speedchanged"
QT_MOC_LITERAL(5, 46, 1), // "a"
QT_MOC_LITERAL(6, 48, 15), // "UpButtonClicked"
QT_MOC_LITERAL(7, 64, 5), // "value"
QT_MOC_LITERAL(8, 70, 17), // "DownButtonClicked"
QT_MOC_LITERAL(9, 88, 17), // "LeftButtonClicked"
QT_MOC_LITERAL(10, 106, 18), // "RightButtonClicked"
QT_MOC_LITERAL(11, 125, 20), // "LevelUpButtonClicked"
QT_MOC_LITERAL(12, 146, 22), // "LevelDownButtonClicked"
QT_MOC_LITERAL(13, 169, 14), // "fspededchanged"
QT_MOC_LITERAL(14, 184, 1) // "i"

    },
    "GamePadOperator\0serialsend\0\0data\0"
    "speedchanged\0a\0UpButtonClicked\0value\0"
    "DownButtonClicked\0LeftButtonClicked\0"
    "RightButtonClicked\0LevelUpButtonClicked\0"
    "LevelDownButtonClicked\0fspededchanged\0"
    "i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePadOperator[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   65,    2, 0x0a /* Public */,
       8,    1,   68,    2, 0x0a /* Public */,
       9,    1,   71,    2, 0x0a /* Public */,
      10,    1,   74,    2, 0x0a /* Public */,
      11,    1,   77,    2, 0x0a /* Public */,
      12,    1,   80,    2, 0x0a /* Public */,
      13,    1,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void GamePadOperator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePadOperator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serialsend((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->speedchanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->UpButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->DownButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->LeftButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->RightButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->LevelUpButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->LevelDownButtonClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->fspededchanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GamePadOperator::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamePadOperator::serialsend)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GamePadOperator::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamePadOperator::speedchanged)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GamePadOperator::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_GamePadOperator.data,
    qt_meta_data_GamePadOperator,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamePadOperator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePadOperator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePadOperator.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GamePadOperator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void GamePadOperator::serialsend(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GamePadOperator::speedchanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
