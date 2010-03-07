#include <PythonQt.h>
#include <QImage>
#include <QObject>
#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qabstractbutton.h>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qaction.h>
#include <qapplication.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcheckbox.h>
#include <qcleanlooksstyle.h>
#include <qclipboard.h>
#include <qcolor.h>
#include <qcolordialog.h>
#include <qcolumnview.h>
#include <qcombobox.h>
#include <qcommandlinkbutton.h>
#include <qcommonstyle.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatawidgetmapper.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qdesktopservices.h>
#include <qdesktopwidget.h>
#include <qdial.h>
#include <qdialog.h>
#include <qdialogbuttonbox.h>
#include <qdockwidget.h>
#include <qdrag.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qitemselectionmodel.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpair.h>
#include <qpalette.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpushbutton.h>
#include <qrect.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qspinbox.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qurl.h>
#include <qvalidator.h>
#include <qvector.h>
#include <qwidget.h>
#include <qwindowsstyle.h>



class PythonQtShell_QCheckBox : public QCheckBox
{
public:
    PythonQtShell_QCheckBox(QWidget*  parent = 0):QCheckBox(parent),_wrapper(NULL) {};
    PythonQtShell_QCheckBox(const QString&  text, QWidget*  parent = 0):QCheckBox(text, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void nextCheckState();
virtual void checkStateSet();
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  e);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void timerEvent(QTimerEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual QSize  minimumSizeHint() const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCheckBox : public QCheckBox
{ public:
inline bool  promoted_event(QEvent*  e) { return QCheckBox::event(e); }
inline void promoted_nextCheckState() { QCheckBox::nextCheckState(); }
inline void promoted_checkStateSet() { QCheckBox::checkStateSet(); }
inline void promoted_mouseMoveEvent(QMouseEvent*  arg__1) { QCheckBox::mouseMoveEvent(arg__1); }
inline bool  promoted_hitButton(const QPoint&  pos) const { return QCheckBox::hitButton(pos); }
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QCheckBox::paintEvent(arg__1); }
};

class PythonQtWrapper_QCheckBox : public QObject
{ Q_OBJECT
public:
public slots:
QCheckBox* new_QCheckBox(QWidget*  parent = 0);
QCheckBox* new_QCheckBox(const QString&  text, QWidget*  parent = 0);
void delete_QCheckBox(QCheckBox* obj) { delete obj; } 
   bool  event(QCheckBox* theWrappedObject, QEvent*  e);
   void nextCheckState(QCheckBox* theWrappedObject);
   void setCheckState(QCheckBox* theWrappedObject, Qt::CheckState  state);
   void checkStateSet(QCheckBox* theWrappedObject);
   void mouseMoveEvent(QCheckBox* theWrappedObject, QMouseEvent*  arg__1);
   QSize  sizeHint(QCheckBox* theWrappedObject) const;
   bool  hitButton(QCheckBox* theWrappedObject, const QPoint&  pos) const;
   void setTristate(QCheckBox* theWrappedObject, bool  y = true);
   Qt::CheckState  checkState(QCheckBox* theWrappedObject) const;
   bool  isTristate(QCheckBox* theWrappedObject) const;
   void paintEvent(QCheckBox* theWrappedObject, QPaintEvent*  arg__1);
};





class PythonQtShell_QCleanlooksStyle : public QCleanlooksStyle
{
public:
    PythonQtShell_QCleanlooksStyle():QCleanlooksStyle(),_wrapper(NULL) {};

virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual void drawControl(QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
virtual QSize  sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
virtual int  pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual int  styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
virtual QPalette  standardPalette() const;
virtual void drawPrimitive(QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
virtual void unpolish(QApplication*  app);
virtual void unpolish(QWidget*  widget);
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual void drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
virtual void polish(QApplication*  app);
virtual void polish(QWidget*  widget);
virtual void polish(QPalette&  pal);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void timerEvent(QTimerEvent*  event);
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCleanlooksStyle : public QCleanlooksStyle
{ public:
inline QRect  promoted_itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const { return QCleanlooksStyle::itemPixmapRect(r, flags, pixmap); }
inline void promoted_drawControl(QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const { QCleanlooksStyle::drawControl(ce, option, painter, widget); }
inline void promoted_drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const { QCleanlooksStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const { return QCleanlooksStyle::sizeFromContents(type, option, size, widget); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const { return QCleanlooksStyle::pixelMetric(metric, option, widget); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCleanlooksStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const { return QCleanlooksStyle::subControlRect(cc, opt, sc, widget); }
inline void promoted_drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const { QCleanlooksStyle::drawItemPixmap(painter, rect, alignment, pixmap); }
inline int  promoted_styleHint(QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const { return QCleanlooksStyle::styleHint(hint, option, widget, returnData); }
inline QPalette  promoted_standardPalette() const { return QCleanlooksStyle::standardPalette(); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const { QCleanlooksStyle::drawPrimitive(elem, option, painter, widget); }
inline void promoted_unpolish(QApplication*  app) { QCleanlooksStyle::unpolish(app); }
inline void promoted_unpolish(QWidget*  widget) { QCleanlooksStyle::unpolish(widget); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const { return QCleanlooksStyle::hitTestComplexControl(cc, opt, pt, w); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const { QCleanlooksStyle::drawComplexControl(control, option, painter, widget); }
inline void promoted_polish(QApplication*  app) { QCleanlooksStyle::polish(app); }
inline void promoted_polish(QWidget*  widget) { QCleanlooksStyle::polish(widget); }
inline void promoted_polish(QPalette&  pal) { QCleanlooksStyle::polish(pal); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QCleanlooksStyle::subElementRect(r, opt, widget); }
};

class PythonQtWrapper_QCleanlooksStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCleanlooksStyle* new_QCleanlooksStyle();
void delete_QCleanlooksStyle(QCleanlooksStyle* obj) { delete obj; } 
   QRect  itemPixmapRect(QCleanlooksStyle* theWrappedObject, const QRect&  r, int  flags, const QPixmap&  pixmap) const;
   void drawControl(QCleanlooksStyle* theWrappedObject, QStyle::ControlElement  ce, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget) const;
   void drawItemText(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole = QPalette::NoRole) const;
   QSize  sizeFromContents(QCleanlooksStyle* theWrappedObject, QStyle::ContentsType  type, const QStyleOption*  option, const QSize&  size, const QWidget*  widget) const;
   int  pixelMetric(QCleanlooksStyle* theWrappedObject, QStyle::PixelMetric  metric, const QStyleOption*  option = 0, const QWidget*  widget = 0) const;
   QPixmap  generatedIconPixmap(QCleanlooksStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   QRect  subControlRect(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  widget) const;
   void drawItemPixmap(QCleanlooksStyle* theWrappedObject, QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
   int  styleHint(QCleanlooksStyle* theWrappedObject, QStyle::StyleHint  hint, const QStyleOption*  option = 0, const QWidget*  widget = 0, QStyleHintReturn*  returnData = 0) const;
   QPalette  standardPalette(QCleanlooksStyle* theWrappedObject) const;
   void drawPrimitive(QCleanlooksStyle* theWrappedObject, QStyle::PrimitiveElement  elem, const QStyleOption*  option, QPainter*  painter, const QWidget*  widget = 0) const;
   void unpolish(QCleanlooksStyle* theWrappedObject, QApplication*  app);
   void unpolish(QCleanlooksStyle* theWrappedObject, QWidget*  widget);
   QStyle::SubControl  hitTestComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
   void drawComplexControl(QCleanlooksStyle* theWrappedObject, QStyle::ComplexControl  control, const QStyleOptionComplex*  option, QPainter*  painter, const QWidget*  widget) const;
   void polish(QCleanlooksStyle* theWrappedObject, QApplication*  app);
   void polish(QCleanlooksStyle* theWrappedObject, QWidget*  widget);
   void polish(QCleanlooksStyle* theWrappedObject, QPalette&  pal);
   QRect  subElementRect(QCleanlooksStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
};





class PythonQtPublicPromoter_QClipboard : public QClipboard
{ public:
inline bool  promoted_event(QEvent*  arg__1) { return QClipboard::event(arg__1); }
};

class PythonQtWrapper_QClipboard : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode )
enum Mode{
  Clipboard = QClipboard::Clipboard,   Selection = QClipboard::Selection,   FindBuffer = QClipboard::FindBuffer,   LastMode = QClipboard::LastMode};
public slots:
   bool  event(QClipboard* theWrappedObject, QEvent*  arg__1);
   bool  ownsClipboard(QClipboard* theWrappedObject) const;
   bool  supportsFindBuffer(QClipboard* theWrappedObject) const;
   void setImage(QClipboard* theWrappedObject, const QImage&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   const QMimeData*  mimeData(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setMimeData(QClipboard* theWrappedObject, QMimeData*  data, QClipboard::Mode  mode = QClipboard::Clipboard);
   QString  text(QClipboard* theWrappedObject, QString&  subtype, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QString  text(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   QImage  image(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   bool  ownsSelection(QClipboard* theWrappedObject) const;
   void setPixmap(QClipboard* theWrappedObject, const QPixmap&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  supportsSelection(QClipboard* theWrappedObject) const;
   void clear(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard);
   QPixmap  pixmap(QClipboard* theWrappedObject, QClipboard::Mode  mode = QClipboard::Clipboard) const;
   void setText(QClipboard* theWrappedObject, const QString&  arg__1, QClipboard::Mode  mode = QClipboard::Clipboard);
   bool  ownsFindBuffer(QClipboard* theWrappedObject) const;
};





class PythonQtWrapper_QClipboardEvent : public QObject
{ Q_OBJECT
public:
public slots:
void delete_QClipboardEvent(QClipboardEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QCloseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QCloseEvent* new_QCloseEvent();
void delete_QCloseEvent(QCloseEvent* obj) { delete obj; } 
};





class PythonQtShell_QColorDialog : public QColorDialog
{
public:
    PythonQtShell_QColorDialog(QWidget*  parent = 0):QColorDialog(parent),_wrapper(NULL) {};
    PythonQtShell_QColorDialog(const QColor&  initial, QWidget*  parent = 0):QColorDialog(initial, parent),_wrapper(NULL) {};

virtual void changeEvent(QEvent*  event);
virtual void done(int  result);
virtual void showEvent(QShowEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void reject();
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void accept();
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QColorDialog : public QColorDialog
{ public:
inline void promoted_changeEvent(QEvent*  event) { QColorDialog::changeEvent(event); }
inline void promoted_done(int  result) { QColorDialog::done(result); }
};

class PythonQtWrapper_QColorDialog : public QObject
{ Q_OBJECT
public:
public slots:
QColorDialog* new_QColorDialog(QWidget*  parent = 0);
QColorDialog* new_QColorDialog(const QColor&  initial, QWidget*  parent = 0);
void delete_QColorDialog(QColorDialog* obj) { delete obj; } 
   QColor  selectedColor(QColorDialog* theWrappedObject) const;
   unsigned int  static_QColorDialog_customColor(int  index);
   QColor  static_QColorDialog_getColor(const QColor&  initial = Qt::white, QWidget*  parent = 0);
   QColor  static_QColorDialog_getColor(const QColor&  initial, QWidget*  parent, const QString&  title, QColorDialog::ColorDialogOptions  options = 0);
   void changeEvent(QColorDialog* theWrappedObject, QEvent*  event);
   void static_QColorDialog_setStandardColor(int  index, unsigned int  color);
   int  static_QColorDialog_customCount();
   bool  testOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option) const;
   void setOptions(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOptions  options);
   void setVisible(QColorDialog* theWrappedObject, bool  visible);
   void static_QColorDialog_setCustomColor(int  index, unsigned int  color);
   void open(QColorDialog* theWrappedObject, QObject*  receiver, const char*  member);
   void open(QColorDialog* theWrappedObject);
   void done(QColorDialog* theWrappedObject, int  result);
   void setCurrentColor(QColorDialog* theWrappedObject, const QColor&  color);
   unsigned int  static_QColorDialog_getRgba(unsigned int  rgba = 0xffffffff, bool*  ok = 0, QWidget*  parent = 0);
   QColor  currentColor(QColorDialog* theWrappedObject) const;
   void setOption(QColorDialog* theWrappedObject, QColorDialog::ColorDialogOption  option, bool  on = true);
   QColorDialog::ColorDialogOptions  options(QColorDialog* theWrappedObject) const;
};





class PythonQtShell_QColumnView : public QColumnView
{
public:
    PythonQtShell_QColumnView(QWidget*  parent = 0):QColumnView(parent),_wrapper(NULL) {};

virtual void scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
virtual int  horizontalOffset() const;
virtual QModelIndex  indexAt(const QPoint&  point) const;
virtual QRect  visualRect(const QModelIndex&  index) const;
virtual void setSelectionModel(QItemSelectionModel*  selectionModel);
virtual void scrollContentsBy(int  dx, int  dy);
virtual QAbstractItemView*  createColumn(const QModelIndex&  rootIndex);
virtual int  verticalOffset() const;
virtual void setRootIndex(const QModelIndex&  index);
virtual bool  isIndexHidden(const QModelIndex&  index) const;
virtual void setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
virtual void currentChanged(const QModelIndex&  current, const QModelIndex&  previous);
virtual void setModel(QAbstractItemModel*  model);
virtual void rowsInserted(const QModelIndex&  parent, int  start, int  end);
virtual QRegion  visualRegionForSelection(const QItemSelection&  selection) const;
virtual void selectAll();
virtual void resizeEvent(QResizeEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  query) const;
virtual void selectionChanged(const QItemSelection&  selected, const QItemSelection&  deselected);
virtual void timerEvent(QTimerEvent*  event);
virtual void verticalScrollbarAction(int  action);
virtual void reset();
virtual void updateEditorGeometries();
virtual void verticalScrollbarValueChanged(int  value);
virtual void dragLeaveEvent(QDragLeaveEvent*  event);
virtual void dropEvent(QDropEvent*  event);
virtual void closeEditor(QWidget*  editor, QAbstractItemDelegate::EndEditHint  hint);
virtual int  sizeHintForColumn(int  column) const;
virtual bool  viewportEvent(QEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual bool  event(QEvent*  event);
virtual void dragMoveEvent(QDragMoveEvent*  event);
virtual void dataChanged(const QModelIndex&  topLeft, const QModelIndex&  bottomRight);
virtual void keyboardSearch(const QString&  search);
virtual QItemSelectionModel::SelectionFlags  selectionCommand(const QModelIndex&  index, const QEvent*  event) const;
virtual void horizontalScrollbarValueChanged(int  value);
virtual void mouseDoubleClickEvent(QMouseEvent*  event);
virtual bool  edit(const QModelIndex&  index, QAbstractItemView::EditTrigger  trigger, QEvent*  event);
virtual void commitData(QWidget*  editor);
virtual void updateEditorData();
virtual void dragEnterEvent(QDragEnterEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual QList<QModelIndex >  selectedIndexes() const;
virtual QStyleOptionViewItem  viewOptions() const;
virtual int  sizeHintForRow(int  row) const;
virtual void horizontalScrollbarAction(int  action);
virtual void editorDestroyed(QObject*  editor);
virtual void focusInEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void inputMethodEvent(QInputMethodEvent*  event);
virtual void rowsAboutToBeRemoved(const QModelIndex&  parent, int  start, int  end);
virtual void doItemsLayout();
virtual void startDrag(Qt::DropActions  supportedActions);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void updateGeometries();
virtual void focusOutEvent(QFocusEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QColumnView : public QColumnView
{ public:
inline void promoted_scrollTo(const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible) { QColumnView::scrollTo(index, hint); }
inline int  promoted_horizontalOffset() const { return QColumnView::horizontalOffset(); }
inline QModelIndex  promoted_indexAt(const QPoint&  point) const { return QColumnView::indexAt(point); }
inline QRect  promoted_visualRect(const QModelIndex&  index) const { return QColumnView::visualRect(index); }
inline void promoted_setSelectionModel(QItemSelectionModel*  selectionModel) { QColumnView::setSelectionModel(selectionModel); }
inline void promoted_scrollContentsBy(int  dx, int  dy) { QColumnView::scrollContentsBy(dx, dy); }
inline QAbstractItemView*  promoted_createColumn(const QModelIndex&  rootIndex) { return QColumnView::createColumn(rootIndex); }
inline int  promoted_verticalOffset() const { return QColumnView::verticalOffset(); }
inline void promoted_setRootIndex(const QModelIndex&  index) { QColumnView::setRootIndex(index); }
inline bool  promoted_isIndexHidden(const QModelIndex&  index) const { return QColumnView::isIndexHidden(index); }
inline void promoted_setSelection(const QRect&  rect, QItemSelectionModel::SelectionFlags  command) { QColumnView::setSelection(rect, command); }
inline void promoted_currentChanged(const QModelIndex&  current, const QModelIndex&  previous) { QColumnView::currentChanged(current, previous); }
inline void promoted_setModel(QAbstractItemModel*  model) { QColumnView::setModel(model); }
inline void promoted_rowsInserted(const QModelIndex&  parent, int  start, int  end) { QColumnView::rowsInserted(parent, start, end); }
inline QRegion  promoted_visualRegionForSelection(const QItemSelection&  selection) const { return QColumnView::visualRegionForSelection(selection); }
inline void promoted_selectAll() { QColumnView::selectAll(); }
inline void promoted_resizeEvent(QResizeEvent*  event) { QColumnView::resizeEvent(event); }
};

class PythonQtWrapper_QColumnView : public QObject
{ Q_OBJECT
public:
public slots:
QColumnView* new_QColumnView(QWidget*  parent = 0);
void delete_QColumnView(QColumnView* obj) { delete obj; } 
   void scrollTo(QColumnView* theWrappedObject, const QModelIndex&  index, QAbstractItemView::ScrollHint  hint = QAbstractItemView::EnsureVisible);
   int  horizontalOffset(QColumnView* theWrappedObject) const;
   QModelIndex  indexAt(QColumnView* theWrappedObject, const QPoint&  point) const;
   QRect  visualRect(QColumnView* theWrappedObject, const QModelIndex&  index) const;
   void setPreviewWidget(QColumnView* theWrappedObject, QWidget*  widget);
   QWidget*  previewWidget(QColumnView* theWrappedObject) const;
   void setSelectionModel(QColumnView* theWrappedObject, QItemSelectionModel*  selectionModel);
   void scrollContentsBy(QColumnView* theWrappedObject, int  dx, int  dy);
   QAbstractItemView*  createColumn(QColumnView* theWrappedObject, const QModelIndex&  rootIndex);
   int  verticalOffset(QColumnView* theWrappedObject) const;
   void setRootIndex(QColumnView* theWrappedObject, const QModelIndex&  index);
   bool  resizeGripsVisible(QColumnView* theWrappedObject) const;
   void setResizeGripsVisible(QColumnView* theWrappedObject, bool  visible);
   bool  isIndexHidden(QColumnView* theWrappedObject, const QModelIndex&  index) const;
   void setSelection(QColumnView* theWrappedObject, const QRect&  rect, QItemSelectionModel::SelectionFlags  command);
   void currentChanged(QColumnView* theWrappedObject, const QModelIndex&  current, const QModelIndex&  previous);
   void setModel(QColumnView* theWrappedObject, QAbstractItemModel*  model);
   QSize  sizeHint(QColumnView* theWrappedObject) const;
   void rowsInserted(QColumnView* theWrappedObject, const QModelIndex&  parent, int  start, int  end);
   void setColumnWidths(QColumnView* theWrappedObject, const QList<int >&  list);
   QRegion  visualRegionForSelection(QColumnView* theWrappedObject, const QItemSelection&  selection) const;
   void selectAll(QColumnView* theWrappedObject);
   void resizeEvent(QColumnView* theWrappedObject, QResizeEvent*  event);
   QList<int >  columnWidths(QColumnView* theWrappedObject) const;
};





class PythonQtShell_QComboBox : public QComboBox
{
public:
    PythonQtShell_QComboBox(QWidget*  parent = 0):QComboBox(parent),_wrapper(NULL) {};

virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void keyPressEvent(QKeyEvent*  e);
virtual void hidePopup();
virtual void showPopup();
virtual void mousePressEvent(QMouseEvent*  e);
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void resizeEvent(QResizeEvent*  e);
virtual void showEvent(QShowEvent*  e);
virtual void focusInEvent(QFocusEvent*  e);
virtual void changeEvent(QEvent*  e);
virtual void hideEvent(QHideEvent*  e);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  e);
virtual void contextMenuEvent(QContextMenuEvent*  e);
virtual void wheelEvent(QWheelEvent*  e);
virtual void focusOutEvent(QFocusEvent*  e);
virtual bool  event(QEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QComboBox : public QComboBox
{ public:
inline void promoted_mouseReleaseEvent(QMouseEvent*  e) { QComboBox::mouseReleaseEvent(e); }
inline void promoted_keyPressEvent(QKeyEvent*  e) { QComboBox::keyPressEvent(e); }
inline void promoted_hidePopup() { QComboBox::hidePopup(); }
inline void promoted_showPopup() { QComboBox::showPopup(); }
inline void promoted_mousePressEvent(QMouseEvent*  e) { QComboBox::mousePressEvent(e); }
inline void promoted_keyReleaseEvent(QKeyEvent*  e) { QComboBox::keyReleaseEvent(e); }
inline QVariant  promoted_inputMethodQuery(Qt::InputMethodQuery  arg__1) const { return QComboBox::inputMethodQuery(arg__1); }
inline void promoted_resizeEvent(QResizeEvent*  e) { QComboBox::resizeEvent(e); }
inline void promoted_showEvent(QShowEvent*  e) { QComboBox::showEvent(e); }
inline void promoted_focusInEvent(QFocusEvent*  e) { QComboBox::focusInEvent(e); }
inline void promoted_changeEvent(QEvent*  e) { QComboBox::changeEvent(e); }
inline void promoted_hideEvent(QHideEvent*  e) { QComboBox::hideEvent(e); }
inline void promoted_inputMethodEvent(QInputMethodEvent*  arg__1) { QComboBox::inputMethodEvent(arg__1); }
inline void promoted_paintEvent(QPaintEvent*  e) { QComboBox::paintEvent(e); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  e) { QComboBox::contextMenuEvent(e); }
inline void promoted_wheelEvent(QWheelEvent*  e) { QComboBox::wheelEvent(e); }
inline void promoted_focusOutEvent(QFocusEvent*  e) { QComboBox::focusOutEvent(e); }
inline bool  promoted_event(QEvent*  event) { return QComboBox::event(event); }
};

class PythonQtWrapper_QComboBox : public QObject
{ Q_OBJECT
public:
public slots:
QComboBox* new_QComboBox(QWidget*  parent = 0);
void delete_QComboBox(QComboBox* obj) { delete obj; } 
   int  maxVisibleItems(QComboBox* theWrappedObject) const;
   void setLineEdit(QComboBox* theWrappedObject, QLineEdit*  edit);
   int  maxCount(QComboBox* theWrappedObject) const;
   void setDuplicatesEnabled(QComboBox* theWrappedObject, bool  enable);
   void mouseReleaseEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   bool  isEditable(QComboBox* theWrappedObject) const;
   QModelIndex  rootModelIndex(QComboBox* theWrappedObject) const;
   void keyPressEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   void hidePopup(QComboBox* theWrappedObject);
   QComboBox::SizeAdjustPolicy  sizeAdjustPolicy(QComboBox* theWrappedObject) const;
   void showPopup(QComboBox* theWrappedObject);
   QString  itemText(QComboBox* theWrappedObject, int  index) const;
   QVariant  itemData(QComboBox* theWrappedObject, int  index, int  role = Qt::UserRole) const;
   int  minimumContentsLength(QComboBox* theWrappedObject) const;
   void setModel(QComboBox* theWrappedObject, QAbstractItemModel*  model);
   QAbstractItemModel*  model(QComboBox* theWrappedObject) const;
   void insertItems(QComboBox* theWrappedObject, int  index, const QStringList&  texts);
   void setEditable(QComboBox* theWrappedObject, bool  editable);
   void mousePressEvent(QComboBox* theWrappedObject, QMouseEvent*  e);
   void setView(QComboBox* theWrappedObject, QAbstractItemView*  itemView);
   void setIconSize(QComboBox* theWrappedObject, const QSize&  size);
   int  findData(QComboBox* theWrappedObject, const QVariant&  data, int  role = Qt::UserRole, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void setSizeAdjustPolicy(QComboBox* theWrappedObject, QComboBox::SizeAdjustPolicy  policy);
   void keyReleaseEvent(QComboBox* theWrappedObject, QKeyEvent*  e);
   void setInsertPolicy(QComboBox* theWrappedObject, QComboBox::InsertPolicy  policy);
   void setCompleter(QComboBox* theWrappedObject, QCompleter*  c);
   int  findText(QComboBox* theWrappedObject, const QString&  text, Qt::MatchFlags  flags = Qt::MatchExactly|Qt::MatchCaseSensitive) const;
   void insertSeparator(QComboBox* theWrappedObject, int  index);
   int  currentIndex(QComboBox* theWrappedObject) const;
   QCompleter*  completer(QComboBox* theWrappedObject) const;
   void addItem(QComboBox* theWrappedObject, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void addItem(QComboBox* theWrappedObject, const QString&  text, const QVariant&  userData = QVariant());
   void setItemData(QComboBox* theWrappedObject, int  index, const QVariant&  value, int  role = Qt::UserRole);
   QVariant  inputMethodQuery(QComboBox* theWrappedObject, Qt::InputMethodQuery  arg__1) const;
   void resizeEvent(QComboBox* theWrappedObject, QResizeEvent*  e);
   void showEvent(QComboBox* theWrappedObject, QShowEvent*  e);
   void focusInEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   QSize  minimumSizeHint(QComboBox* theWrappedObject) const;
   void setMaxCount(QComboBox* theWrappedObject, int  max);
   QLineEdit*  lineEdit(QComboBox* theWrappedObject) const;
   bool  hasFrame(QComboBox* theWrappedObject) const;
   void setItemDelegate(QComboBox* theWrappedObject, QAbstractItemDelegate*  delegate);
   void setMinimumContentsLength(QComboBox* theWrappedObject, int  characters);
   QSize  sizeHint(QComboBox* theWrappedObject) const;
   QSize  iconSize(QComboBox* theWrappedObject) const;
   void setItemText(QComboBox* theWrappedObject, int  index, const QString&  text);
   void setItemIcon(QComboBox* theWrappedObject, int  index, const QIcon&  icon);
   void changeEvent(QComboBox* theWrappedObject, QEvent*  e);
   void hideEvent(QComboBox* theWrappedObject, QHideEvent*  e);
   void addItems(QComboBox* theWrappedObject, const QStringList&  texts);
   QString  currentText(QComboBox* theWrappedObject) const;
   void inputMethodEvent(QComboBox* theWrappedObject, QInputMethodEvent*  arg__1);
   void setMaxVisibleItems(QComboBox* theWrappedObject, int  maxItems);
   QAbstractItemDelegate*  itemDelegate(QComboBox* theWrappedObject) const;
   void setValidator(QComboBox* theWrappedObject, const QValidator*  v);
   void setModelColumn(QComboBox* theWrappedObject, int  visibleColumn);
   void setFrame(QComboBox* theWrappedObject, bool  arg__1);
   int  count(QComboBox* theWrappedObject) const;
   bool  duplicatesEnabled(QComboBox* theWrappedObject) const;
   int  modelColumn(QComboBox* theWrappedObject) const;
   void paintEvent(QComboBox* theWrappedObject, QPaintEvent*  e);
   void insertItem(QComboBox* theWrappedObject, int  index, const QIcon&  icon, const QString&  text, const QVariant&  userData = QVariant());
   void insertItem(QComboBox* theWrappedObject, int  index, const QString&  text, const QVariant&  userData = QVariant());
   void contextMenuEvent(QComboBox* theWrappedObject, QContextMenuEvent*  e);
   void setRootModelIndex(QComboBox* theWrappedObject, const QModelIndex&  index);
   void wheelEvent(QComboBox* theWrappedObject, QWheelEvent*  e);
   QIcon  itemIcon(QComboBox* theWrappedObject, int  index) const;
   void focusOutEvent(QComboBox* theWrappedObject, QFocusEvent*  e);
   const QValidator*  validator(QComboBox* theWrappedObject) const;
   QComboBox::InsertPolicy  insertPolicy(QComboBox* theWrappedObject) const;
   QAbstractItemView*  view(QComboBox* theWrappedObject) const;
   bool  event(QComboBox* theWrappedObject, QEvent*  event);
   void removeItem(QComboBox* theWrappedObject, int  index);
};





class PythonQtShell_QCommandLinkButton : public QCommandLinkButton
{
public:
    PythonQtShell_QCommandLinkButton(QWidget*  parent = 0):QCommandLinkButton(parent),_wrapper(NULL) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, QWidget*  parent = 0):QCommandLinkButton(text, parent),_wrapper(NULL) {};
    PythonQtShell_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = 0):QCommandLinkButton(text, description, parent),_wrapper(NULL) {};

virtual void paintEvent(QPaintEvent*  arg__1);
virtual bool  event(QEvent*  e);
virtual int  heightForWidth(int  arg__1) const;
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mousePressEvent(QMouseEvent*  e);
virtual void checkStateSet();
virtual void changeEvent(QEvent*  e);
virtual bool  hitButton(const QPoint&  pos) const;
virtual void timerEvent(QTimerEvent*  e);
virtual void mouseReleaseEvent(QMouseEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  e);
virtual void nextCheckState();
virtual void keyReleaseEvent(QKeyEvent*  e);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCommandLinkButton : public QCommandLinkButton
{ public:
inline void promoted_paintEvent(QPaintEvent*  arg__1) { QCommandLinkButton::paintEvent(arg__1); }
inline bool  promoted_event(QEvent*  e) { return QCommandLinkButton::event(e); }
inline int  promoted_heightForWidth(int  arg__1) const { return QCommandLinkButton::heightForWidth(arg__1); }
};

class PythonQtWrapper_QCommandLinkButton : public QObject
{ Q_OBJECT
public:
public slots:
QCommandLinkButton* new_QCommandLinkButton(QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, QWidget*  parent = 0);
QCommandLinkButton* new_QCommandLinkButton(const QString&  text, const QString&  description, QWidget*  parent = 0);
void delete_QCommandLinkButton(QCommandLinkButton* obj) { delete obj; } 
   void paintEvent(QCommandLinkButton* theWrappedObject, QPaintEvent*  arg__1);
   bool  event(QCommandLinkButton* theWrappedObject, QEvent*  e);
   void setDescription(QCommandLinkButton* theWrappedObject, const QString&  description);
   QString  description(QCommandLinkButton* theWrappedObject) const;
   int  heightForWidth(QCommandLinkButton* theWrappedObject, int  arg__1) const;
};





class PythonQtShell_QCommonStyle : public QCommonStyle
{
public:
    PythonQtShell_QCommonStyle():QCommonStyle(),_wrapper(NULL) {};

virtual void drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual QSize  sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
virtual QPixmap  generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
virtual int  pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
virtual QRect  subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
virtual int  styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
virtual QStyle::SubControl  hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
virtual void drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void unpolish(QApplication*  application);
virtual void unpolish(QWidget*  widget);
virtual void drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
virtual void polish(QWidget*  widget);
virtual void polish(QApplication*  app);
virtual void polish(QPalette&  arg__1);
virtual QRect  subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
virtual void drawItemPixmap(QPainter*  painter, const QRect&  rect, int  alignment, const QPixmap&  pixmap) const;
virtual QRect  itemPixmapRect(const QRect&  r, int  flags, const QPixmap&  pixmap) const;
virtual void drawItemText(QPainter*  painter, const QRect&  rect, int  flags, const QPalette&  pal, bool  enabled, const QString&  text, QPalette::ColorRole  textRole) const;
virtual QPixmap  standardPixmap(QStyle::StandardPixmap  standardPixmap, const QStyleOption*  opt, const QWidget*  widget) const;
virtual QPalette  standardPalette() const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCommonStyle : public QCommonStyle
{ public:
inline void promoted_drawControl(QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawControl(element, opt, p, w); }
inline QSize  promoted_sizeFromContents(QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const { return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget); }
inline QPixmap  promoted_generatedIconPixmap(QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const { return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt); }
inline int  promoted_pixelMetric(QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const { return QCommonStyle::pixelMetric(m, opt, widget); }
inline QRect  promoted_subControlRect(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const { return QCommonStyle::subControlRect(cc, opt, sc, w); }
inline int  promoted_styleHint(QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const { return QCommonStyle::styleHint(sh, opt, w, shret); }
inline QStyle::SubControl  promoted_hitTestComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const { return QCommonStyle::hitTestComplexControl(cc, opt, pt, w); }
inline void promoted_drawPrimitive(QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawPrimitive(pe, opt, p, w); }
inline void promoted_unpolish(QApplication*  application) { QCommonStyle::unpolish(application); }
inline void promoted_unpolish(QWidget*  widget) { QCommonStyle::unpolish(widget); }
inline void promoted_drawComplexControl(QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const { QCommonStyle::drawComplexControl(cc, opt, p, w); }
inline void promoted_polish(QWidget*  widget) { QCommonStyle::polish(widget); }
inline void promoted_polish(QApplication*  app) { QCommonStyle::polish(app); }
inline void promoted_polish(QPalette&  arg__1) { QCommonStyle::polish(arg__1); }
inline QRect  promoted_subElementRect(QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const { return QCommonStyle::subElementRect(r, opt, widget); }
};

class PythonQtWrapper_QCommonStyle : public QObject
{ Q_OBJECT
public:
public slots:
QCommonStyle* new_QCommonStyle();
void delete_QCommonStyle(QCommonStyle* obj) { delete obj; } 
   void drawControl(QCommonStyle* theWrappedObject, QStyle::ControlElement  element, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   QSize  sizeFromContents(QCommonStyle* theWrappedObject, QStyle::ContentsType  ct, const QStyleOption*  opt, const QSize&  contentsSize, const QWidget*  widget = 0) const;
   QPixmap  generatedIconPixmap(QCommonStyle* theWrappedObject, QIcon::Mode  iconMode, const QPixmap&  pixmap, const QStyleOption*  opt) const;
   int  pixelMetric(QCommonStyle* theWrappedObject, QStyle::PixelMetric  m, const QStyleOption*  opt = 0, const QWidget*  widget = 0) const;
   QRect  subControlRect(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QStyle::SubControl  sc, const QWidget*  w = 0) const;
   int  styleHint(QCommonStyle* theWrappedObject, QStyle::StyleHint  sh, const QStyleOption*  opt = 0, const QWidget*  w = 0, QStyleHintReturn*  shret = 0) const;
   QStyle::SubControl  hitTestComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, const QPoint&  pt, const QWidget*  w = 0) const;
   void drawPrimitive(QCommonStyle* theWrappedObject, QStyle::PrimitiveElement  pe, const QStyleOption*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void unpolish(QCommonStyle* theWrappedObject, QApplication*  application);
   void unpolish(QCommonStyle* theWrappedObject, QWidget*  widget);
   void drawComplexControl(QCommonStyle* theWrappedObject, QStyle::ComplexControl  cc, const QStyleOptionComplex*  opt, QPainter*  p, const QWidget*  w = 0) const;
   void polish(QCommonStyle* theWrappedObject, QWidget*  widget);
   void polish(QCommonStyle* theWrappedObject, QApplication*  app);
   void polish(QCommonStyle* theWrappedObject, QPalette&  arg__1);
   QRect  subElementRect(QCommonStyle* theWrappedObject, QStyle::SubElement  r, const QStyleOption*  opt, const QWidget*  widget = 0) const;
};





class PythonQtShell_QCompleter : public QCompleter
{
public:
    PythonQtShell_QCompleter(QAbstractItemModel*  model, QObject*  parent = 0):QCompleter(model, parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(QObject*  parent = 0):QCompleter(parent),_wrapper(NULL) {};
    PythonQtShell_QCompleter(const QStringList&  completions, QObject*  parent = 0):QCompleter(completions, parent),_wrapper(NULL) {};

virtual QStringList  splitPath(const QString&  path) const;
virtual QString  pathFromIndex(const QModelIndex&  index) const;
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  o, QEvent*  e);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QCompleter : public QCompleter
{ public:
inline QStringList  promoted_splitPath(const QString&  path) const { return QCompleter::splitPath(path); }
inline QString  promoted_pathFromIndex(const QModelIndex&  index) const { return QCompleter::pathFromIndex(index); }
inline bool  promoted_event(QEvent*  arg__1) { return QCompleter::event(arg__1); }
inline bool  promoted_eventFilter(QObject*  o, QEvent*  e) { return QCompleter::eventFilter(o, e); }
};

class PythonQtWrapper_QCompleter : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ModelSorting CompletionMode )
enum ModelSorting{
  UnsortedModel = QCompleter::UnsortedModel,   CaseSensitivelySortedModel = QCompleter::CaseSensitivelySortedModel,   CaseInsensitivelySortedModel = QCompleter::CaseInsensitivelySortedModel};
enum CompletionMode{
  PopupCompletion = QCompleter::PopupCompletion,   UnfilteredPopupCompletion = QCompleter::UnfilteredPopupCompletion,   InlineCompletion = QCompleter::InlineCompletion};
public slots:
QCompleter* new_QCompleter(QAbstractItemModel*  model, QObject*  parent = 0);
QCompleter* new_QCompleter(QObject*  parent = 0);
QCompleter* new_QCompleter(const QStringList&  completions, QObject*  parent = 0);
void delete_QCompleter(QCompleter* obj) { delete obj; } 
   QAbstractItemModel*  model(QCompleter* theWrappedObject) const;
   bool  wrapAround(QCompleter* theWrappedObject) const;
   QString  currentCompletion(QCompleter* theWrappedObject) const;
   void setCompletionMode(QCompleter* theWrappedObject, QCompleter::CompletionMode  mode);
   int  completionCount(QCompleter* theWrappedObject) const;
   QStringList  splitPath(QCompleter* theWrappedObject, const QString&  path) const;
   QModelIndex  currentIndex(QCompleter* theWrappedObject) const;
   QAbstractItemView*  popup(QCompleter* theWrappedObject) const;
   int  currentRow(QCompleter* theWrappedObject) const;
   int  completionColumn(QCompleter* theWrappedObject) const;
   void setCompletionRole(QCompleter* theWrappedObject, int  role);
   void setWidget(QCompleter* theWrappedObject, QWidget*  widget);
   Qt::CaseSensitivity  caseSensitivity(QCompleter* theWrappedObject) const;
   void setMaxVisibleItems(QCompleter* theWrappedObject, int  maxItems);
   QCompleter::ModelSorting  modelSorting(QCompleter* theWrappedObject) const;
   QString  pathFromIndex(QCompleter* theWrappedObject, const QModelIndex&  index) const;
   void setModelSorting(QCompleter* theWrappedObject, QCompleter::ModelSorting  sorting);
   QWidget*  widget(QCompleter* theWrappedObject) const;
   void setCaseSensitivity(QCompleter* theWrappedObject, Qt::CaseSensitivity  caseSensitivity);
   void setModel(QCompleter* theWrappedObject, QAbstractItemModel*  c);
   QCompleter::CompletionMode  completionMode(QCompleter* theWrappedObject) const;
   int  maxVisibleItems(QCompleter* theWrappedObject) const;
   QString  completionPrefix(QCompleter* theWrappedObject) const;
   bool  setCurrentRow(QCompleter* theWrappedObject, int  row);
   int  completionRole(QCompleter* theWrappedObject) const;
   void setPopup(QCompleter* theWrappedObject, QAbstractItemView*  popup);
   QAbstractItemModel*  completionModel(QCompleter* theWrappedObject) const;
   bool  event(QCompleter* theWrappedObject, QEvent*  arg__1);
   bool  eventFilter(QCompleter* theWrappedObject, QObject*  o, QEvent*  e);
   void setCompletionColumn(QCompleter* theWrappedObject, int  column);
};





class PythonQtWrapper_QConicalGradient : public QObject
{ Q_OBJECT
public:
public slots:
QConicalGradient* new_QConicalGradient();
QConicalGradient* new_QConicalGradient(const QPointF&  center, qreal  startAngle);
QConicalGradient* new_QConicalGradient(qreal  cx, qreal  cy, qreal  startAngle);
QConicalGradient* new_QConicalGradient(const QConicalGradient& other) {
QConicalGradient* a = new QConicalGradient();
*((QConicalGradient*)a) = other;
return a; }
void delete_QConicalGradient(QConicalGradient* obj) { delete obj; } 
   void setAngle(QConicalGradient* theWrappedObject, qreal  angle);
   QPointF  center(QConicalGradient* theWrappedObject) const;
   void setCenter(QConicalGradient* theWrappedObject, qreal  x, qreal  y);
   void setCenter(QConicalGradient* theWrappedObject, const QPointF&  center);
   qreal  angle(QConicalGradient* theWrappedObject) const;
};





class PythonQtShell_QContextMenuEvent : public QContextMenuEvent
{
public:
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos):QContextMenuEvent(reason, pos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos):QContextMenuEvent(reason, pos, globalPos),_wrapper(NULL) {};
    PythonQtShell_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers):QContextMenuEvent(reason, pos, globalPos, modifiers),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QContextMenuEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Reason )
enum Reason{
  Mouse = QContextMenuEvent::Mouse,   Keyboard = QContextMenuEvent::Keyboard,   Other = QContextMenuEvent::Other};
public slots:
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos);
QContextMenuEvent* new_QContextMenuEvent(QContextMenuEvent::Reason  reason, const QPoint&  pos, const QPoint&  globalPos, Qt::KeyboardModifiers  modifiers);
void delete_QContextMenuEvent(QContextMenuEvent* obj) { delete obj; } 
   int  x(QContextMenuEvent* theWrappedObject) const;
   int  y(QContextMenuEvent* theWrappedObject) const;
   QContextMenuEvent::Reason  reason(QContextMenuEvent* theWrappedObject) const;
   const QPoint*  globalPos(QContextMenuEvent* theWrappedObject) const;
   int  globalX(QContextMenuEvent* theWrappedObject) const;
   int  globalY(QContextMenuEvent* theWrappedObject) const;
   const QPoint*  pos(QContextMenuEvent* theWrappedObject) const;
};





class PythonQtShell_QDataWidgetMapper : public QDataWidgetMapper
{
public:
    PythonQtShell_QDataWidgetMapper(QObject*  parent = 0):QDataWidgetMapper(parent),_wrapper(NULL) {};

virtual void setCurrentIndex(int  index);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDataWidgetMapper : public QDataWidgetMapper
{ public:
inline void promoted_setCurrentIndex(int  index) { QDataWidgetMapper::setCurrentIndex(index); }
};

class PythonQtWrapper_QDataWidgetMapper : public QObject
{ Q_OBJECT
public:
public slots:
QDataWidgetMapper* new_QDataWidgetMapper(QObject*  parent = 0);
void delete_QDataWidgetMapper(QDataWidgetMapper* obj) { delete obj; } 
   QAbstractItemModel*  model(QDataWidgetMapper* theWrappedObject) const;
   void setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy);
   QByteArray  mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   QWidget*  mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const;
   QDataWidgetMapper::SubmitPolicy  submitPolicy(QDataWidgetMapper* theWrappedObject) const;
   void setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate);
   QAbstractItemDelegate*  itemDelegate(QDataWidgetMapper* theWrappedObject) const;
   void setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model);
   void removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget);
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName);
   Qt::Orientation  orientation(QDataWidgetMapper* theWrappedObject) const;
   void addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section);
   int  mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const;
   void clearMapping(QDataWidgetMapper* theWrappedObject);
   void setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation);
   void setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index);
   int  currentIndex(QDataWidgetMapper* theWrappedObject) const;
   QModelIndex  rootIndex(QDataWidgetMapper* theWrappedObject) const;
};





class PythonQtShell_QDateEdit : public QDateEdit
{
public:
    PythonQtShell_QDateEdit(QWidget*  parent = 0):QDateEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QDateEdit(const QDate&  date, QWidget*  parent = 0):QDateEdit(date, parent),_wrapper(NULL) {};

virtual void wheelEvent(QWheelEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void mousePressEvent(QMouseEvent*  event);
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual void clear();
virtual void stepBy(int  steps);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual bool  focusNextPrevChild(bool  next);
virtual void fixup(QString&  input) const;
virtual void focusInEvent(QFocusEvent*  event);
virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDateEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateEdit* new_QDateEdit(QWidget*  parent = 0);
QDateEdit* new_QDateEdit(const QDate&  date, QWidget*  parent = 0);
void delete_QDateEdit(QDateEdit* obj) { delete obj; } 
};





class PythonQtShell_QDateTimeEdit : public QDateTimeEdit
{
public:
    PythonQtShell_QDateTimeEdit(QWidget*  parent = 0):QDateTimeEdit(parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDate&  d, QWidget*  parent = 0):QDateTimeEdit(d, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = 0):QDateTimeEdit(dt, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QTime&  t, QWidget*  parent = 0):QDateTimeEdit(t, parent),_wrapper(NULL) {};
    PythonQtShell_QDateTimeEdit(const QVariant&  val, QVariant::Type  parserType, QWidget*  parent = 0):QDateTimeEdit(val, parserType, parent),_wrapper(NULL) {};

virtual void keyPressEvent(QKeyEvent*  event);
virtual void clear();
virtual void mousePressEvent(QMouseEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual QDateTime  dateTimeFromText(const QString&  text) const;
virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual void stepBy(int  steps);
virtual void focusInEvent(QFocusEvent*  event);
virtual QString  textFromDateTime(const QDateTime&  dt) const;
virtual void fixup(QString&  input) const;
virtual void paintEvent(QPaintEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);
virtual bool  focusNextPrevChild(bool  next);
virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void showEvent(QShowEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDateTimeEdit : public QDateTimeEdit
{ public:
inline void promoted_keyPressEvent(QKeyEvent*  event) { QDateTimeEdit::keyPressEvent(event); }
inline void promoted_clear() { QDateTimeEdit::clear(); }
inline void promoted_mousePressEvent(QMouseEvent*  event) { QDateTimeEdit::mousePressEvent(event); }
inline QAbstractSpinBox::StepEnabled  promoted_stepEnabled() const { return QDateTimeEdit::stepEnabled(); }
inline QDateTime  promoted_dateTimeFromText(const QString&  text) const { return QDateTimeEdit::dateTimeFromText(text); }
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QDateTimeEdit::validate(input, pos); }
inline void promoted_stepBy(int  steps) { QDateTimeEdit::stepBy(steps); }
inline void promoted_focusInEvent(QFocusEvent*  event) { QDateTimeEdit::focusInEvent(event); }
inline QString  promoted_textFromDateTime(const QDateTime&  dt) const { return QDateTimeEdit::textFromDateTime(dt); }
inline void promoted_fixup(QString&  input) const { QDateTimeEdit::fixup(input); }
inline void promoted_paintEvent(QPaintEvent*  event) { QDateTimeEdit::paintEvent(event); }
inline void promoted_wheelEvent(QWheelEvent*  event) { QDateTimeEdit::wheelEvent(event); }
inline bool  promoted_focusNextPrevChild(bool  next) { return QDateTimeEdit::focusNextPrevChild(next); }
inline bool  promoted_event(QEvent*  event) { return QDateTimeEdit::event(event); }
};

class PythonQtWrapper_QDateTimeEdit : public QObject
{ Q_OBJECT
public:
public slots:
QDateTimeEdit* new_QDateTimeEdit(QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDate&  d, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QDateTime&  dt, QWidget*  parent = 0);
QDateTimeEdit* new_QDateTimeEdit(const QTime&  t, QWidget*  parent = 0);
void delete_QDateTimeEdit(QDateTimeEdit* obj) { delete obj; } 
   QString  displayFormat(QDateTimeEdit* theWrappedObject) const;
   void clearMinimumDate(QDateTimeEdit* theWrappedObject);
   void setSelectedSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   void clearMinimumDateTime(QDateTimeEdit* theWrappedObject);
   QDateTimeEdit::Section  sectionAt(QDateTimeEdit* theWrappedObject, int  index) const;
   void clearMaximumDate(QDateTimeEdit* theWrappedObject);
   QDate  minimumDate(QDateTimeEdit* theWrappedObject) const;
   void keyPressEvent(QDateTimeEdit* theWrappedObject, QKeyEvent*  event);
   void clear(QDateTimeEdit* theWrappedObject);
   void clearMaximumDateTime(QDateTimeEdit* theWrappedObject);
   void mousePressEvent(QDateTimeEdit* theWrappedObject, QMouseEvent*  event);
   QDate  date(QDateTimeEdit* theWrappedObject) const;
   QDateTimeEdit::Sections  displayedSections(QDateTimeEdit* theWrappedObject) const;
   QCalendarWidget*  calendarWidget(QDateTimeEdit* theWrappedObject) const;
   void clearMaximumTime(QDateTimeEdit* theWrappedObject);
   QTime  time(QDateTimeEdit* theWrappedObject) const;
   QAbstractSpinBox::StepEnabled  stepEnabled(QDateTimeEdit* theWrappedObject) const;
   void setCurrentSection(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section);
   QDateTime  minimumDateTime(QDateTimeEdit* theWrappedObject) const;
   QTime  minimumTime(QDateTimeEdit* theWrappedObject) const;
   QDateTime  dateTimeFromText(QDateTimeEdit* theWrappedObject, const QString&  text) const;
   QString  sectionText(QDateTimeEdit* theWrappedObject, QDateTimeEdit::Section  section) const;
   void setMinimumTime(QDateTimeEdit* theWrappedObject, const QTime&  min);
   void setMaximumDate(QDateTimeEdit* theWrappedObject, const QDate&  max);
   QValidator::State  validate(QDateTimeEdit* theWrappedObject, QString&  input, int&  pos) const;
   QDate  maximumDate(QDateTimeEdit* theWrappedObject) const;
   void stepBy(QDateTimeEdit* theWrappedObject, int  steps);
   void setDisplayFormat(QDateTimeEdit* theWrappedObject, const QString&  format);
   QTime  maximumTime(QDateTimeEdit* theWrappedObject) const;
   void setTimeSpec(QDateTimeEdit* theWrappedObject, Qt::TimeSpec  spec);
   int  sectionCount(QDateTimeEdit* theWrappedObject) const;
   void focusInEvent(QDateTimeEdit* theWrappedObject, QFocusEvent*  event);
   void setTimeRange(QDateTimeEdit* theWrappedObject, const QTime&  min, const QTime&  max);
   void setCalendarPopup(QDateTimeEdit* theWrappedObject, bool  enable);
   bool  calendarPopup(QDateTimeEdit* theWrappedObject) const;
   void setMinimumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   void setMaximumTime(QDateTimeEdit* theWrappedObject, const QTime&  max);
   void setMaximumDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt);
   QSize  sizeHint(QDateTimeEdit* theWrappedObject) const;
   void setDateRange(QDateTimeEdit* theWrappedObject, const QDate&  min, const QDate&  max);
   QDateTime  maximumDateTime(QDateTimeEdit* theWrappedObject) const;
   QString  textFromDateTime(QDateTimeEdit* theWrappedObject, const QDateTime&  dt) const;
   void fixup(QDateTimeEdit* theWrappedObject, QString&  input) const;
   void setCalendarWidget(QDateTimeEdit* theWrappedObject, QCalendarWidget*  calendarWidget);
   void setCurrentSectionIndex(QDateTimeEdit* theWrappedObject, int  index);
   void setMinimumDate(QDateTimeEdit* theWrappedObject, const QDate&  min);
   void clearMinimumTime(QDateTimeEdit* theWrappedObject);
   Qt::TimeSpec  timeSpec(QDateTimeEdit* theWrappedObject) const;
   void setDateTimeRange(QDateTimeEdit* theWrappedObject, const QDateTime&  min, const QDateTime&  max);
   void paintEvent(QDateTimeEdit* theWrappedObject, QPaintEvent*  event);
   QDateTime  dateTime(QDateTimeEdit* theWrappedObject) const;
   void wheelEvent(QDateTimeEdit* theWrappedObject, QWheelEvent*  event);
   QDateTimeEdit::Section  currentSection(QDateTimeEdit* theWrappedObject) const;
   bool  focusNextPrevChild(QDateTimeEdit* theWrappedObject, bool  next);
   bool  event(QDateTimeEdit* theWrappedObject, QEvent*  event);
   int  currentSectionIndex(QDateTimeEdit* theWrappedObject) const;
};





class PythonQtShell_QDesktopServices : public QDesktopServices
{
public:
    PythonQtShell_QDesktopServices():QDesktopServices(),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDesktopServices : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StandardLocation )
enum StandardLocation{
  DesktopLocation = QDesktopServices::DesktopLocation,   DocumentsLocation = QDesktopServices::DocumentsLocation,   FontsLocation = QDesktopServices::FontsLocation,   ApplicationsLocation = QDesktopServices::ApplicationsLocation,   MusicLocation = QDesktopServices::MusicLocation,   MoviesLocation = QDesktopServices::MoviesLocation,   PicturesLocation = QDesktopServices::PicturesLocation,   TempLocation = QDesktopServices::TempLocation,   HomeLocation = QDesktopServices::HomeLocation,   DataLocation = QDesktopServices::DataLocation,   CacheLocation = QDesktopServices::CacheLocation};
public slots:
QDesktopServices* new_QDesktopServices();
void delete_QDesktopServices(QDesktopServices* obj) { delete obj; } 
   QString  static_QDesktopServices_displayName(QDesktopServices::StandardLocation  type);
   void static_QDesktopServices_setUrlHandler(const QString&  scheme, QObject*  receiver, const char*  method);
   QString  static_QDesktopServices_storageLocation(QDesktopServices::StandardLocation  type);
   bool  static_QDesktopServices_openUrl(const QUrl&  url);
   void static_QDesktopServices_unsetUrlHandler(const QString&  scheme);
};





class PythonQtShell_QDesktopWidget : public QDesktopWidget
{
public:
    PythonQtShell_QDesktopWidget():QDesktopWidget(),_wrapper(NULL) {};

virtual void resizeEvent(QResizeEvent*  e);
virtual QSize  sizeHint() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDesktopWidget : public QDesktopWidget
{ public:
inline void promoted_resizeEvent(QResizeEvent*  e) { QDesktopWidget::resizeEvent(e); }
};

class PythonQtWrapper_QDesktopWidget : public QObject
{ Q_OBJECT
public:
public slots:
QDesktopWidget* new_QDesktopWidget();
void delete_QDesktopWidget(QDesktopWidget* obj) { delete obj; } 
   int  numScreens(QDesktopWidget* theWrappedObject) const;
   QWidget*  screen(QDesktopWidget* theWrappedObject, int  screen = -1);
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
   const QRect  screenGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   bool  isVirtualDesktop(QDesktopWidget* theWrappedObject) const;
   int  screenCount(QDesktopWidget* theWrappedObject) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QPoint&  arg__1) const;
   int  screenNumber(QDesktopWidget* theWrappedObject, const QWidget*  widget = 0) const;
   int  primaryScreen(QDesktopWidget* theWrappedObject) const;
   void resizeEvent(QDesktopWidget* theWrappedObject, QResizeEvent*  e);
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QWidget*  widget) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, const QPoint&  point) const;
   const QRect  availableGeometry(QDesktopWidget* theWrappedObject, int  screen = -1) const;
};





class PythonQtShell_QDial : public QDial
{
public:
    PythonQtShell_QDial(QWidget*  parent = 0):QDial(parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  e);
virtual void mouseMoveEvent(QMouseEvent*  me);
virtual void mousePressEvent(QMouseEvent*  me);
virtual void mouseReleaseEvent(QMouseEvent*  me);
virtual void resizeEvent(QResizeEvent*  re);
virtual void paintEvent(QPaintEvent*  pe);
virtual void wheelEvent(QWheelEvent*  e);
virtual void keyPressEvent(QKeyEvent*  ev);
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void changeEvent(QEvent*  e);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDial : public QDial
{ public:
inline bool  promoted_event(QEvent*  e) { return QDial::event(e); }
inline void promoted_mouseMoveEvent(QMouseEvent*  me) { QDial::mouseMoveEvent(me); }
inline void promoted_mousePressEvent(QMouseEvent*  me) { QDial::mousePressEvent(me); }
inline void promoted_mouseReleaseEvent(QMouseEvent*  me) { QDial::mouseReleaseEvent(me); }
inline void promoted_resizeEvent(QResizeEvent*  re) { QDial::resizeEvent(re); }
inline void promoted_paintEvent(QPaintEvent*  pe) { QDial::paintEvent(pe); }
};

class PythonQtWrapper_QDial : public QObject
{ Q_OBJECT
public:
public slots:
QDial* new_QDial(QWidget*  parent = 0);
void delete_QDial(QDial* obj) { delete obj; } 
   bool  event(QDial* theWrappedObject, QEvent*  e);
   void mouseMoveEvent(QDial* theWrappedObject, QMouseEvent*  me);
   void mousePressEvent(QDial* theWrappedObject, QMouseEvent*  me);
   QSize  sizeHint(QDial* theWrappedObject) const;
   qreal  notchTarget(QDial* theWrappedObject) const;
   void setNotchTarget(QDial* theWrappedObject, double  target);
   bool  wrapping(QDial* theWrappedObject) const;
   void mouseReleaseEvent(QDial* theWrappedObject, QMouseEvent*  me);
   QSize  minimumSizeHint(QDial* theWrappedObject) const;
   bool  notchesVisible(QDial* theWrappedObject) const;
   void resizeEvent(QDial* theWrappedObject, QResizeEvent*  re);
   int  notchSize(QDial* theWrappedObject) const;
   void paintEvent(QDial* theWrappedObject, QPaintEvent*  pe);
};





class PythonQtShell_QDialog : public QDialog
{
public:
    PythonQtShell_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0):QDialog(parent, f),_wrapper(NULL) {};

virtual void closeEvent(QCloseEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void reject();
virtual void accept();
virtual void done(int  arg__1);
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual int  devType() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void changeEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDialog : public QDialog
{ public:
inline void promoted_closeEvent(QCloseEvent*  arg__1) { QDialog::closeEvent(arg__1); }
inline void promoted_showEvent(QShowEvent*  arg__1) { QDialog::showEvent(arg__1); }
inline void promoted_reject() { QDialog::reject(); }
inline void promoted_accept() { QDialog::accept(); }
inline void promoted_done(int  arg__1) { QDialog::done(arg__1); }
inline void promoted_keyPressEvent(QKeyEvent*  arg__1) { QDialog::keyPressEvent(arg__1); }
inline bool  promoted_eventFilter(QObject*  arg__1, QEvent*  arg__2) { return QDialog::eventFilter(arg__1, arg__2); }
inline void promoted_resizeEvent(QResizeEvent*  arg__1) { QDialog::resizeEvent(arg__1); }
inline void promoted_contextMenuEvent(QContextMenuEvent*  arg__1) { QDialog::contextMenuEvent(arg__1); }
};

class PythonQtWrapper_QDialog : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DialogCode )
enum DialogCode{
  Rejected = QDialog::Rejected,   Accepted = QDialog::Accepted};
public slots:
QDialog* new_QDialog(QWidget*  parent = 0, Qt::WindowFlags  f = 0);
void delete_QDialog(QDialog* obj) { delete obj; } 
   void closeEvent(QDialog* theWrappedObject, QCloseEvent*  arg__1);
   int  result(QDialog* theWrappedObject) const;
   void setSizeGripEnabled(QDialog* theWrappedObject, bool  arg__1);
   void showEvent(QDialog* theWrappedObject, QShowEvent*  arg__1);
   void setVisible(QDialog* theWrappedObject, bool  visible);
   QSize  sizeHint(QDialog* theWrappedObject) const;
   void keyPressEvent(QDialog* theWrappedObject, QKeyEvent*  arg__1);
   bool  isSizeGripEnabled(QDialog* theWrappedObject) const;
   bool  eventFilter(QDialog* theWrappedObject, QObject*  arg__1, QEvent*  arg__2);
   QSize  minimumSizeHint(QDialog* theWrappedObject) const;
   void setModal(QDialog* theWrappedObject, bool  modal);
   void resizeEvent(QDialog* theWrappedObject, QResizeEvent*  arg__1);
   void contextMenuEvent(QDialog* theWrappedObject, QContextMenuEvent*  arg__1);
   void setResult(QDialog* theWrappedObject, int  r);
};





class PythonQtShell_QDialogButtonBox : public QDialogButtonBox
{
public:
    PythonQtShell_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation = Qt::Horizontal, QWidget*  parent = 0):QDialogButtonBox(buttons, orientation, parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(QWidget*  parent = 0):QDialogButtonBox(parent),_wrapper(NULL) {};
    PythonQtShell_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = 0):QDialogButtonBox(orientation, parent),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual QSize  sizeHint() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual void closeEvent(QCloseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void paintEvent(QPaintEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDialogButtonBox : public QDialogButtonBox
{ public:
inline bool  promoted_event(QEvent*  event) { return QDialogButtonBox::event(event); }
inline void promoted_changeEvent(QEvent*  event) { QDialogButtonBox::changeEvent(event); }
};

class PythonQtWrapper_QDialogButtonBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonLayout ButtonRole StandardButton )
Q_FLAGS(StandardButtons )
enum ButtonLayout{
  WinLayout = QDialogButtonBox::WinLayout,   MacLayout = QDialogButtonBox::MacLayout,   KdeLayout = QDialogButtonBox::KdeLayout,   GnomeLayout = QDialogButtonBox::GnomeLayout};
enum ButtonRole{
  InvalidRole = QDialogButtonBox::InvalidRole,   AcceptRole = QDialogButtonBox::AcceptRole,   RejectRole = QDialogButtonBox::RejectRole,   DestructiveRole = QDialogButtonBox::DestructiveRole,   ActionRole = QDialogButtonBox::ActionRole,   HelpRole = QDialogButtonBox::HelpRole,   YesRole = QDialogButtonBox::YesRole,   NoRole = QDialogButtonBox::NoRole,   ResetRole = QDialogButtonBox::ResetRole,   ApplyRole = QDialogButtonBox::ApplyRole,   NRoles = QDialogButtonBox::NRoles};
enum StandardButton{
  NoButton = QDialogButtonBox::NoButton,   Ok = QDialogButtonBox::Ok,   Save = QDialogButtonBox::Save,   SaveAll = QDialogButtonBox::SaveAll,   Open = QDialogButtonBox::Open,   Yes = QDialogButtonBox::Yes,   YesToAll = QDialogButtonBox::YesToAll,   No = QDialogButtonBox::No,   NoToAll = QDialogButtonBox::NoToAll,   Abort = QDialogButtonBox::Abort,   Retry = QDialogButtonBox::Retry,   Ignore = QDialogButtonBox::Ignore,   Close = QDialogButtonBox::Close,   Cancel = QDialogButtonBox::Cancel,   Discard = QDialogButtonBox::Discard,   Help = QDialogButtonBox::Help,   Apply = QDialogButtonBox::Apply,   Reset = QDialogButtonBox::Reset,   RestoreDefaults = QDialogButtonBox::RestoreDefaults,   FirstButton = QDialogButtonBox::FirstButton,   LastButton = QDialogButtonBox::LastButton};
Q_DECLARE_FLAGS(StandardButtons, StandardButton)
public slots:
QDialogButtonBox* new_QDialogButtonBox(QDialogButtonBox::StandardButtons  buttons, Qt::Orientation  orientation = Qt::Horizontal, QWidget*  parent = 0);
QDialogButtonBox* new_QDialogButtonBox(QWidget*  parent = 0);
QDialogButtonBox* new_QDialogButtonBox(Qt::Orientation  orientation, QWidget*  parent = 0);
void delete_QDialogButtonBox(QDialogButtonBox* obj) { delete obj; } 
   bool  event(QDialogButtonBox* theWrappedObject, QEvent*  event);
   QList<QAbstractButton* >  buttons(QDialogButtonBox* theWrappedObject) const;
   void changeEvent(QDialogButtonBox* theWrappedObject, QEvent*  event);
   bool  centerButtons(QDialogButtonBox* theWrappedObject) const;
   void removeButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button);
   void setStandardButtons(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButtons  buttons);
   QDialogButtonBox::ButtonRole  buttonRole(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   void setCenterButtons(QDialogButtonBox* theWrappedObject, bool  center);
   QDialogButtonBox::StandardButtons  standardButtons(QDialogButtonBox* theWrappedObject) const;
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  button);
   QPushButton*  addButton(QDialogButtonBox* theWrappedObject, const QString&  text, QDialogButtonBox::ButtonRole  role);
   void clear(QDialogButtonBox* theWrappedObject);
   void addButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button, QDialogButtonBox::ButtonRole  role);
   Qt::Orientation  orientation(QDialogButtonBox* theWrappedObject) const;
   QDialogButtonBox::StandardButton  standardButton(QDialogButtonBox* theWrappedObject, QAbstractButton*  button) const;
   void setOrientation(QDialogButtonBox* theWrappedObject, Qt::Orientation  orientation);
   QPushButton*  button(QDialogButtonBox* theWrappedObject, QDialogButtonBox::StandardButton  which) const;
};





class PythonQtShell_QDockWidget : public QDockWidget
{
public:
    PythonQtShell_QDockWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QDockWidget(parent, flags),_wrapper(NULL) {};
    PythonQtShell_QDockWidget(const QString&  title, QWidget*  parent = 0, Qt::WindowFlags  flags = 0):QDockWidget(title, parent, flags),_wrapper(NULL) {};

virtual bool  event(QEvent*  event);
virtual void changeEvent(QEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual QSize  sizeHint() const;
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual void mouseReleaseEvent(QMouseEvent*  arg__1);
virtual QPaintEngine*  paintEngine() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void contextMenuEvent(QContextMenuEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dropEvent(QDropEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual void mousePressEvent(QMouseEvent*  arg__1);
virtual int  devType() const;
virtual QSize  minimumSizeHint() const;
virtual void keyReleaseEvent(QKeyEvent*  arg__1);
virtual void focusInEvent(QFocusEvent*  arg__1);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void keyPressEvent(QKeyEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual void resizeEvent(QResizeEvent*  arg__1);
virtual void wheelEvent(QWheelEvent*  arg__1);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void showEvent(QShowEvent*  arg__1);
virtual void focusOutEvent(QFocusEvent*  arg__1);
virtual void mouseMoveEvent(QMouseEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void languageChange();
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual void enterEvent(QEvent*  arg__1);
virtual void hideEvent(QHideEvent*  arg__1);
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDockWidget : public QDockWidget
{ public:
inline bool  promoted_event(QEvent*  event) { return QDockWidget::event(event); }
inline void promoted_changeEvent(QEvent*  event) { QDockWidget::changeEvent(event); }
inline void promoted_closeEvent(QCloseEvent*  event) { QDockWidget::closeEvent(event); }
inline void promoted_paintEvent(QPaintEvent*  event) { QDockWidget::paintEvent(event); }
};

class PythonQtWrapper_QDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(DockWidgetFeature )
Q_FLAGS(DockWidgetFeatures )
enum DockWidgetFeature{
  DockWidgetClosable = QDockWidget::DockWidgetClosable,   DockWidgetMovable = QDockWidget::DockWidgetMovable,   DockWidgetFloatable = QDockWidget::DockWidgetFloatable,   DockWidgetVerticalTitleBar = QDockWidget::DockWidgetVerticalTitleBar,   DockWidgetFeatureMask = QDockWidget::DockWidgetFeatureMask,   AllDockWidgetFeatures = QDockWidget::AllDockWidgetFeatures,   NoDockWidgetFeatures = QDockWidget::NoDockWidgetFeatures,   Reserved = QDockWidget::Reserved};
Q_DECLARE_FLAGS(DockWidgetFeatures, DockWidgetFeature)
public slots:
QDockWidget* new_QDockWidget(QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
QDockWidget* new_QDockWidget(const QString&  title, QWidget*  parent = 0, Qt::WindowFlags  flags = 0);
void delete_QDockWidget(QDockWidget* obj) { delete obj; } 
   bool  event(QDockWidget* theWrappedObject, QEvent*  event);
   QAction*  toggleViewAction(QDockWidget* theWrappedObject) const;
   bool  isAreaAllowed(QDockWidget* theWrappedObject, Qt::DockWidgetArea  area) const;
   void changeEvent(QDockWidget* theWrappedObject, QEvent*  event);
   void closeEvent(QDockWidget* theWrappedObject, QCloseEvent*  event);
   Qt::DockWidgetAreas  allowedAreas(QDockWidget* theWrappedObject) const;
   void setFloating(QDockWidget* theWrappedObject, bool  floating);
   QWidget*  widget(QDockWidget* theWrappedObject) const;
   QWidget*  titleBarWidget(QDockWidget* theWrappedObject) const;
   void setTitleBarWidget(QDockWidget* theWrappedObject, QWidget*  widget);
   void setAllowedAreas(QDockWidget* theWrappedObject, Qt::DockWidgetAreas  areas);
   QDockWidget::DockWidgetFeatures  features(QDockWidget* theWrappedObject) const;
   bool  isFloating(QDockWidget* theWrappedObject) const;
   void paintEvent(QDockWidget* theWrappedObject, QPaintEvent*  event);
   void setFeatures(QDockWidget* theWrappedObject, QDockWidget::DockWidgetFeatures  features);
   void setWidget(QDockWidget* theWrappedObject, QWidget*  widget);
};





class PythonQtShell_QDoubleSpinBox : public QDoubleSpinBox
{
public:
    PythonQtShell_QDoubleSpinBox(QWidget*  parent = 0):QDoubleSpinBox(parent),_wrapper(NULL) {};

virtual QValidator::State  validate(QString&  input, int&  pos) const;
virtual QString  textFromValue(double  val) const;
virtual double  valueFromText(const QString&  text) const;
virtual void fixup(QString&  str) const;
virtual void changeEvent(QEvent*  event);
virtual bool  event(QEvent*  event);
virtual void mouseReleaseEvent(QMouseEvent*  event);
virtual void clear();
virtual void showEvent(QShowEvent*  event);
virtual QVariant  inputMethodQuery(Qt::InputMethodQuery  arg__1) const;
virtual void focusOutEvent(QFocusEvent*  event);
virtual void keyPressEvent(QKeyEvent*  event);
virtual void timerEvent(QTimerEvent*  event);
virtual void contextMenuEvent(QContextMenuEvent*  event);
virtual void mouseMoveEvent(QMouseEvent*  event);
virtual void paintEvent(QPaintEvent*  event);
virtual void focusInEvent(QFocusEvent*  event);
virtual void hideEvent(QHideEvent*  event);
virtual void closeEvent(QCloseEvent*  event);
virtual void resizeEvent(QResizeEvent*  event);
virtual void stepBy(int  steps);
virtual void mousePressEvent(QMouseEvent*  event);
virtual QAbstractSpinBox::StepEnabled  stepEnabled() const;
virtual void keyReleaseEvent(QKeyEvent*  event);
virtual void wheelEvent(QWheelEvent*  event);
virtual void tabletEvent(QTabletEvent*  arg__1);
virtual void actionEvent(QActionEvent*  arg__1);
virtual void dragEnterEvent(QDragEnterEvent*  arg__1);
virtual int  heightForWidth(int  arg__1) const;
virtual void mouseDoubleClickEvent(QMouseEvent*  arg__1);
virtual void leaveEvent(QEvent*  arg__1);
virtual void languageChange();
virtual int  devType() const;
virtual void dropEvent(QDropEvent*  arg__1);
virtual void inputMethodEvent(QInputMethodEvent*  arg__1);
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual QPaintEngine*  paintEngine() const;
virtual void enterEvent(QEvent*  arg__1);
virtual void moveEvent(QMoveEvent*  arg__1);
virtual void dragMoveEvent(QDragMoveEvent*  arg__1);
virtual void dragLeaveEvent(QDragLeaveEvent*  arg__1);
virtual bool  focusNextPrevChild(bool  next);
virtual void childEvent(QChildEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleSpinBox : public QDoubleSpinBox
{ public:
inline QValidator::State  promoted_validate(QString&  input, int&  pos) const { return QDoubleSpinBox::validate(input, pos); }
inline QString  promoted_textFromValue(double  val) const { return QDoubleSpinBox::textFromValue(val); }
inline double  promoted_valueFromText(const QString&  text) const { return QDoubleSpinBox::valueFromText(text); }
inline void promoted_fixup(QString&  str) const { QDoubleSpinBox::fixup(str); }
};

class PythonQtWrapper_QDoubleSpinBox : public QObject
{ Q_OBJECT
public:
public slots:
QDoubleSpinBox* new_QDoubleSpinBox(QWidget*  parent = 0);
void delete_QDoubleSpinBox(QDoubleSpinBox* obj) { delete obj; } 
   QValidator::State  validate(QDoubleSpinBox* theWrappedObject, QString&  input, int&  pos) const;
   int  decimals(QDoubleSpinBox* theWrappedObject) const;
   QString  suffix(QDoubleSpinBox* theWrappedObject) const;
   QString  textFromValue(QDoubleSpinBox* theWrappedObject, double  val) const;
   double  valueFromText(QDoubleSpinBox* theWrappedObject, const QString&  text) const;
   void setDecimals(QDoubleSpinBox* theWrappedObject, int  prec);
   double  singleStep(QDoubleSpinBox* theWrappedObject) const;
   double  value(QDoubleSpinBox* theWrappedObject) const;
   void fixup(QDoubleSpinBox* theWrappedObject, QString&  str) const;
   void setMinimum(QDoubleSpinBox* theWrappedObject, double  min);
   double  minimum(QDoubleSpinBox* theWrappedObject) const;
   void setRange(QDoubleSpinBox* theWrappedObject, double  min, double  max);
   void setSuffix(QDoubleSpinBox* theWrappedObject, const QString&  suffix);
   double  maximum(QDoubleSpinBox* theWrappedObject) const;
   void setMaximum(QDoubleSpinBox* theWrappedObject, double  max);
   void setSingleStep(QDoubleSpinBox* theWrappedObject, double  val);
   QString  cleanText(QDoubleSpinBox* theWrappedObject) const;
   QString  prefix(QDoubleSpinBox* theWrappedObject) const;
   void setPrefix(QDoubleSpinBox* theWrappedObject, const QString&  prefix);
};





class PythonQtShell_QDoubleValidator : public QDoubleValidator
{
public:
    PythonQtShell_QDoubleValidator(QObject*  parent):QDoubleValidator(parent),_wrapper(NULL) {};
    PythonQtShell_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent):QDoubleValidator(bottom, top, decimals, parent),_wrapper(NULL) {};

virtual void setRange(double  bottom, double  top, int  decimals = 0);
virtual QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
virtual void fixup(QString&  arg__1) const;
virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QDoubleValidator : public QDoubleValidator
{ public:
inline void promoted_setRange(double  bottom, double  top, int  decimals = 0) { QDoubleValidator::setRange(bottom, top, decimals); }
inline QValidator::State  promoted_validate(QString&  arg__1, int&  arg__2) const { return QDoubleValidator::validate(arg__1, arg__2); }
};

class PythonQtWrapper_QDoubleValidator : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Notation )
enum Notation{
  StandardNotation = QDoubleValidator::StandardNotation,   ScientificNotation = QDoubleValidator::ScientificNotation};
public slots:
QDoubleValidator* new_QDoubleValidator(QObject*  parent);
QDoubleValidator* new_QDoubleValidator(double  bottom, double  top, int  decimals, QObject*  parent);
void delete_QDoubleValidator(QDoubleValidator* obj) { delete obj; } 
   void setRange(QDoubleValidator* theWrappedObject, double  bottom, double  top, int  decimals = 0);
   QValidator::State  validate(QDoubleValidator* theWrappedObject, QString&  arg__1, int&  arg__2) const;
   void setNotation(QDoubleValidator* theWrappedObject, QDoubleValidator::Notation  arg__1);
   void setBottom(QDoubleValidator* theWrappedObject, double  arg__1);
   void setTop(QDoubleValidator* theWrappedObject, double  arg__1);
   int  decimals(QDoubleValidator* theWrappedObject) const;
   double  bottom(QDoubleValidator* theWrappedObject) const;
   QDoubleValidator::Notation  notation(QDoubleValidator* theWrappedObject) const;
   void setDecimals(QDoubleValidator* theWrappedObject, int  arg__1);
   double  top(QDoubleValidator* theWrappedObject) const;
};





class PythonQtShell_QDrag : public QDrag
{
public:
    PythonQtShell_QDrag(QWidget*  dragSource):QDrag(dragSource),_wrapper(NULL) {};

virtual void childEvent(QChildEvent*  arg__1);
virtual void timerEvent(QTimerEvent*  arg__1);
virtual void customEvent(QEvent*  arg__1);
virtual bool  event(QEvent*  arg__1);
virtual bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDrag : public QObject
{ Q_OBJECT
public:
public slots:
QDrag* new_QDrag(QWidget*  dragSource);
void delete_QDrag(QDrag* obj) { delete obj; } 
   QWidget*  source(QDrag* theWrappedObject) const;
   void setDragCursor(QDrag* theWrappedObject, const QPixmap&  cursor, Qt::DropAction  action);
   void setMimeData(QDrag* theWrappedObject, QMimeData*  data);
   QMimeData*  mimeData(QDrag* theWrappedObject) const;
   QPoint  hotSpot(QDrag* theWrappedObject) const;
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions, Qt::DropAction  defaultAction);
   Qt::DropAction  exec(QDrag* theWrappedObject, Qt::DropActions  supportedActions = Qt::MoveAction);
   QWidget*  target(QDrag* theWrappedObject) const;
   void setPixmap(QDrag* theWrappedObject, const QPixmap&  arg__1);
   void setHotSpot(QDrag* theWrappedObject, const QPoint&  hotspot);
   QPixmap  pixmap(QDrag* theWrappedObject) const;
};





class PythonQtWrapper_QDragEnterEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragEnterEvent* new_QDragEnterEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers);
void delete_QDragEnterEvent(QDragEnterEvent* obj) { delete obj; } 
};





class PythonQtWrapper_QDragLeaveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragLeaveEvent* new_QDragLeaveEvent();
void delete_QDragLeaveEvent(QDragLeaveEvent* obj) { delete obj; } 
};





class PythonQtShell_QDragMoveEvent : public QDragMoveEvent
{
public:
    PythonQtShell_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove):QDragMoveEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragMoveEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragMoveEvent* new_QDragMoveEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::DragMove);
void delete_QDragMoveEvent(QDragMoveEvent* obj) { delete obj; } 
   void ignore(QDragMoveEvent* theWrappedObject, const QRect&  r);
   void accept(QDragMoveEvent* theWrappedObject, const QRect&  r);
   QRect  answerRect(QDragMoveEvent* theWrappedObject) const;
};





class PythonQtShell_QDragResponseEvent : public QDragResponseEvent
{
public:
    PythonQtShell_QDragResponseEvent(bool  accepted):QDragResponseEvent(accepted),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDragResponseEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDragResponseEvent* new_QDragResponseEvent(bool  accepted);
void delete_QDragResponseEvent(QDragResponseEvent* obj) { delete obj; } 
   bool  dragAccepted(QDragResponseEvent* theWrappedObject) const;
};





class PythonQtShell_QDropEvent : public QDropEvent
{
public:
    PythonQtShell_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop):QDropEvent(pos, actions, data, buttons, modifiers, type),_wrapper(NULL) {};


  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QDropEvent : public QObject
{ Q_OBJECT
public:
public slots:
QDropEvent* new_QDropEvent(const QPoint&  pos, Qt::DropActions  actions, const QMimeData*  data, Qt::MouseButtons  buttons, Qt::KeyboardModifiers  modifiers, QEvent::Type  type = QEvent::Drop);
void delete_QDropEvent(QDropEvent* obj) { delete obj; } 
   Qt::DropAction  proposedAction(QDropEvent* theWrappedObject) const;
   const QMimeData*  mimeData(QDropEvent* theWrappedObject) const;
   void acceptProposedAction(QDropEvent* theWrappedObject);
   Qt::DropAction  dropAction(QDropEvent* theWrappedObject) const;
   Qt::KeyboardModifiers  keyboardModifiers(QDropEvent* theWrappedObject) const;
   QWidget*  source(QDropEvent* theWrappedObject) const;
   Qt::MouseButtons  mouseButtons(QDropEvent* theWrappedObject) const;
   void setDropAction(QDropEvent* theWrappedObject, Qt::DropAction  action);
   const QPoint*  pos(QDropEvent* theWrappedObject) const;
   Qt::DropActions  possibleActions(QDropEvent* theWrappedObject) const;
};


