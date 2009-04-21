#include "PythonQtWrapper_QDateTime.h"

#include <PythonQtSignalReceiver.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtConversion.h>
#include <QVariant>
#include <qdatastream.h>
#include <qdatetime.h>

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime()
{ 
return new QDateTime(); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1)
{ 
return new QDateTime(arg__1); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec)
{ 
return new QDateTime(arg__1, arg__2, spec); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDateTime&  other)
{ 
return new QDateTime(other); }

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, const QString&  format)
{
return QDateTime::fromString(s, format);
}

void PythonQtWrapper_QDateTime::setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec)
{
 (*theWrappedObject).setTimeSpec(spec);
}

void PythonQtWrapper_QDateTime::writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
arg__1 <<  (*theWrappedObject);
}

QDateTime  PythonQtWrapper_QDateTime::addYears(QDateTime* theWrappedObject, int  years) const
{
return  (*theWrappedObject).addYears(years);
}

bool  PythonQtWrapper_QDateTime::operator_equal(QDateTime* theWrappedObject, const QDateTime&  other) const
{
return  (*theWrappedObject)== other;
}

int  PythonQtWrapper_QDateTime::utcOffset(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).utcOffset();
}

void PythonQtWrapper_QDateTime::readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
arg__1 >>  (*theWrappedObject);
}

void PythonQtWrapper_QDateTime::setUtcOffset(QDateTime* theWrappedObject, int  seconds)
{
 (*theWrappedObject).setUtcOffset(seconds);
}

uint  PythonQtWrapper_QDateTime::toTime_t(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).toTime_t();
}

QDateTime  PythonQtWrapper_QDateTime::toLocalTime(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).toLocalTime();
}

int  PythonQtWrapper_QDateTime::daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
return  (*theWrappedObject).daysTo(arg__1);
}

QDateTime  PythonQtWrapper_QDateTime::toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const
{
return  (*theWrappedObject).toTimeSpec(spec);
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC)
{
return QDateTime::fromTime_t(secsSince1Jan1970UTC);
}

QDateTime  PythonQtWrapper_QDateTime::addMSecs(QDateTime* theWrappedObject, qint64  msecs) const
{
return  (*theWrappedObject).addMSecs(msecs);
}

QDateTime  PythonQtWrapper_QDateTime::addMonths(QDateTime* theWrappedObject, int  months) const
{
return  (*theWrappedObject).addMonths(months);
}

bool  PythonQtWrapper_QDateTime::operator_less(QDateTime* theWrappedObject, const QDateTime&  other) const
{
return  (*theWrappedObject)< other;
}

QDateTime  PythonQtWrapper_QDateTime::addSecs(QDateTime* theWrappedObject, int  secs) const
{
return  (*theWrappedObject).addSecs(secs);
}

void PythonQtWrapper_QDateTime::setTime(QDateTime* theWrappedObject, const QTime&  time)
{
 (*theWrappedObject).setTime(time);
}

void PythonQtWrapper_QDateTime::setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC)
{
 (*theWrappedObject).setTime_t(secsSince1Jan1970UTC);
}

bool  PythonQtWrapper_QDateTime::isNull(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).isNull();
}

QTime  PythonQtWrapper_QDateTime::time(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).time();
}

QDateTime  PythonQtWrapper_QDateTime::toUTC(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).toUTC();
}

QDate  PythonQtWrapper_QDateTime::date(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).date();
}

Qt::TimeSpec  PythonQtWrapper_QDateTime::timeSpec(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).timeSpec();
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_currentDateTime()
{
return QDateTime::currentDateTime();
}

void PythonQtWrapper_QDateTime::setDate(QDateTime* theWrappedObject, const QDate&  date)
{
 (*theWrappedObject).setDate(date);
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f)
{
return QDateTime::fromString(s, f);
}

bool  PythonQtWrapper_QDateTime::isValid(QDateTime* theWrappedObject) const
{
return  (*theWrappedObject).isValid();
}

int  PythonQtWrapper_QDateTime::secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
return  (*theWrappedObject).secsTo(arg__1);
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, const QString&  format) const
{
return  (*theWrappedObject).toString(format);
}

QDateTime  PythonQtWrapper_QDateTime::addDays(QDateTime* theWrappedObject, int  days) const
{
return  (*theWrappedObject).addDays(days);
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, Qt::DateFormat  f) const
{
return  (*theWrappedObject).toString(f);
}

