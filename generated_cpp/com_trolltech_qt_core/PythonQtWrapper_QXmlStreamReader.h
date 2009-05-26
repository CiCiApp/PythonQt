#ifndef PYTHONQTWRAPPER_QXMLSTREAMREADER_H
#define PYTHONQTWRAPPER_QXMLSTREAMREADER_H

#include <qxmlstream.h>
#include <QObject>

#include <PythonQt.h>

#include <QVariant>
#include <qbytearray.h>
#include <qiodevice.h>
#include <qvector.h>
#include <qxmlstream.h>

class PythonQtWrapper_QXmlStreamReader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(Error TokenType )
enum Error{
  NoError = QXmlStreamReader::NoError,   UnexpectedElementError = QXmlStreamReader::UnexpectedElementError,   CustomError = QXmlStreamReader::CustomError,   NotWellFormedError = QXmlStreamReader::NotWellFormedError,   PrematureEndOfDocumentError = QXmlStreamReader::PrematureEndOfDocumentError};
enum TokenType{
  NoToken = QXmlStreamReader::NoToken,   Invalid = QXmlStreamReader::Invalid,   StartDocument = QXmlStreamReader::StartDocument,   EndDocument = QXmlStreamReader::EndDocument,   StartElement = QXmlStreamReader::StartElement,   EndElement = QXmlStreamReader::EndElement,   Characters = QXmlStreamReader::Characters,   Comment = QXmlStreamReader::Comment,   DTD = QXmlStreamReader::DTD,   EntityReference = QXmlStreamReader::EntityReference,   ProcessingInstruction = QXmlStreamReader::ProcessingInstruction};
public slots:
QXmlStreamReader* new_QXmlStreamReader();
QXmlStreamReader* new_QXmlStreamReader(QIODevice*  device);
QXmlStreamReader* new_QXmlStreamReader(const QByteArray&  data);
QXmlStreamReader* new_QXmlStreamReader(const QString&  data);
void delete_QXmlStreamReader(QXmlStreamReader* obj) { delete obj; } 
   QString  errorString(QXmlStreamReader* theWrappedObject) const;
   void addExtraNamespaceDeclarations(QXmlStreamReader* theWrappedObject, const QVector<QXmlStreamNamespaceDeclaration >&  extraNamespaceDeclaractions);
   bool  isWhitespace(QXmlStreamReader* theWrappedObject) const;
   QStringRef  documentEncoding(QXmlStreamReader* theWrappedObject) const;
   QStringRef  name(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamAttributes  attributes(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamEntityResolver*  entityResolver(QXmlStreamReader* theWrappedObject) const;
   bool  namespaceProcessing(QXmlStreamReader* theWrappedObject) const;
   bool  isEndElement(QXmlStreamReader* theWrappedObject) const;
   qint64  lineNumber(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdSystemId(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamEntityDeclaration >  entityDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  isEntityReference(QXmlStreamReader* theWrappedObject) const;
   bool  isStandaloneDocument(QXmlStreamReader* theWrappedObject) const;
   qint64  characterOffset(QXmlStreamReader* theWrappedObject) const;
   QIODevice*  device(QXmlStreamReader* theWrappedObject) const;
   QString  readElementText(QXmlStreamReader* theWrappedObject);
   QVector<QXmlStreamNotationDeclaration >  notationDeclarations(QXmlStreamReader* theWrappedObject) const;
   QStringRef  dtdPublicId(QXmlStreamReader* theWrappedObject) const;
   void addData(QXmlStreamReader* theWrappedObject, const QByteArray&  data);
   QXmlStreamReader::TokenType  tokenType(QXmlStreamReader* theWrappedObject) const;
   QVector<QXmlStreamNamespaceDeclaration >  namespaceDeclarations(QXmlStreamReader* theWrappedObject) const;
   bool  isCDATA(QXmlStreamReader* theWrappedObject) const;
   bool  isStartElement(QXmlStreamReader* theWrappedObject) const;
   void setNamespaceProcessing(QXmlStreamReader* theWrappedObject, bool  arg__1);
   void addExtraNamespaceDeclaration(QXmlStreamReader* theWrappedObject, const QXmlStreamNamespaceDeclaration&  extraNamespaceDeclaraction);
   QStringRef  prefix(QXmlStreamReader* theWrappedObject) const;
   void setEntityResolver(QXmlStreamReader* theWrappedObject, QXmlStreamEntityResolver*  resolver);
   QStringRef  dtdName(QXmlStreamReader* theWrappedObject) const;
   void raiseError(QXmlStreamReader* theWrappedObject, const QString&  message = QString());
   QStringRef  documentVersion(QXmlStreamReader* theWrappedObject) const;
   QString  tokenString(QXmlStreamReader* theWrappedObject) const;
   void addData(QXmlStreamReader* theWrappedObject, const QString&  data);
   qint64  columnNumber(QXmlStreamReader* theWrappedObject) const;
   bool  isEndDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isStartDocument(QXmlStreamReader* theWrappedObject) const;
   bool  isDTD(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionTarget(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::TokenType  readNext(QXmlStreamReader* theWrappedObject);
   bool  isProcessingInstruction(QXmlStreamReader* theWrappedObject) const;
   bool  hasError(QXmlStreamReader* theWrappedObject) const;
   QStringRef  processingInstructionData(QXmlStreamReader* theWrappedObject) const;
   QStringRef  namespaceUri(QXmlStreamReader* theWrappedObject) const;
   bool  atEnd(QXmlStreamReader* theWrappedObject) const;
   QXmlStreamReader::Error  error(QXmlStreamReader* theWrappedObject) const;
   void setDevice(QXmlStreamReader* theWrappedObject, QIODevice*  device);
   bool  isCharacters(QXmlStreamReader* theWrappedObject) const;
   bool  isComment(QXmlStreamReader* theWrappedObject) const;
   void clear(QXmlStreamReader* theWrappedObject);
   QStringRef  qualifiedName(QXmlStreamReader* theWrappedObject) const;
   QStringRef  text(QXmlStreamReader* theWrappedObject) const;
};

#endif // PYTHONQTWRAPPER_QXMLSTREAMREADER_H