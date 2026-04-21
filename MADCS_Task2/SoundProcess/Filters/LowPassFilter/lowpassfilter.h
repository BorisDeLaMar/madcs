#ifndef LOWPASSFILTER_H
#define LOWPASSFILTER_H

#include <cmath>
#include "Filters/AbstractFilter/abstractfilter.h"

class LowPassFilter : public AbstractFilter
{
public:
    explicit LowPassFilter(int sample_rate);

    virtual float update(float input) override;

private:
    int N = 21;
    double T = 1/(2*M_PI*N*100);

    double A = -1/T; double b = 1/T;

    double dt;
    double Ad; double bd;
};

#endif // LOWPASSFILTER_H
