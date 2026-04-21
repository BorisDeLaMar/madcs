#ifndef NEWCONTROLLER_H
#define NEWCONTROLLER_H

#include <QObject>
#include <QDebug>

#include "Blocks/integrator.h"

class NewController : public QObject
{
    Q_OBJECT
public:
    explicit NewController(QObject *parent = nullptr);

signals:
    void computed(float input);
public slots:
    void processMessage(QByteArray output);

private:
    Integrator* m_integrator;
};

#endif // NEWCONTROLLER_H
