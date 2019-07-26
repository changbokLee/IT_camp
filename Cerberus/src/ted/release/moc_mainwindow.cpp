/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_HelpView_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HelpView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HelpView_t qt_meta_stringdata_HelpView = {
    {
QT_MOC_LITERAL(0, 0, 8) // "HelpView"

    },
    "HelpView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HelpView[] = {

 // content:
       7,       // revision
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

void HelpView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject HelpView::staticMetaObject = {
    { &QWebEngineView::staticMetaObject, qt_meta_stringdata_HelpView.data,
      qt_meta_data_HelpView,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *HelpView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HelpView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_HelpView.stringdata0))
        return static_cast<void*>(this);
    return QWebEngineView::qt_metacast(_clname);
}

int HelpView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineView::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WebEnginePage_t {
    QByteArrayData data[4];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebEnginePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebEnginePage_t qt_meta_stringdata_WebEnginePage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "WebEnginePage"
QT_MOC_LITERAL(1, 14, 11), // "linkClicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3) // "url"

    },
    "WebEnginePage\0linkClicked\0\0url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebEnginePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void WebEnginePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebEnginePage *_t = static_cast<WebEnginePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WebEnginePage::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebEnginePage::linkClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WebEnginePage::staticMetaObject = {
    { &QWebEnginePage::staticMetaObject, qt_meta_stringdata_WebEnginePage.data,
      qt_meta_data_WebEnginePage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *WebEnginePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebEnginePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WebEnginePage.stringdata0))
        return static_cast<void*>(this);
    return QWebEnginePage::qt_metacast(_clname);
}

int WebEnginePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEnginePage::qt_metacall(_c, _id, _a);
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
void WebEnginePage::linkClicked(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[80];
    char stringdata0[1072];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 9), // "onFileNew"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 17), // "onFileNewTemplate"
QT_MOC_LITERAL(4, 40, 10), // "onFileOpen"
QT_MOC_LITERAL(5, 51, 16), // "onFileOpenRecent"
QT_MOC_LITERAL(6, 68, 11), // "onFileClose"
QT_MOC_LITERAL(7, 80, 14), // "onFileCloseAll"
QT_MOC_LITERAL(8, 95, 17), // "onFileCloseOthers"
QT_MOC_LITERAL(9, 113, 10), // "onFileSave"
QT_MOC_LITERAL(10, 124, 12), // "onFileSaveAs"
QT_MOC_LITERAL(11, 137, 13), // "onFileSaveAll"
QT_MOC_LITERAL(12, 151, 10), // "onFileNext"
QT_MOC_LITERAL(13, 162, 14), // "onFilePrevious"
QT_MOC_LITERAL(14, 177, 11), // "onFilePrefs"
QT_MOC_LITERAL(15, 189, 10), // "onFileQuit"
QT_MOC_LITERAL(16, 200, 10), // "onEditUndo"
QT_MOC_LITERAL(17, 211, 10), // "onEditRedo"
QT_MOC_LITERAL(18, 222, 9), // "onEditCut"
QT_MOC_LITERAL(19, 232, 10), // "onEditCopy"
QT_MOC_LITERAL(20, 243, 27), // "onEditCommentUncommentBlock"
QT_MOC_LITERAL(21, 271, 11), // "onEditPaste"
QT_MOC_LITERAL(22, 283, 12), // "onEditDelete"
QT_MOC_LITERAL(23, 296, 15), // "onEditSelectAll"
QT_MOC_LITERAL(24, 312, 10), // "onEditFind"
QT_MOC_LITERAL(25, 323, 14), // "onEditFindNext"
QT_MOC_LITERAL(26, 338, 13), // "onFindReplace"
QT_MOC_LITERAL(27, 352, 3), // "how"
QT_MOC_LITERAL(28, 356, 10), // "onEditGoto"
QT_MOC_LITERAL(29, 367, 17), // "onEditFindInFiles"
QT_MOC_LITERAL(30, 385, 13), // "onViewToolBar"
QT_MOC_LITERAL(31, 399, 12), // "onViewWindow"
QT_MOC_LITERAL(32, 412, 16), // "onToggleBookmark"
QT_MOC_LITERAL(33, 429, 18), // "onPreviousBookmark"
QT_MOC_LITERAL(34, 448, 14), // "onNextBookmark"
QT_MOC_LITERAL(35, 463, 18), // "onToggleFullscreen"
QT_MOC_LITERAL(36, 482, 12), // "onBuildBuild"
QT_MOC_LITERAL(37, 495, 10), // "onBuildRun"
QT_MOC_LITERAL(38, 506, 12), // "onBuildCheck"
QT_MOC_LITERAL(39, 519, 13), // "onBuildUpdate"
QT_MOC_LITERAL(40, 533, 11), // "onDebugStep"
QT_MOC_LITERAL(41, 545, 15), // "onDebugStepInto"
QT_MOC_LITERAL(42, 561, 14), // "onDebugStepOut"
QT_MOC_LITERAL(43, 576, 11), // "onDebugKill"
QT_MOC_LITERAL(44, 588, 13), // "onBuildTarget"
QT_MOC_LITERAL(45, 602, 13), // "onBuildConfig"
QT_MOC_LITERAL(46, 616, 15), // "onBuildLockFile"
QT_MOC_LITERAL(47, 632, 17), // "onBuildUnlockFile"
QT_MOC_LITERAL(48, 650, 17), // "onBuildAddProject"
QT_MOC_LITERAL(49, 668, 10), // "onHelpHome"
QT_MOC_LITERAL(50, 679, 10), // "onHelpBack"
QT_MOC_LITERAL(51, 690, 13), // "onHelpForward"
QT_MOC_LITERAL(52, 704, 15), // "onHelpQuickHelp"
QT_MOC_LITERAL(53, 720, 22), // "onHelpCerberusHomepage"
QT_MOC_LITERAL(54, 743, 11), // "onHelpAbout"
QT_MOC_LITERAL(55, 755, 13), // "onHelpRebuild"
QT_MOC_LITERAL(56, 769, 15), // "onTargetChanged"
QT_MOC_LITERAL(57, 785, 5), // "index"
QT_MOC_LITERAL(58, 791, 10), // "onShowHelp"
QT_MOC_LITERAL(59, 802, 4), // "text"
QT_MOC_LITERAL(60, 807, 23), // "onShowHelpWithStatusbar"
QT_MOC_LITERAL(61, 831, 14), // "onCloseMainTab"
QT_MOC_LITERAL(62, 846, 16), // "onMainTabChanged"
QT_MOC_LITERAL(63, 863, 23), // "onDockVisibilityChanged"
QT_MOC_LITERAL(64, 887, 7), // "visible"
QT_MOC_LITERAL(65, 895, 13), // "onProjectMenu"
QT_MOC_LITERAL(66, 909, 3), // "pos"
QT_MOC_LITERAL(67, 913, 13), // "onFileClicked"
QT_MOC_LITERAL(68, 927, 13), // "onTextChanged"
QT_MOC_LITERAL(69, 941, 23), // "onCursorPositionChanged"
QT_MOC_LITERAL(70, 965, 10), // "onShowCode"
QT_MOC_LITERAL(71, 976, 4), // "path"
QT_MOC_LITERAL(72, 981, 4), // "line"
QT_MOC_LITERAL(73, 986, 3), // "len"
QT_MOC_LITERAL(74, 990, 12), // "onProcStdout"
QT_MOC_LITERAL(75, 1003, 12), // "onProcStderr"
QT_MOC_LITERAL(76, 1016, 19), // "onProcLineAvailable"
QT_MOC_LITERAL(77, 1036, 7), // "channel"
QT_MOC_LITERAL(78, 1044, 14), // "onProcFinished"
QT_MOC_LITERAL(79, 1059, 12) // "onEditorMenu"

    },
    "MainWindow\0onFileNew\0\0onFileNewTemplate\0"
    "onFileOpen\0onFileOpenRecent\0onFileClose\0"
    "onFileCloseAll\0onFileCloseOthers\0"
    "onFileSave\0onFileSaveAs\0onFileSaveAll\0"
    "onFileNext\0onFilePrevious\0onFilePrefs\0"
    "onFileQuit\0onEditUndo\0onEditRedo\0"
    "onEditCut\0onEditCopy\0onEditCommentUncommentBlock\0"
    "onEditPaste\0onEditDelete\0onEditSelectAll\0"
    "onEditFind\0onEditFindNext\0onFindReplace\0"
    "how\0onEditGoto\0onEditFindInFiles\0"
    "onViewToolBar\0onViewWindow\0onToggleBookmark\0"
    "onPreviousBookmark\0onNextBookmark\0"
    "onToggleFullscreen\0onBuildBuild\0"
    "onBuildRun\0onBuildCheck\0onBuildUpdate\0"
    "onDebugStep\0onDebugStepInto\0onDebugStepOut\0"
    "onDebugKill\0onBuildTarget\0onBuildConfig\0"
    "onBuildLockFile\0onBuildUnlockFile\0"
    "onBuildAddProject\0onHelpHome\0onHelpBack\0"
    "onHelpForward\0onHelpQuickHelp\0"
    "onHelpCerberusHomepage\0onHelpAbout\0"
    "onHelpRebuild\0onTargetChanged\0index\0"
    "onShowHelp\0text\0onShowHelpWithStatusbar\0"
    "onCloseMainTab\0onMainTabChanged\0"
    "onDockVisibilityChanged\0visible\0"
    "onProjectMenu\0pos\0onFileClicked\0"
    "onTextChanged\0onCursorPositionChanged\0"
    "onShowCode\0path\0line\0len\0onProcStdout\0"
    "onProcStderr\0onProcLineAvailable\0"
    "channel\0onProcFinished\0onEditorMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      70,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  364,    2, 0x0a /* Public */,
       3,    0,  365,    2, 0x0a /* Public */,
       4,    0,  366,    2, 0x0a /* Public */,
       5,    0,  367,    2, 0x0a /* Public */,
       6,    0,  368,    2, 0x0a /* Public */,
       7,    0,  369,    2, 0x0a /* Public */,
       8,    0,  370,    2, 0x0a /* Public */,
       9,    0,  371,    2, 0x0a /* Public */,
      10,    0,  372,    2, 0x0a /* Public */,
      11,    0,  373,    2, 0x0a /* Public */,
      12,    0,  374,    2, 0x0a /* Public */,
      13,    0,  375,    2, 0x0a /* Public */,
      14,    0,  376,    2, 0x0a /* Public */,
      15,    0,  377,    2, 0x0a /* Public */,
      16,    0,  378,    2, 0x0a /* Public */,
      17,    0,  379,    2, 0x0a /* Public */,
      18,    0,  380,    2, 0x0a /* Public */,
      19,    0,  381,    2, 0x0a /* Public */,
      20,    0,  382,    2, 0x0a /* Public */,
      21,    0,  383,    2, 0x0a /* Public */,
      22,    0,  384,    2, 0x0a /* Public */,
      23,    0,  385,    2, 0x0a /* Public */,
      24,    0,  386,    2, 0x0a /* Public */,
      25,    0,  387,    2, 0x0a /* Public */,
      26,    1,  388,    2, 0x0a /* Public */,
      28,    0,  391,    2, 0x0a /* Public */,
      29,    0,  392,    2, 0x0a /* Public */,
      30,    0,  393,    2, 0x0a /* Public */,
      31,    0,  394,    2, 0x0a /* Public */,
      32,    0,  395,    2, 0x0a /* Public */,
      33,    0,  396,    2, 0x0a /* Public */,
      34,    0,  397,    2, 0x0a /* Public */,
      35,    0,  398,    2, 0x0a /* Public */,
      36,    0,  399,    2, 0x0a /* Public */,
      37,    0,  400,    2, 0x0a /* Public */,
      38,    0,  401,    2, 0x0a /* Public */,
      39,    0,  402,    2, 0x0a /* Public */,
      40,    0,  403,    2, 0x0a /* Public */,
      41,    0,  404,    2, 0x0a /* Public */,
      42,    0,  405,    2, 0x0a /* Public */,
      43,    0,  406,    2, 0x0a /* Public */,
      44,    0,  407,    2, 0x0a /* Public */,
      45,    0,  408,    2, 0x0a /* Public */,
      46,    0,  409,    2, 0x0a /* Public */,
      47,    0,  410,    2, 0x0a /* Public */,
      48,    0,  411,    2, 0x0a /* Public */,
      49,    0,  412,    2, 0x0a /* Public */,
      50,    0,  413,    2, 0x0a /* Public */,
      51,    0,  414,    2, 0x0a /* Public */,
      52,    0,  415,    2, 0x0a /* Public */,
      53,    0,  416,    2, 0x0a /* Public */,
      54,    0,  417,    2, 0x0a /* Public */,
      55,    0,  418,    2, 0x0a /* Public */,
      56,    1,  419,    2, 0x08 /* Private */,
      58,    1,  422,    2, 0x08 /* Private */,
      60,    1,  425,    2, 0x08 /* Private */,
      61,    1,  428,    2, 0x08 /* Private */,
      62,    1,  431,    2, 0x08 /* Private */,
      63,    1,  434,    2, 0x08 /* Private */,
      65,    1,  437,    2, 0x08 /* Private */,
      67,    1,  440,    2, 0x08 /* Private */,
      68,    0,  443,    2, 0x08 /* Private */,
      69,    0,  444,    2, 0x08 /* Private */,
      70,    2,  445,    2, 0x08 /* Private */,
      70,    3,  450,    2, 0x08 /* Private */,
      74,    0,  457,    2, 0x08 /* Private */,
      75,    0,  458,    2, 0x08 /* Private */,
      76,    1,  459,    2, 0x08 /* Private */,
      78,    0,  462,    2, 0x08 /* Private */,
      79,    1,  463,    2, 0x08 /* Private */,

 // slots: parameters
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
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
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Int,   57,
    QMetaType::Void, QMetaType::Bool,   64,
    QMetaType::Void, QMetaType::QPoint,   66,
    QMetaType::Void, QMetaType::QModelIndex,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   71,   72,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,   71,   66,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   77,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   66,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onFileNew(); break;
        case 1: _t->onFileNewTemplate(); break;
        case 2: _t->onFileOpen(); break;
        case 3: _t->onFileOpenRecent(); break;
        case 4: _t->onFileClose(); break;
        case 5: _t->onFileCloseAll(); break;
        case 6: _t->onFileCloseOthers(); break;
        case 7: _t->onFileSave(); break;
        case 8: _t->onFileSaveAs(); break;
        case 9: _t->onFileSaveAll(); break;
        case 10: _t->onFileNext(); break;
        case 11: _t->onFilePrevious(); break;
        case 12: _t->onFilePrefs(); break;
        case 13: _t->onFileQuit(); break;
        case 14: _t->onEditUndo(); break;
        case 15: _t->onEditRedo(); break;
        case 16: _t->onEditCut(); break;
        case 17: _t->onEditCopy(); break;
        case 18: _t->onEditCommentUncommentBlock(); break;
        case 19: _t->onEditPaste(); break;
        case 20: _t->onEditDelete(); break;
        case 21: _t->onEditSelectAll(); break;
        case 22: _t->onEditFind(); break;
        case 23: _t->onEditFindNext(); break;
        case 24: _t->onFindReplace((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->onEditGoto(); break;
        case 26: _t->onEditFindInFiles(); break;
        case 27: _t->onViewToolBar(); break;
        case 28: _t->onViewWindow(); break;
        case 29: _t->onToggleBookmark(); break;
        case 30: _t->onPreviousBookmark(); break;
        case 31: _t->onNextBookmark(); break;
        case 32: _t->onToggleFullscreen(); break;
        case 33: _t->onBuildBuild(); break;
        case 34: _t->onBuildRun(); break;
        case 35: _t->onBuildCheck(); break;
        case 36: _t->onBuildUpdate(); break;
        case 37: _t->onDebugStep(); break;
        case 38: _t->onDebugStepInto(); break;
        case 39: _t->onDebugStepOut(); break;
        case 40: _t->onDebugKill(); break;
        case 41: _t->onBuildTarget(); break;
        case 42: _t->onBuildConfig(); break;
        case 43: _t->onBuildLockFile(); break;
        case 44: _t->onBuildUnlockFile(); break;
        case 45: _t->onBuildAddProject(); break;
        case 46: _t->onHelpHome(); break;
        case 47: _t->onHelpBack(); break;
        case 48: _t->onHelpForward(); break;
        case 49: _t->onHelpQuickHelp(); break;
        case 50: _t->onHelpCerberusHomepage(); break;
        case 51: _t->onHelpAbout(); break;
        case 52: _t->onHelpRebuild(); break;
        case 53: _t->onTargetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 54: _t->onShowHelp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 55: _t->onShowHelpWithStatusbar((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 56: _t->onCloseMainTab((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->onMainTabChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->onDockVisibilityChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->onProjectMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 60: _t->onFileClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 61: _t->onTextChanged(); break;
        case 62: _t->onCursorPositionChanged(); break;
        case 63: _t->onShowCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 64: _t->onShowCode((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 65: _t->onProcStdout(); break;
        case 66: _t->onProcStderr(); break;
        case 67: _t->onProcLineAvailable((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->onProcFinished(); break;
        case 69: _t->onEditorMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 70)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 70;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 70)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 70;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
