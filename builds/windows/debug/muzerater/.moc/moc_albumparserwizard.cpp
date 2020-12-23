/****************************************************************************
** Meta object code from reading C++ file 'albumparserwizard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../projects/muzerater/source/views/albumparserwizard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'albumparserwizard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AlbumParserWizard_t {
    QByteArrayData data[6];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserWizard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserWizard_t qt_meta_stringdata_AlbumParserWizard = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AlbumParserWizard"
QT_MOC_LITERAL(1, 18, 20), // "processDataRequested"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 21), // "saveSettingsRequested"
QT_MOC_LITERAL(4, 62, 17), // "handlePageChanged"
QT_MOC_LITERAL(5, 80, 2) // "id"

    },
    "AlbumParserWizard\0processDataRequested\0"
    "\0saveSettingsRequested\0handlePageChanged\0"
    "id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserWizard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void AlbumParserWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserWizard *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processDataRequested(); break;
        case 1: _t->saveSettingsRequested(); break;
        case 2: _t->handlePageChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumParserWizard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumParserWizard::processDataRequested)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AlbumParserWizard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumParserWizard::saveSettingsRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserWizard.data,
    qt_meta_data_AlbumParserWizard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserWizard.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int AlbumParserWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
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
void AlbumParserWizard::processDataRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AlbumParserWizard::saveSettingsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
struct qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage_t {
    QByteArrayData data[1];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage_t qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 35) // "AlbumParserSelectDatabaseWiza..."

    },
    "AlbumParserSelectDatabaseWizardPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserSelectDatabaseWizardPage[] = {

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

void AlbumParserSelectDatabaseWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserSelectDatabaseWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage.data,
    qt_meta_data_AlbumParserSelectDatabaseWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserSelectDatabaseWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserSelectDatabaseWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserSelectDatabaseWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserSelectDatabaseWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AlbumParserITunesWizardPage_t {
    QByteArrayData data[4];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserITunesWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserITunesWizardPage_t qt_meta_stringdata_AlbumParserITunesWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 27), // "AlbumParserITunesWizardPage"
QT_MOC_LITERAL(1, 28, 21), // "handleInFileSelection"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 15) // "getCustomInFile"

    },
    "AlbumParserITunesWizardPage\0"
    "handleInFileSelection\0\0getCustomInFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserITunesWizardPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlbumParserITunesWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserITunesWizardPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleInFileSelection(); break;
        case 1: _t->getCustomInFile(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserITunesWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserITunesWizardPage.data,
    qt_meta_data_AlbumParserITunesWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserITunesWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserITunesWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserITunesWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserITunesWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_AlbumParserFoobar2000WizardPage_t {
    QByteArrayData data[1];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserFoobar2000WizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserFoobar2000WizardPage_t qt_meta_stringdata_AlbumParserFoobar2000WizardPage = {
    {
QT_MOC_LITERAL(0, 0, 31) // "AlbumParserFoobar2000WizardPage"

    },
    "AlbumParserFoobar2000WizardPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserFoobar2000WizardPage[] = {

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

void AlbumParserFoobar2000WizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserFoobar2000WizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserFoobar2000WizardPage.data,
    qt_meta_data_AlbumParserFoobar2000WizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserFoobar2000WizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserFoobar2000WizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserFoobar2000WizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserFoobar2000WizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage_t {
    QByteArrayData data[5];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage_t qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 36), // "AlbumParserSelectOutFormatWiz..."
QT_MOC_LITERAL(1, 37, 10), // "getOutFile"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 24), // "handleOutFormatSelection"
QT_MOC_LITERAL(4, 74, 24) // "handleOutSaveFileChanged"

    },
    "AlbumParserSelectOutFormatWizardPage\0"
    "getOutFile\0\0handleOutFormatSelection\0"
    "handleOutSaveFileChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserSelectOutFormatWizardPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    0,   30,    2, 0x08 /* Private */,
       4,    0,   31,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlbumParserSelectOutFormatWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserSelectOutFormatWizardPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getOutFile(); break;
        case 1: _t->handleOutFormatSelection(); break;
        case 2: _t->handleOutSaveFileChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserSelectOutFormatWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage.data,
    qt_meta_data_AlbumParserSelectOutFormatWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserSelectOutFormatWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserSelectOutFormatWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserSelectOutFormatWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserSelectOutFormatWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_AlbumParserFilterByRatedWizardPage_t {
    QByteArrayData data[9];
    char stringdata0[241];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserFilterByRatedWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserFilterByRatedWizardPage_t qt_meta_stringdata_AlbumParserFilterByRatedWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 34), // "AlbumParserFilterByRatedWizar..."
QT_MOC_LITERAL(1, 35, 20), // "albumRatingFilterSet"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 20), // "minRatedTracksFilter"
QT_MOC_LITERAL(4, 78, 20), // "maxRatedTracksFilter"
QT_MOC_LITERAL(5, 99, 36), // "handleHasMinRatedTracksFilter..."
QT_MOC_LITERAL(6, 136, 36), // "handleHasMaxRatedTracksFilter..."
QT_MOC_LITERAL(7, 173, 33), // "handleMinRatedTracksFilterCha..."
QT_MOC_LITERAL(8, 207, 33) // "handleMaxRatedTracksFilterCha..."

    },
    "AlbumParserFilterByRatedWizardPage\0"
    "albumRatingFilterSet\0\0minRatedTracksFilter\0"
    "maxRatedTracksFilter\0"
    "handleHasMinRatedTracksFilterChecked\0"
    "handleHasMaxRatedTracksFilterChecked\0"
    "handleMinRatedTracksFilterChanged\0"
    "handleMaxRatedTracksFilterChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserFilterByRatedWizardPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlbumParserFilterByRatedWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserFilterByRatedWizardPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->albumRatingFilterSet((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->handleHasMinRatedTracksFilterChecked(); break;
        case 2: _t->handleHasMaxRatedTracksFilterChecked(); break;
        case 3: _t->handleMinRatedTracksFilterChanged(); break;
        case 4: _t->handleMaxRatedTracksFilterChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumParserFilterByRatedWizardPage::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumParserFilterByRatedWizardPage::albumRatingFilterSet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserFilterByRatedWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserFilterByRatedWizardPage.data,
    qt_meta_data_AlbumParserFilterByRatedWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserFilterByRatedWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserFilterByRatedWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserFilterByRatedWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserFilterByRatedWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
void AlbumParserFilterByRatedWizardPage::albumRatingFilterSet(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_AlbumParserSummaryWizardPage_t {
    QByteArrayData data[1];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserSummaryWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserSummaryWizardPage_t qt_meta_stringdata_AlbumParserSummaryWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 28) // "AlbumParserSummaryWizardPage"

    },
    "AlbumParserSummaryWizardPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserSummaryWizardPage[] = {

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

void AlbumParserSummaryWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserSummaryWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserSummaryWizardPage.data,
    qt_meta_data_AlbumParserSummaryWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserSummaryWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserSummaryWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserSummaryWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserSummaryWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_AlbumParserProcessWizardPage_t {
    QByteArrayData data[3];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserProcessWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserProcessWizardPage_t qt_meta_stringdata_AlbumParserProcessWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 28), // "AlbumParserProcessWizardPage"
QT_MOC_LITERAL(1, 29, 20), // "processDataRequested"
QT_MOC_LITERAL(2, 50, 0) // ""

    },
    "AlbumParserProcessWizardPage\0"
    "processDataRequested\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserProcessWizardPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void AlbumParserProcessWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserProcessWizardPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processDataRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AlbumParserProcessWizardPage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AlbumParserProcessWizardPage::processDataRequested)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserProcessWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserProcessWizardPage.data,
    qt_meta_data_AlbumParserProcessWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserProcessWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserProcessWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserProcessWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserProcessWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void AlbumParserProcessWizardPage::processDataRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_AlbumParserLastWizardPage_t {
    QByteArrayData data[4];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AlbumParserLastWizardPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AlbumParserLastWizardPage_t qt_meta_stringdata_AlbumParserLastWizardPage = {
    {
QT_MOC_LITERAL(0, 0, 25), // "AlbumParserLastWizardPage"
QT_MOC_LITERAL(1, 26, 6), // "launch"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 10) // "showFolder"

    },
    "AlbumParserLastWizardPage\0launch\0\0"
    "showFolder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AlbumParserLastWizardPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AlbumParserLastWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AlbumParserLastWizardPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->launch(); break;
        case 1: _t->showFolder(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AlbumParserLastWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_AlbumParserLastWizardPage.data,
    qt_meta_data_AlbumParserLastWizardPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AlbumParserLastWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AlbumParserLastWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AlbumParserLastWizardPage.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int AlbumParserLastWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
