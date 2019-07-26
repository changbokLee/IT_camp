/****************************************************************************
** Meta object code from reading C++ file 'prefsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../prefsdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'prefsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PrefsDialog_t {
    QByteArrayData data[22];
    char stringdata0[361];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PrefsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PrefsDialog_t qt_meta_stringdata_PrefsDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PrefsDialog"
QT_MOC_LITERAL(1, 12, 13), // "onFontChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 4), // "font"
QT_MOC_LITERAL(4, 32, 17), // "onFontSizeChanged"
QT_MOC_LITERAL(5, 50, 4), // "size"
QT_MOC_LITERAL(6, 55, 16), // "onTabSizeChanged"
QT_MOC_LITERAL(7, 72, 20), // "onSmoothFontsChanged"
QT_MOC_LITERAL(8, 93, 5), // "state"
QT_MOC_LITERAL(9, 99, 26), // "onHighlightCaretRowChanged"
QT_MOC_LITERAL(10, 126, 27), // "onHighlightCaretWordChanged"
QT_MOC_LITERAL(11, 154, 26), // "onHighlightBracketsChanged"
QT_MOC_LITERAL(12, 181, 24), // "onShowLineNumbersChanged"
QT_MOC_LITERAL(13, 206, 22), // "onCapitalizeAPIChanged"
QT_MOC_LITERAL(14, 229, 20), // "onTabs4SpacesChanged"
QT_MOC_LITERAL(15, 250, 24), // "onSortCodeBrowserChanged"
QT_MOC_LITERAL(16, 275, 14), // "onColorChanged"
QT_MOC_LITERAL(17, 290, 15), // "onBrowseForPath"
QT_MOC_LITERAL(18, 306, 16), // "onSaveThemeColor"
QT_MOC_LITERAL(19, 323, 16), // "onLoadThemeColor"
QT_MOC_LITERAL(20, 340, 14), // "onThemeChanged"
QT_MOC_LITERAL(21, 355, 5) // "theme"

    },
    "PrefsDialog\0onFontChanged\0\0font\0"
    "onFontSizeChanged\0size\0onTabSizeChanged\0"
    "onSmoothFontsChanged\0state\0"
    "onHighlightCaretRowChanged\0"
    "onHighlightCaretWordChanged\0"
    "onHighlightBracketsChanged\0"
    "onShowLineNumbersChanged\0"
    "onCapitalizeAPIChanged\0onTabs4SpacesChanged\0"
    "onSortCodeBrowserChanged\0onColorChanged\0"
    "onBrowseForPath\0onSaveThemeColor\0"
    "onLoadThemeColor\0onThemeChanged\0theme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PrefsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x0a /* Public */,
       4,    1,   97,    2, 0x0a /* Public */,
       6,    1,  100,    2, 0x0a /* Public */,
       7,    1,  103,    2, 0x0a /* Public */,
       9,    1,  106,    2, 0x0a /* Public */,
      10,    1,  109,    2, 0x0a /* Public */,
      11,    1,  112,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x0a /* Public */,
      15,    1,  124,    2, 0x0a /* Public */,
      16,    0,  127,    2, 0x0a /* Public */,
      17,    0,  128,    2, 0x0a /* Public */,
      18,    0,  129,    2, 0x0a /* Public */,
      19,    0,  130,    2, 0x0a /* Public */,
      20,    1,  131,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void PrefsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PrefsDialog *_t = static_cast<PrefsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->onFontSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onTabSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onSmoothFontsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->onHighlightCaretRowChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onHighlightCaretWordChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onHighlightBracketsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onShowLineNumbersChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->onCapitalizeAPIChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onTabs4SpacesChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->onSortCodeBrowserChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onColorChanged(); break;
        case 12: _t->onBrowseForPath(); break;
        case 13: _t->onSaveThemeColor(); break;
        case 14: _t->onLoadThemeColor(); break;
        case 15: _t->onThemeChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject PrefsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PrefsDialog.data,
      qt_meta_data_PrefsDialog,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PrefsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
