#include <PythonQt.h>
#include <QBrush>
#include <QMatrix>
#include <QObject>
#include <QPainterPath>
#include <QPixmap>
#include <QStringList>
#include <QVariant>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcursor.h>
#include <qdatastream.h>
#include <qfont.h>
#include <qicon.h>
#include <qiconengine.h>
#include <qimage.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qline.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpixmap.h>
#include <qpoint.h>
#include <qpolygon.h>
#include <qrect.h>
#include <qregion.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qtextformat.h>
#include <qtransform.h>
#include <qvector.h>
#include <qwidget.h>



class PythonQtShell_QBitmap : public QBitmap
{
public:
    PythonQtShell_QBitmap():QBitmap(),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QPixmap&  arg__1):QBitmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QSize&  arg__1):QBitmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QBitmap(const QString&  fileName, const char*  format = 0):QBitmap(fileName, format),_wrapper(NULL) {};
    PythonQtShell_QBitmap(int  w, int  h):QBitmap(w, h),_wrapper(NULL) {};

virtual QPaintEngine*  paintEngine() const;
virtual int  devType() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtWrapper_QBitmap : public QObject
{ Q_OBJECT
public:
public slots:
QBitmap* new_QBitmap();
QBitmap* new_QBitmap(const QPixmap&  arg__1);
QBitmap* new_QBitmap(const QSize&  arg__1);
QBitmap* new_QBitmap(const QString&  fileName, const char*  format = 0);
QBitmap* new_QBitmap(int  w, int  h);
QBitmap* new_QBitmap(const QBitmap& other) {
PythonQtShell_QBitmap* a = new PythonQtShell_QBitmap();
*((QBitmap*)a) = other;
return a; }
void delete_QBitmap(QBitmap* obj) { delete obj; } 
   QBitmap  transformed(QBitmap* theWrappedObject, const QTransform&  matrix) const;
   QBitmap  static_QBitmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QBitmap  transformed(QBitmap* theWrappedObject, const QMatrix&  arg__1) const;
   void clear(QBitmap* theWrappedObject);
};





class PythonQtWrapper_QBrush : public QObject
{ Q_OBJECT
public:
public slots:
QBrush* new_QBrush();
QBrush* new_QBrush(Qt::BrushStyle  bs);
QBrush* new_QBrush(Qt::GlobalColor  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QBrush&  brush);
QBrush* new_QBrush(const QColor&  color, Qt::BrushStyle  bs = Qt::SolidPattern);
QBrush* new_QBrush(const QColor&  color, const QPixmap&  pixmap);
QBrush* new_QBrush(const QGradient&  gradient);
QBrush* new_QBrush(const QImage&  image);
QBrush* new_QBrush(const QPixmap&  pixmap);
void delete_QBrush(QBrush* obj) { delete obj; } 
   void setColor(QBrush* theWrappedObject, Qt::GlobalColor  color);
   void setMatrix(QBrush* theWrappedObject, const QMatrix&  mat);
   void setTextureImage(QBrush* theWrappedObject, const QImage&  image);
   QImage  textureImage(QBrush* theWrappedObject) const;
   QPixmap  texture(QBrush* theWrappedObject) const;
   bool  operator_equal(QBrush* theWrappedObject, const QBrush&  b) const;
   const QColor*  color(QBrush* theWrappedObject) const;
   void setStyle(QBrush* theWrappedObject, Qt::BrushStyle  arg__1);
   Qt::BrushStyle  style(QBrush* theWrappedObject) const;
   void setTexture(QBrush* theWrappedObject, const QPixmap&  pixmap);
   bool  isOpaque(QBrush* theWrappedObject) const;
   const QMatrix*  matrix(QBrush* theWrappedObject) const;
   const QGradient*  gradient(QBrush* theWrappedObject) const;
   void setColor(QBrush* theWrappedObject, const QColor&  color);
   QTransform  transform(QBrush* theWrappedObject) const;
   void setTransform(QBrush* theWrappedObject, const QTransform&  arg__1);
   void writeTo(QBrush* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QBrush* theWrappedObject, QDataStream&  arg__1);
    QString toString(QBrush*);
};





class PythonQtWrapper_QColor : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Spec )
enum Spec{
  Invalid = QColor::Invalid,   Rgb = QColor::Rgb,   Hsv = QColor::Hsv,   Cmyk = QColor::Cmyk};
public slots:
QColor* new_QColor();
QColor* new_QColor(Qt::GlobalColor  color);
QColor* new_QColor(const QColor&  color);
QColor* new_QColor(const QString&  name);
QColor* new_QColor(int  r, int  g, int  b, int  a = 255);
QColor* new_QColor(unsigned int  rgb);
void delete_QColor(QColor* obj) { delete obj; } 
   QString  name(QColor* theWrappedObject) const;
   QColor  static_QColor_fromCmykF(qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   void setBlue(QColor* theWrappedObject, int  blue);
   qreal  yellowF(QColor* theWrappedObject) const;
   QColor  lighter(QColor* theWrappedObject, int  f = 150) const;
   void setHsv(QColor* theWrappedObject, int  h, int  s, int  v, int  a = 255);
   QColor  toCmyk(QColor* theWrappedObject) const;
   qreal  cyanF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgb(int  r, int  g, int  b, int  a = 255);
   QColor  static_QColor_fromRgb(unsigned int  rgb);
   QColor  static_QColor_fromHsv(int  h, int  s, int  v, int  a = 255);
   QColor  toRgb(QColor* theWrappedObject) const;
   unsigned int  rgb(QColor* theWrappedObject) const;
   void setNamedColor(QColor* theWrappedObject, const QString&  name);
   QColor  darker(QColor* theWrappedObject, int  f = 200) const;
   QColor  convertTo(QColor* theWrappedObject, QColor::Spec  colorSpec) const;
   int  yellow(QColor* theWrappedObject) const;
   QColor  toHsv(QColor* theWrappedObject) const;
   void setHsvF(QColor* theWrappedObject, qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   void setAlphaF(QColor* theWrappedObject, qreal  alpha);
   int  black(QColor* theWrappedObject) const;
   qreal  hueF(QColor* theWrappedObject) const;
   qreal  blueF(QColor* theWrappedObject) const;
   int  green(QColor* theWrappedObject) const;
   int  hue(QColor* theWrappedObject) const;
   int  blue(QColor* theWrappedObject) const;
   qreal  magentaF(QColor* theWrappedObject) const;
   int  saturation(QColor* theWrappedObject) const;
   void setGreen(QColor* theWrappedObject, int  green);
   void setGreenF(QColor* theWrappedObject, qreal  green);
   void setAlpha(QColor* theWrappedObject, int  alpha);
   int  value(QColor* theWrappedObject) const;
   unsigned int  rgba(QColor* theWrappedObject) const;
   QColor  static_QColor_fromHsvF(qreal  h, qreal  s, qreal  v, qreal  a = 1.0);
   qreal  greenF(QColor* theWrappedObject) const;
   QColor  static_QColor_fromRgba(unsigned int  rgba);
   qreal  blackF(QColor* theWrappedObject) const;
   qreal  redF(QColor* theWrappedObject) const;
   bool  operator_equal(QColor* theWrappedObject, const QColor&  c) const;
   int  cyan(QColor* theWrappedObject) const;
   qreal  saturationF(QColor* theWrappedObject) const;
   void setCmyk(QColor* theWrappedObject, int  c, int  m, int  y, int  k, int  a = 255);
   bool  isValid(QColor* theWrappedObject) const;
   void setRgba(QColor* theWrappedObject, unsigned int  rgba);
   QColor::Spec  spec(QColor* theWrappedObject) const;
   qreal  alphaF(QColor* theWrappedObject) const;
   void setRed(QColor* theWrappedObject, int  red);
   QColor  static_QColor_fromRgbF(qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   void setRedF(QColor* theWrappedObject, qreal  red);
   QColor  static_QColor_fromCmyk(int  c, int  m, int  y, int  k, int  a = 255);
   int  alpha(QColor* theWrappedObject) const;
   void setCmykF(QColor* theWrappedObject, qreal  c, qreal  m, qreal  y, qreal  k, qreal  a = 1.0);
   void setBlueF(QColor* theWrappedObject, qreal  blue);
   int  red(QColor* theWrappedObject) const;
   int  magenta(QColor* theWrappedObject) const;
   qreal  valueF(QColor* theWrappedObject) const;
   void setRgbF(QColor* theWrappedObject, qreal  r, qreal  g, qreal  b, qreal  a = 1.0);
   QStringList  static_QColor_colorNames();
   void setRgb(QColor* theWrappedObject, unsigned int  rgb);
   void setRgb(QColor* theWrappedObject, int  r, int  g, int  b, int  a = 255);
   void writeTo(QColor* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QColor* theWrappedObject, QDataStream&  arg__1);
    QString toString(QColor*);
};





class PythonQtWrapper_QCursor : public QObject
{ Q_OBJECT
public:
public slots:
QCursor* new_QCursor();
QCursor* new_QCursor(Qt::CursorShape  shape);
QCursor* new_QCursor(const QBitmap&  bitmap, const QBitmap&  mask, int  hotX = -1, int  hotY = -1);
QCursor* new_QCursor(const QCursor&  cursor);
QCursor* new_QCursor(const QPixmap&  pixmap, int  hotX = -1, int  hotY = -1);
void delete_QCursor(QCursor* obj) { delete obj; } 
   void static_QCursor_setPos(const QPoint&  p);
   void static_QCursor_setPos(int  x, int  y);
   void setShape(QCursor* theWrappedObject, Qt::CursorShape  newShape);
   const QBitmap*  mask(QCursor* theWrappedObject) const;
   Qt::CursorShape  shape(QCursor* theWrappedObject) const;
   QPoint  hotSpot(QCursor* theWrappedObject) const;
   QPixmap  pixmap(QCursor* theWrappedObject) const;
   QPoint  static_QCursor_pos();
   const QBitmap*  bitmap(QCursor* theWrappedObject) const;
   void writeTo(QCursor* theWrappedObject, QDataStream&  outS);
   void readFrom(QCursor* theWrappedObject, QDataStream&  inS);
};





class PythonQtWrapper_QFont : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleStrategy SpacingType StyleHint Weight Capitalization Stretch Style )
enum StyleStrategy{
  PreferDefault = QFont::PreferDefault,   PreferBitmap = QFont::PreferBitmap,   PreferDevice = QFont::PreferDevice,   PreferOutline = QFont::PreferOutline,   ForceOutline = QFont::ForceOutline,   PreferMatch = QFont::PreferMatch,   PreferQuality = QFont::PreferQuality,   PreferAntialias = QFont::PreferAntialias,   NoAntialias = QFont::NoAntialias,   OpenGLCompatible = QFont::OpenGLCompatible,   NoFontMerging = QFont::NoFontMerging};
enum SpacingType{
  PercentageSpacing = QFont::PercentageSpacing,   AbsoluteSpacing = QFont::AbsoluteSpacing};
enum StyleHint{
  Helvetica = QFont::Helvetica,   SansSerif = QFont::SansSerif,   Times = QFont::Times,   Serif = QFont::Serif,   Courier = QFont::Courier,   TypeWriter = QFont::TypeWriter,   OldEnglish = QFont::OldEnglish,   Decorative = QFont::Decorative,   System = QFont::System,   AnyStyle = QFont::AnyStyle};
enum Weight{
  Light = QFont::Light,   Normal = QFont::Normal,   DemiBold = QFont::DemiBold,   Bold = QFont::Bold,   Black = QFont::Black};
enum Capitalization{
  MixedCase = QFont::MixedCase,   AllUppercase = QFont::AllUppercase,   AllLowercase = QFont::AllLowercase,   SmallCaps = QFont::SmallCaps,   Capitalize = QFont::Capitalize};
enum Stretch{
  UltraCondensed = QFont::UltraCondensed,   ExtraCondensed = QFont::ExtraCondensed,   Condensed = QFont::Condensed,   SemiCondensed = QFont::SemiCondensed,   Unstretched = QFont::Unstretched,   SemiExpanded = QFont::SemiExpanded,   Expanded = QFont::Expanded,   ExtraExpanded = QFont::ExtraExpanded,   UltraExpanded = QFont::UltraExpanded};
enum Style{
  StyleNormal = QFont::StyleNormal,   StyleItalic = QFont::StyleItalic,   StyleOblique = QFont::StyleOblique};
public slots:
QFont* new_QFont();
QFont* new_QFont(const QFont&  arg__1);
QFont* new_QFont(const QFont&  arg__1, QPaintDevice*  pd);
QFont* new_QFont(const QString&  family, int  pointSize = -1, int  weight = -1, bool  italic = false);
void delete_QFont(QFont* obj) { delete obj; } 
   void setItalic(QFont* theWrappedObject, bool  b);
   Qt::HANDLE  handle(QFont* theWrappedObject) const;
   bool  underline(QFont* theWrappedObject) const;
   void setKerning(QFont* theWrappedObject, bool  arg__1);
   QFont::Style  style(QFont* theWrappedObject) const;
   bool  fixedPitch(QFont* theWrappedObject) const;
   bool  bold(QFont* theWrappedObject) const;
   void resolve(QFont* theWrappedObject, uint  mask);
   QFont::SpacingType  letterSpacingType(QFont* theWrappedObject) const;
   uint  resolve(QFont* theWrappedObject) const;
   QFont  resolve(QFont* theWrappedObject, const QFont&  arg__1) const;
   qreal  wordSpacing(QFont* theWrappedObject) const;
   void static_QFont_insertSubstitutions(const QString&  arg__1, const QStringList&  arg__2);
   void setStretch(QFont* theWrappedObject, int  arg__1);
   void setLetterSpacing(QFont* theWrappedObject, QFont::SpacingType  type, qreal  spacing);
   void setUnderline(QFont* theWrappedObject, bool  arg__1);
   void setFixedPitch(QFont* theWrappedObject, bool  arg__1);
   void setRawName(QFont* theWrappedObject, const QString&  arg__1);
   qreal  pointSizeF(QFont* theWrappedObject) const;
   bool  italic(QFont* theWrappedObject) const;
   void setRawMode(QFont* theWrappedObject, bool  arg__1);
   QStringList  static_QFont_substitutes(const QString&  arg__1);
   void setStrikeOut(QFont* theWrappedObject, bool  arg__1);
   bool  kerning(QFont* theWrappedObject) const;
   QString  key(QFont* theWrappedObject) const;
   void setPointSize(QFont* theWrappedObject, int  arg__1);
   void static_QFont_removeSubstitution(const QString&  arg__1);
   void static_QFont_cleanup();
   QString  static_QFont_substitute(const QString&  arg__1);
   void setWordSpacing(QFont* theWrappedObject, qreal  spacing);
   QStringList  static_QFont_substitutions();
   void setStyle(QFont* theWrappedObject, QFont::Style  style);
   void setCapitalization(QFont* theWrappedObject, QFont::Capitalization  arg__1);
   bool  isCopyOf(QFont* theWrappedObject, const QFont&  arg__1) const;
   int  pointSize(QFont* theWrappedObject) const;
   int  pixelSize(QFont* theWrappedObject) const;
   void setStyleStrategy(QFont* theWrappedObject, QFont::StyleStrategy  s);
   void static_QFont_initialize();
   bool  fromString(QFont* theWrappedObject, const QString&  arg__1);
   void setPixelSize(QFont* theWrappedObject, int  arg__1);
   void setOverline(QFont* theWrappedObject, bool  arg__1);
   QString  family(QFont* theWrappedObject) const;
   QFont::StyleHint  styleHint(QFont* theWrappedObject) const;
   QString  defaultFamily(QFont* theWrappedObject) const;
   void setWeight(QFont* theWrappedObject, int  arg__1);
   QString  rawName(QFont* theWrappedObject) const;
   bool  operator_equal(QFont* theWrappedObject, const QFont&  arg__1) const;
   bool  rawMode(QFont* theWrappedObject) const;
   bool  operator_less(QFont* theWrappedObject, const QFont&  arg__1) const;
   void setFamily(QFont* theWrappedObject, const QString&  arg__1);
   QString  toString(QFont* theWrappedObject) const;
   void setStyleHint(QFont* theWrappedObject, QFont::StyleHint  arg__1, QFont::StyleStrategy  arg__2 = QFont::PreferDefault);
   bool  overline(QFont* theWrappedObject) const;
   void setBold(QFont* theWrappedObject, bool  arg__1);
   QString  lastResortFamily(QFont* theWrappedObject) const;
   int  stretch(QFont* theWrappedObject) const;
   qreal  letterSpacing(QFont* theWrappedObject) const;
   QFont::Capitalization  capitalization(QFont* theWrappedObject) const;
   QString  lastResortFont(QFont* theWrappedObject) const;
   int  weight(QFont* theWrappedObject) const;
   bool  strikeOut(QFont* theWrappedObject) const;
   bool  exactMatch(QFont* theWrappedObject) const;
   void setPointSizeF(QFont* theWrappedObject, qreal  arg__1);
   void static_QFont_insertSubstitution(const QString&  arg__1, const QString&  arg__2);
   QFont::StyleStrategy  styleStrategy(QFont* theWrappedObject) const;
   void static_QFont_cacheStatistics();
   void writeTo(QFont* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QFont* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QIcon : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Mode State )
enum Mode{
  Normal = QIcon::Normal,   Disabled = QIcon::Disabled,   Active = QIcon::Active,   Selected = QIcon::Selected};
enum State{
  On = QIcon::On,   Off = QIcon::Off};
public slots:
QIcon* new_QIcon();
QIcon* new_QIcon(QIconEngine*  engine);
QIcon* new_QIcon(QIconEngineV2*  engine);
QIcon* new_QIcon(const QIcon&  other);
QIcon* new_QIcon(const QPixmap&  pixmap);
QIcon* new_QIcon(const QString&  fileName);
void delete_QIcon(QIcon* obj) { delete obj; } 
   void paint(QIcon* theWrappedObject, QPainter*  painter, const QRect&  rect, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QSize  actualSize(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void addPixmap(QIcon* theWrappedObject, const QPixmap&  pixmap, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   void addFile(QIcon* theWrappedObject, const QString&  fileName, const QSize&  size = QSize(), QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off);
   bool  isNull(QIcon* theWrappedObject) const;
   void paint(QIcon* theWrappedObject, QPainter*  painter, int  x, int  y, int  w, int  h, Qt::Alignment  alignment = Qt::AlignCenter, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   qint64  cacheKey(QIcon* theWrappedObject) const;
   QPixmap  pixmap(QIcon* theWrappedObject, int  extent, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, int  w, int  h, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   QPixmap  pixmap(QIcon* theWrappedObject, const QSize&  size, QIcon::Mode  mode = QIcon::Normal, QIcon::State  state = QIcon::Off) const;
   void writeTo(QIcon* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QIcon* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtShell_QImage : public QImage
{
public:
    PythonQtShell_QImage():QImage(),_wrapper(NULL) {};
    PythonQtShell_QImage(const QImage&  arg__1):QImage(arg__1),_wrapper(NULL) {};
    PythonQtShell_QImage(const QSize&  size, QImage::Format  format):QImage(size, format),_wrapper(NULL) {};
    PythonQtShell_QImage(const QString&  fileName, const char*  format = 0):QImage(fileName, format),_wrapper(NULL) {};
    PythonQtShell_QImage(int  width, int  height, QImage::Format  format):QImage(width, height, format),_wrapper(NULL) {};

virtual QPaintEngine*  paintEngine() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  metric) const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QImage : public QImage
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QImage::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  metric) const { return QImage::metric(metric); }
inline int  promoted_devType() const { return QImage::devType(); }
};

class PythonQtWrapper_QImage : public QObject
{ Q_OBJECT
public:
Q_ENUMS(InvertMode Format )
enum InvertMode{
  InvertRgb = QImage::InvertRgb,   InvertRgba = QImage::InvertRgba};
enum Format{
  Format_Invalid = QImage::Format_Invalid,   Format_Mono = QImage::Format_Mono,   Format_MonoLSB = QImage::Format_MonoLSB,   Format_Indexed8 = QImage::Format_Indexed8,   Format_RGB32 = QImage::Format_RGB32,   Format_ARGB32 = QImage::Format_ARGB32,   Format_ARGB32_Premultiplied = QImage::Format_ARGB32_Premultiplied,   Format_RGB16 = QImage::Format_RGB16,   Format_ARGB8565_Premultiplied = QImage::Format_ARGB8565_Premultiplied,   Format_RGB666 = QImage::Format_RGB666,   Format_ARGB6666_Premultiplied = QImage::Format_ARGB6666_Premultiplied,   Format_RGB555 = QImage::Format_RGB555,   Format_ARGB8555_Premultiplied = QImage::Format_ARGB8555_Premultiplied,   Format_RGB888 = QImage::Format_RGB888,   Format_RGB444 = QImage::Format_RGB444,   Format_ARGB4444_Premultiplied = QImage::Format_ARGB4444_Premultiplied,   NImageFormats = QImage::NImageFormats};
public slots:
QImage* new_QImage();
QImage* new_QImage(const QImage&  arg__1);
QImage* new_QImage(const QSize&  size, QImage::Format  format);
QImage* new_QImage(const QString&  fileName, const char*  format = 0);
QImage* new_QImage(int  width, int  height, QImage::Format  format);
void delete_QImage(QImage* obj) { delete obj; } 
   int  pixelIndex(QImage* theWrappedObject, int  x, int  y) const;
   int  width(QImage* theWrappedObject) const;
   QPaintEngine*  paintEngine(QImage* theWrappedObject) const;
   void invertPixels(QImage* theWrappedObject, QImage::InvertMode  arg__1 = QImage::InvertRgb);
   void setOffset(QImage* theWrappedObject, const QPoint&  arg__1);
   QImage  scaledToWidth(QImage* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  loadFromData(QImage* theWrappedObject, const QByteArray&  data, const char*  aformat = 0);
   void setNumColors(QImage* theWrappedObject, int  arg__1);
   QTransform  static_QImage_trueMatrix(const QTransform&  arg__1, int  w, int  h);
   QMatrix  static_QImage_trueMatrix(const QMatrix&  arg__1, int  w, int  h);
   QImage::Format  format(QImage* theWrappedObject) const;
   int  depth(QImage* theWrappedObject) const;
   QImage  static_QImage_fromData(const QByteArray&  data, const char*  format = 0);
   QImage  rgbSwapped(QImage* theWrappedObject) const;
   int  dotsPerMeterX(QImage* theWrappedObject) const;
   int  dotsPerMeterY(QImage* theWrappedObject) const;
   QPoint  offset(QImage* theWrappedObject) const;
   QStringList  textKeys(QImage* theWrappedObject) const;
   unsigned int  color(QImage* theWrappedObject, int  i) const;
   int  metric(QImage* theWrappedObject, QPaintDevice::PaintDeviceMetric  metric) const;
   QImage  createAlphaMask(QImage* theWrappedObject, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   QImage  transformed(QImage* theWrappedObject, const QTransform&  matrix, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  load(QImage* theWrappedObject, const QString&  fileName, const char*  format = 0);
   QImage  transformed(QImage* theWrappedObject, const QMatrix&  matrix, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  load(QImage* theWrappedObject, QIODevice*  device, const char*  format);
   bool  hasAlphaChannel(QImage* theWrappedObject) const;
   void fill(QImage* theWrappedObject, uint  pixel);
   void setDotsPerMeterX(QImage* theWrappedObject, int  arg__1);
   QImage  createMaskFromColor(QImage* theWrappedObject, unsigned int  color, Qt::MaskMode  mode = Qt::MaskInColor) const;
   bool  save(QImage* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   QImage  alphaChannel(QImage* theWrappedObject) const;
   void setAlphaChannel(QImage* theWrappedObject, const QImage&  alphaChannel);
   unsigned int  pixel(QImage* theWrappedObject, int  x, int  y) const;
   bool  save(QImage* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, const QVector<unsigned int >&  colorTable, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   bool  isGrayscale(QImage* theWrappedObject) const;
   unsigned int  pixel(QImage* theWrappedObject, const QPoint&  pt) const;
   QSize  size(QImage* theWrappedObject) const;
   QImage  createHeuristicMask(QImage* theWrappedObject, bool  clipTight = true) const;
   int  bytesPerLine(QImage* theWrappedObject) const;
   bool  operator_equal(QImage* theWrappedObject, const QImage&  arg__1) const;
   QImage  convertToFormat(QImage* theWrappedObject, QImage::Format  f, Qt::ImageConversionFlags  flags = Qt::AutoColor) const;
   void setPixel(QImage* theWrappedObject, const QPoint&  pt, uint  index_or_rgb);
   QImage  scaledToHeight(QImage* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QRect  rect(QImage* theWrappedObject) const;
   qint64  cacheKey(QImage* theWrappedObject) const;
   void setText(QImage* theWrappedObject, const QString&  key, const QString&  value);
   void setDotsPerMeterY(QImage* theWrappedObject, int  arg__1);
   void setColor(QImage* theWrappedObject, int  i, unsigned int  c);
   int  devType(QImage* theWrappedObject) const;
   QImage  mirrored(QImage* theWrappedObject, bool  horizontally = false, bool  vertically = true) const;
   bool  isNull(QImage* theWrappedObject) const;
   void setPixel(QImage* theWrappedObject, int  x, int  y, uint  index_or_rgb);
   QVector<unsigned int >  colorTable(QImage* theWrappedObject) const;
   QString  text(QImage* theWrappedObject, const QString&  key = QString()) const;
   QImage  scaled(QImage* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QImage  scaled(QImage* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   int  height(QImage* theWrappedObject) const;
   int  numBytes(QImage* theWrappedObject) const;
   bool  allGray(QImage* theWrappedObject) const;
   QImage  copy(QImage* theWrappedObject, int  x, int  y, int  w, int  h) const;
   bool  valid(QImage* theWrappedObject, int  x, int  y) const;
   QImage  copy(QImage* theWrappedObject, const QRect&  rect = QRect()) const;
   bool  valid(QImage* theWrappedObject, const QPoint&  pt) const;
   int  pixelIndex(QImage* theWrappedObject, const QPoint&  pt) const;
   int  numColors(QImage* theWrappedObject) const;
   void writeTo(QImage* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QImage* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QKeySequence : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SequenceFormat StandardKey SequenceMatch )
enum SequenceFormat{
  NativeText = QKeySequence::NativeText,   PortableText = QKeySequence::PortableText};
enum StandardKey{
  UnknownKey = QKeySequence::UnknownKey,   HelpContents = QKeySequence::HelpContents,   WhatsThis = QKeySequence::WhatsThis,   Open = QKeySequence::Open,   Close = QKeySequence::Close,   Save = QKeySequence::Save,   New = QKeySequence::New,   Delete = QKeySequence::Delete,   Cut = QKeySequence::Cut,   Copy = QKeySequence::Copy,   Paste = QKeySequence::Paste,   Undo = QKeySequence::Undo,   Redo = QKeySequence::Redo,   Back = QKeySequence::Back,   Forward = QKeySequence::Forward,   Refresh = QKeySequence::Refresh,   ZoomIn = QKeySequence::ZoomIn,   ZoomOut = QKeySequence::ZoomOut,   Print = QKeySequence::Print,   AddTab = QKeySequence::AddTab,   NextChild = QKeySequence::NextChild,   PreviousChild = QKeySequence::PreviousChild,   Find = QKeySequence::Find,   FindNext = QKeySequence::FindNext,   FindPrevious = QKeySequence::FindPrevious,   Replace = QKeySequence::Replace,   SelectAll = QKeySequence::SelectAll,   Bold = QKeySequence::Bold,   Italic = QKeySequence::Italic,   Underline = QKeySequence::Underline,   MoveToNextChar = QKeySequence::MoveToNextChar,   MoveToPreviousChar = QKeySequence::MoveToPreviousChar,   MoveToNextWord = QKeySequence::MoveToNextWord,   MoveToPreviousWord = QKeySequence::MoveToPreviousWord,   MoveToNextLine = QKeySequence::MoveToNextLine,   MoveToPreviousLine = QKeySequence::MoveToPreviousLine,   MoveToNextPage = QKeySequence::MoveToNextPage,   MoveToPreviousPage = QKeySequence::MoveToPreviousPage,   MoveToStartOfLine = QKeySequence::MoveToStartOfLine,   MoveToEndOfLine = QKeySequence::MoveToEndOfLine,   MoveToStartOfBlock = QKeySequence::MoveToStartOfBlock,   MoveToEndOfBlock = QKeySequence::MoveToEndOfBlock,   MoveToStartOfDocument = QKeySequence::MoveToStartOfDocument,   MoveToEndOfDocument = QKeySequence::MoveToEndOfDocument,   SelectNextChar = QKeySequence::SelectNextChar,   SelectPreviousChar = QKeySequence::SelectPreviousChar,   SelectNextWord = QKeySequence::SelectNextWord,   SelectPreviousWord = QKeySequence::SelectPreviousWord,   SelectNextLine = QKeySequence::SelectNextLine,   SelectPreviousLine = QKeySequence::SelectPreviousLine,   SelectNextPage = QKeySequence::SelectNextPage,   SelectPreviousPage = QKeySequence::SelectPreviousPage,   SelectStartOfLine = QKeySequence::SelectStartOfLine,   SelectEndOfLine = QKeySequence::SelectEndOfLine,   SelectStartOfBlock = QKeySequence::SelectStartOfBlock,   SelectEndOfBlock = QKeySequence::SelectEndOfBlock,   SelectStartOfDocument = QKeySequence::SelectStartOfDocument,   SelectEndOfDocument = QKeySequence::SelectEndOfDocument,   DeleteStartOfWord = QKeySequence::DeleteStartOfWord,   DeleteEndOfWord = QKeySequence::DeleteEndOfWord,   DeleteEndOfLine = QKeySequence::DeleteEndOfLine};
enum SequenceMatch{
  NoMatch = QKeySequence::NoMatch,   PartialMatch = QKeySequence::PartialMatch,   ExactMatch = QKeySequence::ExactMatch};
public slots:
QKeySequence* new_QKeySequence();
QKeySequence* new_QKeySequence(QKeySequence::StandardKey  key);
QKeySequence* new_QKeySequence(const QKeySequence&  ks);
QKeySequence* new_QKeySequence(const QString&  key);
QKeySequence* new_QKeySequence(int  k1, int  k2 = 0, int  k3 = 0, int  k4 = 0);
void delete_QKeySequence(QKeySequence* obj) { delete obj; } 
   bool  operator_less(QKeySequence* theWrappedObject, const QKeySequence&  ks) const;
   QString  toString(QKeySequence* theWrappedObject, QKeySequence::SequenceFormat  format = QKeySequence::PortableText) const;
   QKeySequence  static_QKeySequence_mnemonic(const QString&  text);
   uint  count(QKeySequence* theWrappedObject) const;
   int  operator_subscript(QKeySequence* theWrappedObject, uint  i) const;
   bool  operator_equal(QKeySequence* theWrappedObject, const QKeySequence&  other) const;
   QKeySequence  static_QKeySequence_fromString(const QString&  str, QKeySequence::SequenceFormat  format = QKeySequence::PortableText);
   QList<QKeySequence >  static_QKeySequence_keyBindings(QKeySequence::StandardKey  key);
   QKeySequence::SequenceMatch  matches(QKeySequence* theWrappedObject, const QKeySequence&  seq) const;
   bool  isEmpty(QKeySequence* theWrappedObject) const;
   int  operator_cast_int(QKeySequence* theWrappedObject) const;
   void writeTo(QKeySequence* theWrappedObject, QDataStream&  in);
   void readFrom(QKeySequence* theWrappedObject, QDataStream&  out);
};





class PythonQtWrapper_QMatrix : public QObject
{ Q_OBJECT
public:
public slots:
QMatrix* new_QMatrix();
QMatrix* new_QMatrix(const QMatrix&  matrix);
QMatrix* new_QMatrix(qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
void delete_QMatrix(QMatrix* obj) { delete obj; } 
   qreal  det(QMatrix* theWrappedObject) const;
   bool  operator_equal(QMatrix* theWrappedObject, const QMatrix&  arg__1) const;
   void setMatrix(QMatrix* theWrappedObject, qreal  m11, qreal  m12, qreal  m21, qreal  m22, qreal  dx, qreal  dy);
   bool  isInvertible(QMatrix* theWrappedObject) const;
   qreal  m21(QMatrix* theWrappedObject) const;
   qreal  m22(QMatrix* theWrappedObject) const;
   QMatrix*  rotate(QMatrix* theWrappedObject, qreal  a);
   QPainterPath  map(QMatrix* theWrappedObject, const QPainterPath&  p) const;
   QRegion  map(QMatrix* theWrappedObject, const QRegion&  r) const;
   QPolygon  map(QMatrix* theWrappedObject, const QPolygon&  a) const;
   QLine  map(QMatrix* theWrappedObject, const QLine&  l) const;
   QPolygonF  map(QMatrix* theWrappedObject, const QPolygonF&  a) const;
   QLineF  map(QMatrix* theWrappedObject, const QLineF&  l) const;
   QPoint  map(QMatrix* theWrappedObject, const QPoint&  p) const;
   QPointF  map(QMatrix* theWrappedObject, const QPointF&  p) const;
   bool  isIdentity(QMatrix* theWrappedObject) const;
   QRectF  mapRect(QMatrix* theWrappedObject, const QRectF&  arg__1) const;
   QMatrix*  scale(QMatrix* theWrappedObject, qreal  sx, qreal  sy);
   QRect  mapRect(QMatrix* theWrappedObject, const QRect&  arg__1) const;
   qreal  dx(QMatrix* theWrappedObject) const;
   QMatrix  inverted(QMatrix* theWrappedObject, bool*  invertible = 0) const;
   QMatrix*  translate(QMatrix* theWrappedObject, qreal  dx, qreal  dy);
   QMatrix*  __imul__(QMatrix* theWrappedObject, const QMatrix&  arg__1);
   qreal  dy(QMatrix* theWrappedObject) const;
   QPolygon  mapToPolygon(QMatrix* theWrappedObject, const QRect&  r) const;
   qreal  m11(QMatrix* theWrappedObject) const;
   void reset(QMatrix* theWrappedObject);
   QMatrix  __mul__(QMatrix* theWrappedObject, const QMatrix&  o) const;
   QMatrix*  shear(QMatrix* theWrappedObject, qreal  sh, qreal  sv);
   qreal  m12(QMatrix* theWrappedObject) const;
   void writeTo(QMatrix* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QMatrix* theWrappedObject, QDataStream&  arg__1);
    QString toString(QMatrix*);
};





class PythonQtWrapper_QPalette : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ColorGroup ColorRole )
enum ColorGroup{
  Active = QPalette::Active,   Disabled = QPalette::Disabled,   Inactive = QPalette::Inactive,   NColorGroups = QPalette::NColorGroups,   Current = QPalette::Current,   All = QPalette::All,   Normal = QPalette::Normal};
enum ColorRole{
  WindowText = QPalette::WindowText,   Button = QPalette::Button,   Light = QPalette::Light,   Midlight = QPalette::Midlight,   Dark = QPalette::Dark,   Mid = QPalette::Mid,   Text = QPalette::Text,   BrightText = QPalette::BrightText,   ButtonText = QPalette::ButtonText,   Base = QPalette::Base,   Window = QPalette::Window,   Shadow = QPalette::Shadow,   Highlight = QPalette::Highlight,   HighlightedText = QPalette::HighlightedText,   Link = QPalette::Link,   LinkVisited = QPalette::LinkVisited,   AlternateBase = QPalette::AlternateBase,   NoRole = QPalette::NoRole,   ToolTipBase = QPalette::ToolTipBase,   ToolTipText = QPalette::ToolTipText,   NColorRoles = QPalette::NColorRoles,   Foreground = QPalette::Foreground,   Background = QPalette::Background};
public slots:
QPalette* new_QPalette();
QPalette* new_QPalette(Qt::GlobalColor  button);
QPalette* new_QPalette(const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
QPalette* new_QPalette(const QColor&  button);
QPalette* new_QPalette(const QColor&  button, const QColor&  window);
QPalette* new_QPalette(const QPalette&  palette);
void delete_QPalette(QPalette* obj) { delete obj; } 
   const QBrush*  brush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   const QBrush*  brush(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QBrush*  window(QPalette* theWrappedObject) const;
   bool  operator_equal(QPalette* theWrappedObject, const QPalette&  p) const;
   const QBrush*  mid(QPalette* theWrappedObject) const;
   const QBrush*  linkVisited(QPalette* theWrappedObject) const;
   const QBrush*  buttonText(QPalette* theWrappedObject) const;
   const QBrush*  brightText(QPalette* theWrappedObject) const;
   const QBrush*  light(QPalette* theWrappedObject) const;
   const QBrush*  alternateBase(QPalette* theWrappedObject) const;
   void setBrush(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QBrush&  brush);
   const QBrush*  highlight(QPalette* theWrappedObject) const;
   void setBrush(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QBrush&  brush);
   const QBrush*  shadow(QPalette* theWrappedObject) const;
   const QBrush*  midlight(QPalette* theWrappedObject) const;
   const QColor*  color(QPalette* theWrappedObject, QPalette::ColorRole  cr) const;
   const QColor*  color(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   QPalette::ColorGroup  currentColorGroup(QPalette* theWrappedObject) const;
   const QBrush*  highlightedText(QPalette* theWrappedObject) const;
   const QBrush*  button(QPalette* theWrappedObject) const;
   const QBrush*  windowText(QPalette* theWrappedObject) const;
   const QBrush*  toolTipText(QPalette* theWrappedObject) const;
   const QBrush*  link(QPalette* theWrappedObject) const;
   const QBrush*  base(QPalette* theWrappedObject) const;
   bool  isCopyOf(QPalette* theWrappedObject, const QPalette&  p) const;
   qint64  cacheKey(QPalette* theWrappedObject) const;
   void resolve(QPalette* theWrappedObject, uint  mask);
   bool  isBrushSet(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr) const;
   uint  resolve(QPalette* theWrappedObject) const;
   QPalette  resolve(QPalette* theWrappedObject, const QPalette&  arg__1) const;
   void setColor(QPalette* theWrappedObject, QPalette::ColorRole  cr, const QColor&  color);
   void setColor(QPalette* theWrappedObject, QPalette::ColorGroup  cg, QPalette::ColorRole  cr, const QColor&  color);
   void setColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cr, const QBrush&  windowText, const QBrush&  button, const QBrush&  light, const QBrush&  dark, const QBrush&  mid, const QBrush&  text, const QBrush&  bright_text, const QBrush&  base, const QBrush&  window);
   void setCurrentColorGroup(QPalette* theWrappedObject, QPalette::ColorGroup  cg);
   const QBrush*  text(QPalette* theWrappedObject) const;
   const QBrush*  dark(QPalette* theWrappedObject) const;
   const QBrush*  toolTipBase(QPalette* theWrappedObject) const;
   bool  isEqual(QPalette* theWrappedObject, QPalette::ColorGroup  cr1, QPalette::ColorGroup  cr2) const;
   void writeTo(QPalette* theWrappedObject, QDataStream&  ds);
   void readFrom(QPalette* theWrappedObject, QDataStream&  ds);
};





class PythonQtWrapper_QPen : public QObject
{ Q_OBJECT
public:
public slots:
QPen* new_QPen();
QPen* new_QPen(Qt::PenStyle  arg__1);
QPen* new_QPen(const QBrush&  brush, qreal  width, Qt::PenStyle  s = Qt::SolidLine, Qt::PenCapStyle  c = Qt::SquareCap, Qt::PenJoinStyle  j = Qt::BevelJoin);
QPen* new_QPen(const QColor&  color);
QPen* new_QPen(const QPen&  pen);
void delete_QPen(QPen* obj) { delete obj; } 
   void setDashPattern(QPen* theWrappedObject, const QVector<qreal >&  pattern);
   QColor  color(QPen* theWrappedObject) const;
   void setWidthF(QPen* theWrappedObject, qreal  width);
   void setCapStyle(QPen* theWrappedObject, Qt::PenCapStyle  pcs);
   qreal  miterLimit(QPen* theWrappedObject) const;
   QBrush  brush(QPen* theWrappedObject) const;
   void setCosmetic(QPen* theWrappedObject, bool  cosmetic);
   bool  isCosmetic(QPen* theWrappedObject) const;
   bool  operator_equal(QPen* theWrappedObject, const QPen&  p) const;
   void setDashOffset(QPen* theWrappedObject, qreal  doffset);
   int  width(QPen* theWrappedObject) const;
   void setWidth(QPen* theWrappedObject, int  width);
   Qt::PenJoinStyle  joinStyle(QPen* theWrappedObject) const;
   qreal  widthF(QPen* theWrappedObject) const;
   void setStyle(QPen* theWrappedObject, Qt::PenStyle  arg__1);
   void setBrush(QPen* theWrappedObject, const QBrush&  brush);
   void setMiterLimit(QPen* theWrappedObject, qreal  limit);
   Qt::PenStyle  style(QPen* theWrappedObject) const;
   bool  isSolid(QPen* theWrappedObject) const;
   QVector<qreal >  dashPattern(QPen* theWrappedObject) const;
   void setColor(QPen* theWrappedObject, const QColor&  color);
   void setJoinStyle(QPen* theWrappedObject, Qt::PenJoinStyle  pcs);
   Qt::PenCapStyle  capStyle(QPen* theWrappedObject) const;
   qreal  dashOffset(QPen* theWrappedObject) const;
   void writeTo(QPen* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPen* theWrappedObject, QDataStream&  arg__1);
    QString toString(QPen*);
};





class PythonQtShell_QPixmap : public QPixmap
{
public:
    PythonQtShell_QPixmap():QPixmap(),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QPixmap&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QSize&  arg__1):QPixmap(arg__1),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor):QPixmap(fileName, format, flags),_wrapper(NULL) {};
    PythonQtShell_QPixmap(const char**  xpm):QPixmap(xpm),_wrapper(NULL) {};
    PythonQtShell_QPixmap(int  w, int  h):QPixmap(w, h),_wrapper(NULL) {};

virtual QPaintEngine*  paintEngine() const;
virtual int  metric(QPaintDevice::PaintDeviceMetric  arg__1) const;
virtual int  devType() const;

  PythonQtInstanceWrapper* _wrapper; 
};

class PythonQtPublicPromoter_QPixmap : public QPixmap
{ public:
inline QPaintEngine*  promoted_paintEngine() const { return QPixmap::paintEngine(); }
inline int  promoted_metric(QPaintDevice::PaintDeviceMetric  arg__1) const { return QPixmap::metric(arg__1); }
inline int  promoted_devType() const { return QPixmap::devType(); }
};

class PythonQtWrapper_QPixmap : public QObject
{ Q_OBJECT
public:
public slots:
QPixmap* new_QPixmap();
QPixmap* new_QPixmap(const QPixmap&  arg__1);
QPixmap* new_QPixmap(const QSize&  arg__1);
QPixmap* new_QPixmap(const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
QPixmap* new_QPixmap(const char**  xpm);
QPixmap* new_QPixmap(int  w, int  h);
void delete_QPixmap(QPixmap* obj) { delete obj; } 
   bool  loadFromData(QPixmap* theWrappedObject, const QByteArray&  data, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QTransform  static_QPixmap_trueMatrix(const QTransform&  m, int  w, int  h);
   int  width(QPixmap* theWrappedObject) const;
   QPaintEngine*  paintEngine(QPixmap* theWrappedObject) const;
   int  static_QPixmap_defaultDepth();
   QPixmap  scaledToWidth(QPixmap* theWrappedObject, int  w, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   int  depth(QPixmap* theWrappedObject) const;
   QMatrix  static_QPixmap_trueMatrix(const QMatrix&  m, int  w, int  h);
   bool  hasAlpha(QPixmap* theWrappedObject) const;
   QImage  toImage(QPixmap* theWrappedObject) const;
   int  metric(QPixmap* theWrappedObject, QPaintDevice::PaintDeviceMetric  arg__1) const;
   bool  load(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  transformed(QPixmap* theWrappedObject, const QTransform&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor, Qt::MaskMode  mode) const;
   QPixmap  transformed(QPixmap* theWrappedObject, const QMatrix&  arg__1, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  hasAlphaChannel(QPixmap* theWrappedObject) const;
   void fill(QPixmap* theWrappedObject, const QColor&  fillColor = Qt::white);
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, int  xofs, int  yofs);
   QPixmap  copy(QPixmap* theWrappedObject, int  x, int  y, int  width, int  height) const;
   void fill(QPixmap* theWrappedObject, const QWidget*  widget, const QPoint&  ofs);
   bool  isQBitmap(QPixmap* theWrappedObject) const;
   QBitmap  createMaskFromColor(QPixmap* theWrappedObject, const QColor&  maskColor) const;
   bool  save(QPixmap* theWrappedObject, QIODevice*  device, const char*  format = 0, int  quality = -1) const;
   bool  save(QPixmap* theWrappedObject, const QString&  fileName, const char*  format = 0, int  quality = -1) const;
   QPixmap  alphaChannel(QPixmap* theWrappedObject) const;
   QBitmap  mask(QPixmap* theWrappedObject) const;
   void setAlphaChannel(QPixmap* theWrappedObject, const QPixmap&  arg__1);
   QPixmap  scaledToHeight(QPixmap* theWrappedObject, int  h, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QBitmap  createHeuristicMask(QPixmap* theWrappedObject, bool  clipTight = true) const;
   QPixmap  static_QPixmap_grabWindow(WId  arg__1, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   QSize  size(QPixmap* theWrappedObject) const;
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, int  x = 0, int  y = 0, int  w = -1, int  h = -1);
   QPixmap  static_QPixmap_grabWidget(QWidget*  widget, const QRect&  rect);
   QRect  rect(QPixmap* theWrappedObject) const;
   QPixmap  static_QPixmap_fromImage(const QImage&  image, Qt::ImageConversionFlags  flags = Qt::AutoColor);
   QPixmap  scaled(QPixmap* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   bool  isNull(QPixmap* theWrappedObject) const;
   qint64  cacheKey(QPixmap* theWrappedObject) const;
   void setMask(QPixmap* theWrappedObject, const QBitmap&  arg__1);
   int  devType(QPixmap* theWrappedObject) const;
   QPixmap  scaled(QPixmap* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  aspectMode = Qt::IgnoreAspectRatio, Qt::TransformationMode  mode = Qt::FastTransformation) const;
   QPixmap  copy(QPixmap* theWrappedObject, const QRect&  rect = QRect()) const;
   int  height(QPixmap* theWrappedObject) const;
   void writeTo(QPixmap* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QPixmap* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QPolygon : public QObject
{ Q_OBJECT
public:
public slots:
QPolygon* new_QPolygon();
QPolygon* new_QPolygon(const QPolygon&  a);
QPolygon* new_QPolygon(const QRect&  r, bool  closed = false);
QPolygon* new_QPolygon(const QVector<QPoint >&  v);
QPolygon* new_QPolygon(int  size);
void delete_QPolygon(QPolygon* obj) { delete obj; } 
   const QPoint*  at(QPolygon* theWrappedObject, int  i) const;
   QPolygon  intersected(QPolygon* theWrappedObject, const QPolygon&  r) const;
   bool  containsPoint(QPolygon* theWrappedObject, const QPoint&  pt, Qt::FillRule  fillRule) const;
   void translate(QPolygon* theWrappedObject, const QPoint&  offset);
   void translate(QPolygon* theWrappedObject, int  dx, int  dy);
   QPolygon  united(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QPolygon  subtracted(QPolygon* theWrappedObject, const QPolygon&  r) const;
   QRect  boundingRect(QPolygon* theWrappedObject) const;
   void append(QPolygon* theWrappedObject, const QPoint&  t);
   int  capacity(QPolygon* theWrappedObject) const;
   QVector<QPoint >  static_QPolygon_fromList(const QList<QPoint >&  list);
   const QPoint*  first(QPolygon* theWrappedObject) const;
   void clear(QPolygon* theWrappedObject);
   int  count(QPolygon* theWrappedObject) const;
   bool  contains(QPolygon* theWrappedObject, const QPoint&  t) const;
   bool  empty(QPolygon* theWrappedObject) const;
   int  count(QPolygon* theWrappedObject, const QPoint&  t) const;
   QVector<QPoint >*  fill(QPolygon* theWrappedObject, const QPoint&  t, int  size);
   int  indexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   bool  isEmpty(QPolygon* theWrappedObject) const;
   const QPoint*  last(QPolygon* theWrappedObject) const;
   int  lastIndexOf(QPolygon* theWrappedObject, const QPoint&  t, int  from) const;
   QVector<QPoint >  mid(QPolygon* theWrappedObject, int  pos, int  length) const;
   void pop_front(QPolygon* theWrappedObject);
   bool  operator_equal(QPolygon* theWrappedObject, const QVector<QPoint >&  v) const;
   void prepend(QPolygon* theWrappedObject, const QPoint&  t);
   void pop_back(QPolygon* theWrappedObject);
   void push_back(QPolygon* theWrappedObject, const QPoint&  t);
   void push_front(QPolygon* theWrappedObject, const QPoint&  t);
   void remove(QPolygon* theWrappedObject, int  i);
   void replace(QPolygon* theWrappedObject, int  i, const QPoint&  t);
   void remove(QPolygon* theWrappedObject, int  i, int  n);
   void reserve(QPolygon* theWrappedObject, int  size);
   void resize(QPolygon* theWrappedObject, int  size);
   void setSharable(QPolygon* theWrappedObject, bool  sharable);
   QPoint  value(QPolygon* theWrappedObject, int  i) const;
   int  size(QPolygon* theWrappedObject) const;
   void squeeze(QPolygon* theWrappedObject);
   QList<QPoint >  toList(QPolygon* theWrappedObject) const;
   QPoint  value(QPolygon* theWrappedObject, int  i, const QPoint&  defaultValue) const;
   QPolygon  __mul__(QPolygon* theWrappedObject, const QTransform&  m);
   QPolygon  __mul__(QPolygon* theWrappedObject, const QMatrix&  m);
   void writeTo(QPolygon* theWrappedObject, QDataStream&  stream);
   void readFrom(QPolygon* theWrappedObject, QDataStream&  stream);
    QString toString(QPolygon*);
};





class PythonQtWrapper_QRegion : public QObject
{ Q_OBJECT
public:
Q_ENUMS(RegionType )
enum RegionType{
  Rectangle = QRegion::Rectangle,   Ellipse = QRegion::Ellipse};
public slots:
QRegion* new_QRegion();
QRegion* new_QRegion(const QBitmap&  bitmap);
QRegion* new_QRegion(const QPolygon&  pa, Qt::FillRule  fillRule = Qt::OddEvenFill);
QRegion* new_QRegion(const QRect&  r, QRegion::RegionType  t = QRegion::Rectangle);
QRegion* new_QRegion(const QRegion&  region);
QRegion* new_QRegion(int  x, int  y, int  w, int  h, QRegion::RegionType  t = QRegion::Rectangle);
void delete_QRegion(QRegion* obj) { delete obj; } 
   bool  operator_equal(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  contains(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  xored(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  contains(QRegion* theWrappedObject, const QPoint&  p) const;
   QRegion  intersect(QRegion* theWrappedObject, const QRect&  r) const;
   bool  isEmpty(QRegion* theWrappedObject) const;
   QVector<QRect >  rects(QRegion* theWrappedObject) const;
   QRegion  intersected(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  intersected(QRegion* theWrappedObject, const QRegion&  r) const;
   int  numRects(QRegion* theWrappedObject) const;
   QRegion  subtracted(QRegion* theWrappedObject, const QRegion&  r) const;
   QRect  boundingRect(QRegion* theWrappedObject) const;
   QRegion  translated(QRegion* theWrappedObject, const QPoint&  p) const;
   QRegion  translated(QRegion* theWrappedObject, int  dx, int  dy) const;
   QRegion  unite(QRegion* theWrappedObject, const QRect&  r) const;
   void translate(QRegion* theWrappedObject, const QPoint&  p);
   void translate(QRegion* theWrappedObject, int  dx, int  dy);
   const QRegion  __and__(QRegion* theWrappedObject, const QRect&  r) const;
   const QRegion  __add__(QRegion* theWrappedObject, const QRect&  r) const;
   QRegion  united(QRegion* theWrappedObject, const QRegion&  r) const;
   QRegion  united(QRegion* theWrappedObject, const QRect&  r) const;
   bool  intersects(QRegion* theWrappedObject, const QRegion&  r) const;
   bool  intersects(QRegion* theWrappedObject, const QRect&  r) const;
   void setRects(QRegion* theWrappedObject, const QRect*  rect, int  num);
   QRegion  __mul__(QRegion* theWrappedObject, const QTransform&  m);
   QRegion  __mul__(QRegion* theWrappedObject, const QMatrix&  m);
   void writeTo(QRegion* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QRegion* theWrappedObject, QDataStream&  arg__1);
    QString toString(QRegion*);
};





class PythonQtWrapper_QSizePolicy : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ControlType PolicyFlag Policy )
Q_FLAGS(ControlTypes )
enum ControlType{
  DefaultType = QSizePolicy::DefaultType,   ButtonBox = QSizePolicy::ButtonBox,   CheckBox = QSizePolicy::CheckBox,   ComboBox = QSizePolicy::ComboBox,   Frame = QSizePolicy::Frame,   GroupBox = QSizePolicy::GroupBox,   Label = QSizePolicy::Label,   Line = QSizePolicy::Line,   LineEdit = QSizePolicy::LineEdit,   PushButton = QSizePolicy::PushButton,   RadioButton = QSizePolicy::RadioButton,   Slider = QSizePolicy::Slider,   SpinBox = QSizePolicy::SpinBox,   TabWidget = QSizePolicy::TabWidget,   ToolButton = QSizePolicy::ToolButton};
enum PolicyFlag{
  GrowFlag = QSizePolicy::GrowFlag,   ExpandFlag = QSizePolicy::ExpandFlag,   ShrinkFlag = QSizePolicy::ShrinkFlag,   IgnoreFlag = QSizePolicy::IgnoreFlag};
enum Policy{
  Fixed = QSizePolicy::Fixed,   Minimum = QSizePolicy::Minimum,   Maximum = QSizePolicy::Maximum,   Preferred = QSizePolicy::Preferred,   MinimumExpanding = QSizePolicy::MinimumExpanding,   Expanding = QSizePolicy::Expanding,   Ignored = QSizePolicy::Ignored};
Q_DECLARE_FLAGS(ControlTypes, ControlType)
public slots:
QSizePolicy* new_QSizePolicy();
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical);
QSizePolicy* new_QSizePolicy(QSizePolicy::Policy  horizontal, QSizePolicy::Policy  vertical, QSizePolicy::ControlType  type);
QSizePolicy* new_QSizePolicy(const QSizePolicy& other) {
QSizePolicy* a = new QSizePolicy();
*((QSizePolicy*)a) = other;
return a; }
void delete_QSizePolicy(QSizePolicy* obj) { delete obj; } 
   void setControlType(QSizePolicy* theWrappedObject, QSizePolicy::ControlType  type);
   int  verticalStretch(QSizePolicy* theWrappedObject) const;
   QSizePolicy::Policy  horizontalPolicy(QSizePolicy* theWrappedObject) const;
   int  horizontalStretch(QSizePolicy* theWrappedObject) const;
   void setHorizontalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   QSizePolicy::ControlType  controlType(QSizePolicy* theWrappedObject) const;
   void setVerticalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   Qt::Orientations  expandingDirections(QSizePolicy* theWrappedObject) const;
   bool  hasHeightForWidth(QSizePolicy* theWrappedObject) const;
   bool  operator_equal(QSizePolicy* theWrappedObject, const QSizePolicy&  s) const;
   void transpose(QSizePolicy* theWrappedObject);
   QSizePolicy::Policy  verticalPolicy(QSizePolicy* theWrappedObject) const;
   void setHeightForWidth(QSizePolicy* theWrappedObject, bool  b);
   void setVerticalPolicy(QSizePolicy* theWrappedObject, QSizePolicy::Policy  d);
   void setHorizontalStretch(QSizePolicy* theWrappedObject, uchar  stretchFactor);
   void writeTo(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QSizePolicy* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QTextFormat : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Property FormatType ObjectTypes PageBreakFlag )
Q_FLAGS(PageBreakFlags )
enum Property{
  ObjectIndex = QTextFormat::ObjectIndex,   CssFloat = QTextFormat::CssFloat,   LayoutDirection = QTextFormat::LayoutDirection,   OutlinePen = QTextFormat::OutlinePen,   BackgroundBrush = QTextFormat::BackgroundBrush,   ForegroundBrush = QTextFormat::ForegroundBrush,   BackgroundImageUrl = QTextFormat::BackgroundImageUrl,   BlockAlignment = QTextFormat::BlockAlignment,   BlockTopMargin = QTextFormat::BlockTopMargin,   BlockBottomMargin = QTextFormat::BlockBottomMargin,   BlockLeftMargin = QTextFormat::BlockLeftMargin,   BlockRightMargin = QTextFormat::BlockRightMargin,   TextIndent = QTextFormat::TextIndent,   TabPositions = QTextFormat::TabPositions,   BlockIndent = QTextFormat::BlockIndent,   BlockNonBreakableLines = QTextFormat::BlockNonBreakableLines,   BlockTrailingHorizontalRulerWidth = QTextFormat::BlockTrailingHorizontalRulerWidth,   FirstFontProperty = QTextFormat::FirstFontProperty,   FontCapitalization = QTextFormat::FontCapitalization,   FontLetterSpacing = QTextFormat::FontLetterSpacing,   FontWordSpacing = QTextFormat::FontWordSpacing,   FontFamily = QTextFormat::FontFamily,   FontPointSize = QTextFormat::FontPointSize,   FontSizeAdjustment = QTextFormat::FontSizeAdjustment,   FontSizeIncrement = QTextFormat::FontSizeIncrement,   FontWeight = QTextFormat::FontWeight,   FontItalic = QTextFormat::FontItalic,   FontUnderline = QTextFormat::FontUnderline,   FontOverline = QTextFormat::FontOverline,   FontStrikeOut = QTextFormat::FontStrikeOut,   FontFixedPitch = QTextFormat::FontFixedPitch,   FontPixelSize = QTextFormat::FontPixelSize,   LastFontProperty = QTextFormat::LastFontProperty,   TextUnderlineColor = QTextFormat::TextUnderlineColor,   TextVerticalAlignment = QTextFormat::TextVerticalAlignment,   TextOutline = QTextFormat::TextOutline,   TextUnderlineStyle = QTextFormat::TextUnderlineStyle,   TextToolTip = QTextFormat::TextToolTip,   IsAnchor = QTextFormat::IsAnchor,   AnchorHref = QTextFormat::AnchorHref,   AnchorName = QTextFormat::AnchorName,   ObjectType = QTextFormat::ObjectType,   ListStyle = QTextFormat::ListStyle,   ListIndent = QTextFormat::ListIndent,   FrameBorder = QTextFormat::FrameBorder,   FrameMargin = QTextFormat::FrameMargin,   FramePadding = QTextFormat::FramePadding,   FrameWidth = QTextFormat::FrameWidth,   FrameHeight = QTextFormat::FrameHeight,   FrameTopMargin = QTextFormat::FrameTopMargin,   FrameBottomMargin = QTextFormat::FrameBottomMargin,   FrameLeftMargin = QTextFormat::FrameLeftMargin,   FrameRightMargin = QTextFormat::FrameRightMargin,   FrameBorderBrush = QTextFormat::FrameBorderBrush,   FrameBorderStyle = QTextFormat::FrameBorderStyle,   TableColumns = QTextFormat::TableColumns,   TableColumnWidthConstraints = QTextFormat::TableColumnWidthConstraints,   TableCellSpacing = QTextFormat::TableCellSpacing,   TableCellPadding = QTextFormat::TableCellPadding,   TableHeaderRowCount = QTextFormat::TableHeaderRowCount,   TableCellRowSpan = QTextFormat::TableCellRowSpan,   TableCellColumnSpan = QTextFormat::TableCellColumnSpan,   TableCellTopPadding = QTextFormat::TableCellTopPadding,   TableCellBottomPadding = QTextFormat::TableCellBottomPadding,   TableCellLeftPadding = QTextFormat::TableCellLeftPadding,   TableCellRightPadding = QTextFormat::TableCellRightPadding,   ImageName = QTextFormat::ImageName,   ImageWidth = QTextFormat::ImageWidth,   ImageHeight = QTextFormat::ImageHeight,   FullWidthSelection = QTextFormat::FullWidthSelection,   PageBreakPolicy = QTextFormat::PageBreakPolicy,   UserProperty = QTextFormat::UserProperty};
enum FormatType{
  InvalidFormat = QTextFormat::InvalidFormat,   BlockFormat = QTextFormat::BlockFormat,   CharFormat = QTextFormat::CharFormat,   ListFormat = QTextFormat::ListFormat,   TableFormat = QTextFormat::TableFormat,   FrameFormat = QTextFormat::FrameFormat,   UserFormat = QTextFormat::UserFormat};
enum ObjectTypes{
  NoObject = QTextFormat::NoObject,   ImageObject = QTextFormat::ImageObject,   TableObject = QTextFormat::TableObject,   TableCellObject = QTextFormat::TableCellObject,   UserObject = QTextFormat::UserObject};
enum PageBreakFlag{
  PageBreak_Auto = QTextFormat::PageBreak_Auto,   PageBreak_AlwaysBefore = QTextFormat::PageBreak_AlwaysBefore,   PageBreak_AlwaysAfter = QTextFormat::PageBreak_AlwaysAfter};
Q_DECLARE_FLAGS(PageBreakFlags, PageBreakFlag)
public slots:
QTextFormat* new_QTextFormat();
QTextFormat* new_QTextFormat(const QTextFormat&  rhs);
QTextFormat* new_QTextFormat(int  type);
void delete_QTextFormat(QTextFormat* obj) { delete obj; } 
   QVariant  property(QTextFormat* theWrappedObject, int  propertyId) const;
   int  propertyCount(QTextFormat* theWrappedObject) const;
   void clearForeground(QTextFormat* theWrappedObject);
   void setObjectType(QTextFormat* theWrappedObject, int  type);
   void clearProperty(QTextFormat* theWrappedObject, int  propertyId);
   QColor  colorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  boolProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  hasProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void setForeground(QTextFormat* theWrappedObject, const QBrush&  brush);
   int  type(QTextFormat* theWrappedObject) const;
   QTextCharFormat  toCharFormat(QTextFormat* theWrappedObject) const;
   bool  operator_equal(QTextFormat* theWrappedObject, const QTextFormat&  rhs) const;
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVector<QTextLength >&  lengths);
   void setProperty(QTextFormat* theWrappedObject, int  propertyId, const QVariant&  value);
   void setLayoutDirection(QTextFormat* theWrappedObject, Qt::LayoutDirection  direction);
   int  intProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QTextTableFormat  toTableFormat(QTextFormat* theWrappedObject) const;
   QTextTableCellFormat  toTableCellFormat(QTextFormat* theWrappedObject) const;
   QMap<int , QVariant >  properties(QTextFormat* theWrappedObject) const;
   void setBackground(QTextFormat* theWrappedObject, const QBrush&  brush);
   QTextFrameFormat  toFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isBlockFormat(QTextFormat* theWrappedObject) const;
   QBrush  foreground(QTextFormat* theWrappedObject) const;
   QTextListFormat  toListFormat(QTextFormat* theWrappedObject) const;
   bool  isListFormat(QTextFormat* theWrappedObject) const;
   bool  isTableCellFormat(QTextFormat* theWrappedObject) const;
   QTextImageFormat  toImageFormat(QTextFormat* theWrappedObject) const;
   QVector<QTextLength >  lengthVectorProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isTableFormat(QTextFormat* theWrappedObject) const;
   void merge(QTextFormat* theWrappedObject, const QTextFormat&  other);
   void setObjectIndex(QTextFormat* theWrappedObject, int  object);
   int  objectType(QTextFormat* theWrappedObject) const;
   QBrush  brushProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   bool  isImageFormat(QTextFormat* theWrappedObject) const;
   QTextLength  lengthProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QBrush  background(QTextFormat* theWrappedObject) const;
   QTextBlockFormat  toBlockFormat(QTextFormat* theWrappedObject) const;
   QPen  penProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   Qt::LayoutDirection  layoutDirection(QTextFormat* theWrappedObject) const;
   int  objectIndex(QTextFormat* theWrappedObject) const;
   void clearBackground(QTextFormat* theWrappedObject);
   bool  isFrameFormat(QTextFormat* theWrappedObject) const;
   bool  isCharFormat(QTextFormat* theWrappedObject) const;
   bool  isValid(QTextFormat* theWrappedObject) const;
   qreal  doubleProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   QString  stringProperty(QTextFormat* theWrappedObject, int  propertyId) const;
   void writeTo(QTextFormat* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTextFormat* theWrappedObject, QDataStream&  arg__1);
};





class PythonQtWrapper_QTextLength : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Type )
enum Type{
  VariableLength = QTextLength::VariableLength,   FixedLength = QTextLength::FixedLength,   PercentageLength = QTextLength::PercentageLength};
public slots:
QTextLength* new_QTextLength();
QTextLength* new_QTextLength(QTextLength::Type  type, qreal  value);
QTextLength* new_QTextLength(const QTextLength& other) {
QTextLength* a = new QTextLength();
*((QTextLength*)a) = other;
return a; }
void delete_QTextLength(QTextLength* obj) { delete obj; } 
   qreal  rawValue(QTextLength* theWrappedObject) const;
   qreal  value(QTextLength* theWrappedObject, qreal  maximumLength) const;
   QTextLength::Type  type(QTextLength* theWrappedObject) const;
   bool  operator_equal(QTextLength* theWrappedObject, const QTextLength&  other) const;
   void writeTo(QTextLength* theWrappedObject, QDataStream&  arg__1);
   void readFrom(QTextLength* theWrappedObject, QDataStream&  arg__1);
};


