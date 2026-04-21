#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QVector>
#include <QDateTime>
#include "qcustomplot.h"

#include "blocks/gain/gain.h"
#include "blocks/Integrator/integrator.h"
#include "blocks/ContPlant/contplant.h"
#include "blocks/DiscretePlant/discreteplant.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void update();

private:
    Ui::Widget* ui;
    QGridLayout* mainlayout;

    QCustomPlot* generatorContinuousPlot;
    QCustomPlot* generatorDiscretePlot;

    QCustomPlot* plantContinuousPlot;
    QCustomPlot* plantDiscretePlot;

    QPushButton* startButton;
    QPushButton* saveButton;

    qint64 startTime = 0;
    qint64 relativeTime = 0;
    qint64 lastTime = 0;
    qint64 dt = 0;

    double m_curDiscretePlant;
    double m_prevDiscretePlant = 0;

    double m_curDiscreteSignal;
    double m_prevDiscreteSignal = -3.14/2;

    QTimer* timer;

    // --------------------------
    // Add pointer to the object here
    // --------------------------
    gain* object;   // <=

    Integrator* m_integrator;
    ContPlant* m_plant;
    DiscretePlant* m_discretePlant;
    // --------------------------
    // Add pointer to the object here
    // --------------------------
};

#endif // WIDGET_H
