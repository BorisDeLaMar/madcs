#ifndef CONTPLANT_H
#define CONTPLANT_H

#include <stdlib.h>
#include <math.h>
#include <vector>

#include "blocks/Integrator/integrator.h"
#include "blocks/gain/gain.h"
#include "structs.h"

class ContPlant
{
public:
    ContPlant();

    float update(float input, float dt);

    float updateSignal(float dt);

private:
    std::vector<Integrator*> m_pIntegrators{new Integrator(), new Integrator(), new Integrator()};
    std::vector<Integrator*> m_sIntegrators{new Integrator(-3.14/2), new Integrator(0)};

    double m_A[3][3];
    std::vector<double> m_B{1.0, 1.0, 1.0};
    std::vector<double> m_C{1.0, 1.0, 1.0};

    double m_As[2][2] = {
        {0.0, 1.0},
        {-0.25, 0.0}
    };;

    float m_pY = 0.0;
    float m_sY = 0.0;

    PlantState m_pState = {.x1 = 0.0, .x2 = 0.0, .x3 = 0.0};
    SignalState m_sState = {.x1 = 0.0, .x2 = 0.0};
};

#endif // CONTPLANT_H
