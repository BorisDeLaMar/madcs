#include "discreteplant.h"

DiscretePlant::DiscretePlant(uint32_t hz)
{
    m_hz = hz;

    if(m_hz == 10.0) {
        m_A = {{
            {0.9998, 0.0995, 0.0047},
            {-0.0047, 0.9858, 0.0902},
            {-0.0902, -0.2752, 0.8055}
        }};
        m_B = {0.1051, 0.1040, 0.0713};

        m_As = {{
            {0.9988, 0.1000},
            {-0.0250, 0.9988}
        }};
    } else if(m_hz == 100.0) {
        m_A = {{
            {1.0000, 0.0100, 0.0000},
            {-0.0000, 0.9999, 0.0099},
            {-0.0099, -0.0298, 0.9801},
        }};
        m_B = {0.0101, 0.0100, 0.0097};

        m_As = {{
            {1.0000, 0.0100},
            {-0.0025, 1.0000}
        }};
    } else {}
}

float DiscretePlant::discreteUpdate(float input)
{
    float x1 = m_pState.x1;
    float x2 = m_pState.x2;
    float x3 = m_pState.x3;

    m_pState.x1 = m_A.data[0][0]*x1 + m_A.data[0][1]*x2 + m_A.data[0][2]*x3;
    m_pState.x1 += m_B[0]*input;

    m_pState.x2 = m_A.data[1][0]*x1 + m_A.data[1][1]*x2 + m_A.data[1][2]*x3;
    m_pState.x2 += m_B[1]*input;

    m_pState.x3 = m_A.data[2][0]*x1 + m_A.data[2][1]*x2 + m_A.data[2][2]*x3;
    m_pState.x3 += m_B[2]*input;

    m_dY = m_C[0]*m_pState.x1 + m_C[1]*m_pState.x2 + m_C[2]*m_pState.x3;
    return m_dY;
}

float DiscretePlant::discreteUpdateSignal()
{
    float x1 = m_sState.x1;
    float x2 = m_sState.x2;

    m_sState.x1 = m_As.data[0][0]*x1 + m_As.data[0][1]*x2;
    m_sState.x2 = m_As.data[1][0]*x1 + m_As.data[1][1]*x2;

    m_sY = m_Cs[0]*m_sState.x1 + m_Cs[1]*m_sState.x2;
    return m_sY;
}


