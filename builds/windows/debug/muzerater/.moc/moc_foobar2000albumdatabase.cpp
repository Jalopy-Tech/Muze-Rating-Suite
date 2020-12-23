/****************************************************************************
** Meta object code from reading C++ file 'foobar2000albumdatabase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../projects/muzerater/source/models/foobar2000albumdatabase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foobar2000albumdatabase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Foobar2000AlbumDatabase_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Foobar2000AlbumDatabase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Foobar2000AlbumDatabase_t qt_meta_stringdata_Foobar2000AlbumDatabase = {
    {
QT_MOC_LITERAL(0, 0, 23) // "Foobar2000AlbumDatabase"

    },
    "Foobar2000AlbumDatabase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Foobar2000AlbumDatabase[] = {

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

void Foobar2000AlbumDatabase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Foobar2000AlbumDatabase::staticMetaObject = { {
    QMetaObject::SuperData::link<AlbumDatabase::staticMetaObject>(),
    qt_meta_stringdata_Foobar2000AlbumDatabase.data,
    qt_meta_data_Foobar2000AlbumDatabase,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Foobar2000AlbumDatabase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Foobar2000AlbumDatabase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Foobar2000AlbumDatabase.stringdata0))
        return static_cast<void*>(this);
    return AlbumDatabase::qt_metacast(_clname);
}

int Foobar2000AlbumDatabase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AlbumDatabase::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
