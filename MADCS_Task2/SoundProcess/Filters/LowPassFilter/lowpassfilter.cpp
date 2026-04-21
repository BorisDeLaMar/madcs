#include "lowpassfilter.h"

#include <QDebug>

LowPassFilter::LowPassFilter(int sample_rate) : AbstractFilter()
{
    m_output = 0;
    dt = 1.0/sample_rate;

    Ad = exp(A*dt); bd = 1/A*(Ad - 1)*b;

    qDebug() << "LowPass" << dt << Ad << bd;
}

float LowPassFilter::update(float input)
{
    m_output = Ad*m_output + bd*input;
    return m_output;
}
