/****************************************************************************
** Meta object code from reading C++ file 'view.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../source/projects/muzerater/source/views/view.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'view.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    QByteArrayData data[18];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 0, 4), // "View"
QT_MOC_LITERAL(1, 5, 25), // "createHTMLReportRequested"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "processDataRequested"
QT_MOC_LITERAL(4, 53, 19), // "databaseTypeChanged"
QT_MOC_LITERAL(5, 73, 20), // "iTunesLibraryChanged"
QT_MOC_LITERAL(6, 94, 35), // "browseIIunesCustomFilePathReq..."
QT_MOC_LITERAL(7, 130, 33), // "foobar2000ClipboardCheckedCha..."
QT_MOC_LITERAL(8, 164, 17), // "outputTypeChanged"
QT_MOC_LITERAL(9, 182, 27), // "outputSaveAsFilePathChanged"
QT_MOC_LITERAL(10, 210, 35), // "browseOutputSaveAsFilePathReq..."
QT_MOC_LITERAL(11, 246, 15), // "outputCompleted"
QT_MOC_LITERAL(12, 262, 27), // "minRatedTracksFilterChanged"
QT_MOC_LITERAL(13, 290, 27), // "maxRatedTracksFilterChanged"
QT_MOC_LITERAL(14, 318, 30), // "hasMaxRatedTracksFilterChanged"
QT_MOC_LITERAL(15, 349, 25), // "launchOutputFileRequested"
QT_MOC_LITERAL(16, 375, 25), // "showOutputFolderRequested"
QT_MOC_LITERAL(17, 401, 13) // "helpRequested"

    },
    "View\0createHTMLReportRequested\0\0"
    "processDataRequested\0databaseTypeChanged\0"
    "iTunesLibraryChanged\0"
    "browseIIunesCustomFilePathRequested\0"
    "foobar2000ClipboardCheckedChanged\0"
    "outputTypeChanged\0outputSaveAsFilePathChanged\0"
    "browseOutputSaveAsFilePathRequested\0"
    "outputCompleted\0minRatedTracksFilterChanged\0"
    "maxRatedTracksFilterChanged\0"
    "hasMaxRatedTracksFilterChanged\0"
    "launchOutputFileRequested\0"
    "showOutputFolderRequested\0helpRequested"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    0,   96,    2, 0x06 /* Public */,
       5,    0,   97,    2, 0x06 /* Public */,
       6,    0,   98,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,
       9,    0,  101,    2, 0x06 /* Public */,
      10,    0,  102,    2, 0x06 /* Public */,
      11,    0,  103,    2, 0x06 /* Public */,
      12,    0,  104,    2, 0x06 /* Public */,
      13,    0,  105,    2, 0x06 /* Public */,
      14,    0,  106,    2, 0x06 /* Public */,
      15,    0,  107,    2, 0x06 /* Public */,
      16,    0,  108,    2, 0x06 /* Public */,
      17,    0,  109,    2, 0x06 /* Public */,

 // signals: parameters
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

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createHTMLReportRequested(); break;
        case 1: _t->processDataRequested(); break;
        case 2: _t->databaseTypeChanged(); break;
        case 3: _t->iTunesLibraryChanged(); break;
        case 4: _t->browseIIunesCustomFilePathRequested(); break;
        case 5: _t->foobar2000ClipboardCheckedChanged(); break;
        case 6: _t->outputTypeChanged(); break;
        case 7: _t->outputSaveAsFilePathChanged(); break;
        case 8: _t->browseOutputSaveAsFilePathRequested(); break;
        case 9: _t->outputCompleted(); break;
        case 10: _t->minRatedTracksFilterChanged(); break;
        case 11: _t->maxRatedTracksFilterChanged(); break;
        case 12: _t->hasMaxRatedTracksFilterChanged(); break;
        case 13: _t->launchOutputFileRequested(); break;
        case 14: _t->showOutputFolderRequested(); break;
        case 15: _t->helpRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::createHTMLReportRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::processDataRequested)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::databaseTypeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::iTunesLibraryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::browseIIunesCustomFilePathRequested)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::foobar2000ClipboardCheckedChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::outputTypeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::outputSaveAsFilePathChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::browseOutputSaveAsFilePathRequested)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::outputCompleted)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::minRatedTracksFilterChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::maxRatedTracksFilterChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::hasMaxRatedTracksFilterChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::launchOutputFileRequested)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::showOutputFolderRequested)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::helpRequested)) {
                *result = 15;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject View::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_View.data,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void View::createHTMLReportRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void View::processDataRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void View::databaseTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void View::iTunesLibraryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void View::browseIIunesCustomFilePathRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void View::foobar2000ClipboardCheckedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void View::outputTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void View::outputSaveAsFilePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void View::browseOutputSaveAsFilePathRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void View::outputCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void View::minRatedTracksFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void View::maxRatedTracksFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void View::hasMaxRatedTracksFilterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void View::launchOutputFileRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void View::showOutputFolderRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void View::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
