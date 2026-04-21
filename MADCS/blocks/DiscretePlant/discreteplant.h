#ifndef DISCRETEPLANT_H
#define DISCRETEPLANT_H

#include <stdio.h>
#include <vector>
#include <stdint.h>

#include "structs.h"

class DiscretePlant
{
public:
    DiscretePlant(uint32_t hz);

    uint32_t m_hz;

    float discreteUpdate(float input);
    float discreteUpdateSignal();
private:
    Matrix3x3 m_A;
    std::vector<double> m_B;
    std::vector<double> m_C{1.0, 1.0, 1.0};

    Matrix2x2 m_As;
    std::vector<double> m_Cs{1.0, 0.0};

    float m_dY = 0.0;
    float m_sY = 0.0;

    PlantState m_pState = {.x1 = 0.0, .x2 = 0.0, .x3 = 0.0};
    SignalState m_sState = {.x1 = -3.14/2, .x2 = 0.0};
};

#endif // DISCRETEPLANT_H
