#ifndef HTTPMETHOD_H
#define HTTPMETHOD_H

#include <QObject>

class HTTPMethod : public QObject
{
    Q_OBJECT
public:
    explicit HTTPMethod(QObject *parent = 0);
    ~HTTPMethod();

signals:

public slots:
};

#endif // HTTPMETHOD_H