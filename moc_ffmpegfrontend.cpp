/****************************************************************************
** Meta object code from reading C++ file 'ffmpegfrontend.h'
**
** Created: Tue Apr 23 22:21:29 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/ffmpegfrontend.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ffmpegfrontend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ffmpegOutput[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   13,   13,   13, 0x08,
      67,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ffmpegOutput[] = {
    "ffmpegOutput\0\0PB_stop_ffmpeg_clicked()\0"
    "on_PB_stop_ffmpeg_clicked()\0"
    "on_PB_close_clicked()\0"
};

void ffmpegOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ffmpegOutput *_t = static_cast<ffmpegOutput *>(_o);
        switch (_id) {
        case 0: _t->PB_stop_ffmpeg_clicked(); break;
        case 1: _t->on_PB_stop_ffmpeg_clicked(); break;
        case 2: _t->on_PB_close_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ffmpegOutput::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ffmpegOutput::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ffmpegOutput,
      qt_meta_data_ffmpegOutput, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ffmpegOutput::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ffmpegOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ffmpegOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ffmpegOutput))
        return static_cast<void*>(const_cast< ffmpegOutput*>(this));
    return QDialog::qt_metacast(_clname);
}

int ffmpegOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void ffmpegOutput::PB_stop_ffmpeg_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_ffmpegFrontend[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   15,   15,   15, 0x0a,
      56,   15,   15,   15, 0x0a,
      80,   71,   15,   15, 0x0a,
     100,   15,   15,   15, 0x0a,
     120,  116,   15,   15, 0x0a,
     156,   15,   15,   15, 0x0a,
     182,  180,   15,   15, 0x08,
     223,   15,   15,   15, 0x08,
     254,   15,   15,   15, 0x08,
     289,   15,   15,   15, 0x08,
     331,  325,   15,   15, 0x08,
     372,   15,   15,   15, 0x08,
     406,  404,   15,   15, 0x08,
     446,  438,   15,   15, 0x08,
     480,  438,   15,   15, 0x08,
     514,  438,   15,   15, 0x08,
     546,   15,   15,   15, 0x08,
     567,   15,   15,   15, 0x08,
     592,   15,   15,   15, 0x08,
     617,   15,   15,   15, 0x08,
     648,   15,   15,   15, 0x08,
     681,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ffmpegFrontend[] = {
    "ffmpegFrontend\0\0preset_or_args_changed()\0"
    "ffmpegStdout()\0ffmpegStderr()\0exitCode\0"
    "ffmpegFinished(int)\0ffmpegStarted()\0"
    "err\0ffmpegError(QProcess::ProcessError)\0"
    "onStop_ffmpeg_clicked()\0b\0"
    "onCB_delete_original_video_clicked(bool)\0"
    "on_PB_clear_log_file_clicked()\0"
    "on_PB_convert_video_file_clicked()\0"
    "on_PB_save_current_preset_clicked()\0"
    "index\0on_CB_container_currentIndexChanged(int)\0"
    "onTE_preview_args_textChanged()\0i\0"
    "onCB_ffmpeg_preset_changed(int)\0checked\0"
    "on_CB_disable_audio_clicked(bool)\0"
    "on_CB_disable_video_clicked(bool)\0"
    "on_CB_as_original_clicked(bool)\0"
    "update_ffmpeg_args()\0update_ffmpeg_GUI_args()\0"
    "on_PB_view_log_clicked()\0"
    "on_PB_set_ffmpeg_dir_clicked()\0"
    "on_LE_ffmpeg_dir_returnPressed()\0"
    "on_pushButton_clicked()\0"
};

void ffmpegFrontend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ffmpegFrontend *_t = static_cast<ffmpegFrontend *>(_o);
        switch (_id) {
        case 0: _t->preset_or_args_changed(); break;
        case 1: _t->ffmpegStdout(); break;
        case 2: _t->ffmpegStderr(); break;
        case 3: _t->ffmpegFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->ffmpegStarted(); break;
        case 5: _t->ffmpegError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: _t->onStop_ffmpeg_clicked(); break;
        case 7: _t->onCB_delete_original_video_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_PB_clear_log_file_clicked(); break;
        case 9: _t->on_PB_convert_video_file_clicked(); break;
        case 10: _t->on_PB_save_current_preset_clicked(); break;
        case 11: _t->on_CB_container_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onTE_preview_args_textChanged(); break;
        case 13: _t->onCB_ffmpeg_preset_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_CB_disable_audio_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_CB_disable_video_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_CB_as_original_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->update_ffmpeg_args(); break;
        case 18: _t->update_ffmpeg_GUI_args(); break;
        case 19: _t->on_PB_view_log_clicked(); break;
        case 20: _t->on_PB_set_ffmpeg_dir_clicked(); break;
        case 21: _t->on_LE_ffmpeg_dir_returnPressed(); break;
        case 22: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData ffmpegFrontend::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ffmpegFrontend::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ffmpegFrontend,
      qt_meta_data_ffmpegFrontend, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ffmpegFrontend::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ffmpegFrontend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ffmpegFrontend::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ffmpegFrontend))
        return static_cast<void*>(const_cast< ffmpegFrontend*>(this));
    return QDialog::qt_metacast(_clname);
}

int ffmpegFrontend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void ffmpegFrontend::preset_or_args_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
