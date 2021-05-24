/****************************************************************************
** Meta object code from reading C++ file 'kommi_main.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Kommivoyajer_main/kommi_main.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kommi_main.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_kommi_main_t {
    QByteArrayData data[23];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_kommi_main_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_kommi_main_t qt_meta_stringdata_kommi_main = {
    {
QT_MOC_LITERAL(0, 0, 10), // "kommi_main"
QT_MOC_LITERAL(1, 11, 22), // "on_pushButton_released"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "read_table"
QT_MOC_LITERAL(4, 46, 5), // "Kommi"
QT_MOC_LITERAL(5, 52, 14), // "reduction_rows"
QT_MOC_LITERAL(6, 67, 14), // "reduction_cols"
QT_MOC_LITERAL(7, 82, 10), // "find_marks"
QT_MOC_LITERAL(8, 93, 16), // "calculating_mark"
QT_MOC_LITERAL(9, 110, 12), // "include_path"
QT_MOC_LITERAL(10, 123, 13), // "mark_for_zero"
QT_MOC_LITERAL(11, 137, 3), // "itm"
QT_MOC_LITERAL(12, 141, 10), // "result_way"
QT_MOC_LITERAL(13, 152, 12), // "print_vector"
QT_MOC_LITERAL(14, 165, 22), // "QVector<QVector<int> >"
QT_MOC_LITERAL(15, 188, 5), // "other"
QT_MOC_LITERAL(16, 194, 9), // "print_way"
QT_MOC_LITERAL(17, 204, 8), // "DrawTops"
QT_MOC_LITERAL(18, 213, 15), // "QGraphicsScene*"
QT_MOC_LITERAL(19, 229, 5), // "scene"
QT_MOC_LITERAL(20, 235, 11), // "way_from_to"
QT_MOC_LITERAL(21, 247, 9), // "DrawLines"
QT_MOC_LITERAL(22, 257, 8) // "way_line"

    },
    "kommi_main\0on_pushButton_released\0\0"
    "read_table\0Kommi\0reduction_rows\0"
    "reduction_cols\0find_marks\0calculating_mark\0"
    "include_path\0mark_for_zero\0itm\0"
    "result_way\0print_vector\0QVector<QVector<int> >\0"
    "other\0print_way\0DrawTops\0QGraphicsScene*\0"
    "scene\0way_from_to\0DrawLines\0way_line"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_kommi_main[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    2,   95,    2, 0x08 /* Private */,
       9,    1,  100,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    1,  108,    2, 0x08 /* Private */,
      20,    2,  111,    2, 0x08 /* Private */,
      21,    1,  116,    2, 0x08 /* Private */,
      22,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Int, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,

       0        // eod
};

void kommi_main::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<kommi_main *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_released(); break;
        case 1: _t->read_table(); break;
        case 2: _t->Kommi(); break;
        case 3: _t->reduction_rows(); break;
        case 4: _t->reduction_cols(); break;
        case 5: _t->find_marks(); break;
        case 6: { int _r = _t->calculating_mark((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->include_path((*reinterpret_cast< mark_for_zero(*)>(_a[1]))); break;
        case 8: _t->result_way(); break;
        case 9: _t->print_vector((*reinterpret_cast< QVector<QVector<int> >(*)>(_a[1]))); break;
        case 10: _t->print_way(); break;
        case 11: _t->DrawTops((*reinterpret_cast< QGraphicsScene*(*)>(_a[1]))); break;
        case 12: { int _r = _t->way_from_to((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->DrawLines((*reinterpret_cast< QGraphicsScene*(*)>(_a[1]))); break;
        case 14: _t->way_line(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<int> > >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsScene* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGraphicsScene* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject kommi_main::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_kommi_main.data,
    qt_meta_data_kommi_main,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *kommi_main::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *kommi_main::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_kommi_main.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int kommi_main::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
