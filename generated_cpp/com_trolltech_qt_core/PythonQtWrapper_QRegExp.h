#ifndef PYTHONQTWRAPPER_QREGEXP_H
#define PYTHONQTWRAPPER_QREGEXP_H

#include <qregexp.h>
#include <QObject>

#include <PythonQt.h>

#include <QStringList>
#include <QVariant>
#include <qdatastream.h>
#include <qregexp.h>
#include <qstringlist.h>

class PythonQtWrapper_QRegExp : public QObject
{ Q_OBJECT
public:
Q_ENUMS(PatternSyntax CaretMode )
enum PatternSyntax{
  RegExp = QRegExp::RegExp,   Wildcard = QRegExp::Wildcard,   FixedString = QRegExp::FixedString,   RegExp2 = QRegExp::RegExp2};
enum CaretMode{
  CaretAtZero = QRegExp::CaretAtZero,   CaretAtOffset = QRegExp::CaretAtOffset,   CaretWontMatch = QRegExp::CaretWontMatch};
public slots:
QRegExp* new_QRegExp();
QRegExp* new_QRegExp(const QRegExp&  rx);
QRegExp* new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs = Qt::CaseSensitive, QRegExp::PatternSyntax  syntax = QRegExp::RegExp);
void delete_QRegExp(QRegExp* obj) { delete obj; } 
   bool  isEmpty(QRegExp* theWrappedObject) const;
   QString  pattern(QRegExp* theWrappedObject) const;
   QString  static_QRegExp_escape(const QString&  str);
   bool  exactMatch(QRegExp* theWrappedObject, const QString&  str) const;
   bool  isMinimal(QRegExp* theWrappedObject) const;
   bool  operator_equal(QRegExp* theWrappedObject, const QRegExp&  rx) const;
   QRegExp::PatternSyntax  patternSyntax(QRegExp* theWrappedObject) const;
   void setMinimal(QRegExp* theWrappedObject, bool  minimal);
   void setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax);
   void readFrom(QRegExp* theWrappedObject, QDataStream&  in);
   int  numCaptures(QRegExp* theWrappedObject) const;
   QStringList  capturedTexts(QRegExp* theWrappedObject);
   int  matchedLength(QRegExp* theWrappedObject) const;
   void setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs);
   void setPattern(QRegExp* theWrappedObject, const QString&  pattern);
   int  indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = 0, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   bool  isValid(QRegExp* theWrappedObject) const;
   int  lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset = -1, QRegExp::CaretMode  caretMode = QRegExp::CaretAtZero) const;
   void writeTo(QRegExp* theWrappedObject, QDataStream&  out);
   int  pos(QRegExp* theWrappedObject, int  nth = 0);
   QString  cap(QRegExp* theWrappedObject, int  nth = 0);
   QString  errorString(QRegExp* theWrappedObject);
   Qt::CaseSensitivity  caseSensitivity(QRegExp* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QREGEXP_H