/****************************************************************************
** Meta object code from reading C++ file 'soundprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../SoundProcess/soundprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoundProcess_t {
    QByteArrayData data[23];
    char stringdata0[386];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundProcess_t qt_meta_stringdata_SoundProcess = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SoundProcess"
QT_MOC_LITERAL(1, 13, 18), // "percentageComplete"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 29), // "on_pushButtonOpenFile_clicked"
QT_MOC_LITERAL(4, 63, 16), // "processSoundFile"
QT_MOC_LITERAL(5, 80, 8), // "filePath"
QT_MOC_LITERAL(6, 89, 11), // "processFile"
QT_MOC_LITERAL(7, 101, 7), // "plotRaw"
QT_MOC_LITERAL(8, 109, 13), // "plotProcessed"
QT_MOC_LITERAL(9, 123, 16), // "getWavWithHeader"
QT_MOC_LITERAL(10, 140, 5), // "array"
QT_MOC_LITERAL(11, 146, 10), // "sampleRate"
QT_MOC_LITERAL(12, 157, 9), // "saveToWav"
QT_MOC_LITERAL(13, 167, 13), // "generateArray"
QT_MOC_LITERAL(14, 181, 14), // "QVector<float>"
QT_MOC_LITERAL(15, 196, 11), // "leftChannel"
QT_MOC_LITERAL(16, 208, 12), // "rightChannel"
QT_MOC_LITERAL(17, 221, 10), // "saveToFile"
QT_MOC_LITERAL(18, 232, 8), // "filename"
QT_MOC_LITERAL(19, 241, 35), // "on_pushButtonSaveInitAsText_c..."
QT_MOC_LITERAL(20, 277, 32), // "on_pushButtonProcessFile_clicked"
QT_MOC_LITERAL(21, 310, 37), // "on_pushButtonSaveResultAsFile..."
QT_MOC_LITERAL(22, 348, 37) // "on_pushButtonSaveResultAsText..."

    },
    "SoundProcess\0percentageComplete\0\0"
    "on_pushButtonOpenFile_clicked\0"
    "processSoundFile\0filePath\0processFile\0"
    "plotRaw\0plotProcessed\0getWavWithHeader\0"
    "array\0sampleRate\0saveToWav\0generateArray\0"
    "QVector<float>\0leftChannel\0rightChannel\0"
    "saveToFile\0filename\0"
    "on_pushButtonSaveInitAsText_clicked\0"
    "on_pushButtonProcessFile_clicked\0"
    "on_pushButtonSaveResultAsFile_clicked\0"
    "on_pushButtonSaveResultAsText_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundProcess[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   87,    2, 0x08 /* Private */,
       4,    1,   88,    2, 0x08 /* Private */,
       6,    0,   91,    2, 0x08 /* Private */,
       7,    0,   92,    2, 0x08 /* Private */,
       8,    0,   93,    2, 0x08 /* Private */,
       9,    2,   94,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    2,  100,    2, 0x08 /* Private */,
      17,    3,  105,    2, 0x08 /* Private */,
      19,    0,  112,    2, 0x08 /* Private */,
      20,    0,  113,    2, 0x08 /* Private */,
      21,    0,  114,    2, 0x08 /* Private */,
      22,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QByteArray, QMetaType::QByteArray, QMetaType::UInt,   10,   11,
    QMetaType::Void,
    QMetaType::QByteArray, 0x80000000 | 14, 0x80000000 | 14,   15,   16,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14, QMetaType::QString,   15,   16,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SoundProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SoundProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->percentageComplete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButtonOpenFile_clicked(); break;
        case 2: _t->processSoundFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->processFile(); break;
        case 4: _t->plotRaw(); break;
        case 5: _t->plotProcessed(); break;
        case 6: { QByteArray _r = _t->getWavWithHeader((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->saveToWav(); break;
        case 8: { QByteArray _r = _t->generateArray((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< QVector<float>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QByteArray*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->saveToFile((*reinterpret_cast< QVector<float>(*)>(_a[1])),(*reinterpret_cast< QVector<float>(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 10: _t->on_pushButtonSaveInitAsText_clicked(); break;
        case 11: _t->on_pushButtonProcessFile_clicked(); break;
        case 12: _t->on_pushButtonSaveResultAsFile_clicked(); break;
        case 13: _t->on_pushButtonSaveResultAsText_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<float> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SoundProcess::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SoundProcess::percentageComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SoundProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_SoundProcess.data,
    qt_meta_data_SoundProcess,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SoundProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SoundProcess.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int SoundProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void SoundProcess::percentageComplete(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
