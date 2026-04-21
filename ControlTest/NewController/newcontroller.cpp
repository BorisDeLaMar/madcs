#include "newcontroller.h"

NewController::NewController(QObject *parent)
    : QObject{parent}
{
    m_integrator = new Integrator();
}

void NewController::processMessage(QByteArray output)
{
    qDebug() << output.toHex(' ');

    uint8_t crc = 0;

    for (uint8_t i = 0; i < output.size(); i++)
    {
        crc += *(reinterpret_cast<uint8_t*>(output.data() + i));
    }

    if (crc != 0xFF)
    {
        return;
    }

    float x = *(reinterpret_cast<float*>(output.data() + 2));
    float ref = *(reinterpret_cast<float*>(output.data() + 6));

    float kp = 2;
    float ki = 1.5;
    float e = ref - x;
    float control = kp*e + ki * m_integrator->state();

    m_integrator->update(e, 0.02);
    emit computed(control);

    qDebug() << x;
    qDebug() << ref;

}
