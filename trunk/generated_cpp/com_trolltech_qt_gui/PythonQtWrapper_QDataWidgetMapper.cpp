#include "PythonQtWrapper_QDataWidgetMapper.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qwidget.h>

void PythonQtShell_QDataWidgetMapper::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "childEvent(QDataWidgetMapper*,QChildEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDataWidgetMapper::childEvent(arg__1);
}
void PythonQtShell_QDataWidgetMapper::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "customEvent(QDataWidgetMapper*,QEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDataWidgetMapper::customEvent(arg__1);
}
bool  PythonQtShell_QDataWidgetMapper::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "event(QDataWidgetMapper*,QEvent* )");
      bool  returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QDataWidgetMapper::event(arg__1);
}
bool  PythonQtShell_QDataWidgetMapper::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "eventFilter(QDataWidgetMapper*,QObject* ,QEvent* )");
      bool  returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
      returnValue = *((bool *)args[0]);
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QDataWidgetMapper::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QDataWidgetMapper::setCurrentIndex(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setCurrentIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "setCurrentIndex(QDataWidgetMapper*,int )");
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDataWidgetMapper::setCurrentIndex(index);
}
void PythonQtShell_QDataWidgetMapper::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromMetaObjectAndSignature(
      &PythonQtWrapper_QDataWidgetMapper::staticMetaObject,
      "timerEvent(QDataWidgetMapper*,QTimerEvent* )");
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  QDataWidgetMapper::timerEvent(arg__1);
}
QDataWidgetMapper* PythonQtWrapper_QDataWidgetMapper::new_QDataWidgetMapper(QObject*  parent)
{ 
return new PythonQtShell_QDataWidgetMapper(parent); }

QDataWidgetMapper::SubmitPolicy  PythonQtWrapper_QDataWidgetMapper::submitPolicy(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->submitPolicy();
}

void PythonQtWrapper_QDataWidgetMapper::setModel(QDataWidgetMapper* theWrappedObject, QAbstractItemModel*  model)
{
 theWrappedObject->setModel(model);
}

QAbstractItemDelegate*  PythonQtWrapper_QDataWidgetMapper::itemDelegate(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->itemDelegate();
}

void PythonQtWrapper_QDataWidgetMapper::setItemDelegate(QDataWidgetMapper* theWrappedObject, QAbstractItemDelegate*  delegate)
{
 theWrappedObject->setItemDelegate(delegate);
}

void PythonQtWrapper_QDataWidgetMapper::addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section, const QByteArray&  propertyName)
{
 theWrappedObject->addMapping(widget, section, propertyName);
}

int  PythonQtWrapper_QDataWidgetMapper::mappedSection(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const
{
return  theWrappedObject->mappedSection(widget);
}

QAbstractItemModel*  PythonQtWrapper_QDataWidgetMapper::model(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->model();
}

void PythonQtWrapper_QDataWidgetMapper::addMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget, int  section)
{
 theWrappedObject->addMapping(widget, section);
}

void PythonQtWrapper_QDataWidgetMapper::setRootIndex(QDataWidgetMapper* theWrappedObject, const QModelIndex&  index)
{
 theWrappedObject->setRootIndex(index);
}

void PythonQtWrapper_QDataWidgetMapper::setOrientation(QDataWidgetMapper* theWrappedObject, Qt::Orientation  aOrientation)
{
 theWrappedObject->setOrientation(aOrientation);
}

QModelIndex  PythonQtWrapper_QDataWidgetMapper::rootIndex(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->rootIndex();
}

void PythonQtWrapper_QDataWidgetMapper::setSubmitPolicy(QDataWidgetMapper* theWrappedObject, QDataWidgetMapper::SubmitPolicy  policy)
{
 theWrappedObject->setSubmitPolicy(policy);
}

void PythonQtWrapper_QDataWidgetMapper::clearMapping(QDataWidgetMapper* theWrappedObject)
{
 theWrappedObject->clearMapping();
}

QByteArray  PythonQtWrapper_QDataWidgetMapper::mappedPropertyName(QDataWidgetMapper* theWrappedObject, QWidget*  widget) const
{
return  theWrappedObject->mappedPropertyName(widget);
}

int  PythonQtWrapper_QDataWidgetMapper::currentIndex(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->currentIndex();
}

QWidget*  PythonQtWrapper_QDataWidgetMapper::mappedWidgetAt(QDataWidgetMapper* theWrappedObject, int  section) const
{
return  theWrappedObject->mappedWidgetAt(section);
}

Qt::Orientation  PythonQtWrapper_QDataWidgetMapper::orientation(QDataWidgetMapper* theWrappedObject) const
{
return  theWrappedObject->orientation();
}

void PythonQtWrapper_QDataWidgetMapper::removeMapping(QDataWidgetMapper* theWrappedObject, QWidget*  widget)
{
 theWrappedObject->removeMapping(widget);
}

