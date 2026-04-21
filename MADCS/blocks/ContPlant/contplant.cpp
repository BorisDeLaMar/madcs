#include "contplant.h"
#include <QDebug>

ContPlant::ContPlant()
{
    m_A[2][0] = -1.0; m_A[2][1] = -3.0; m_A[2][2] = -2.0;
}

float ContPlant::update(float input, float dt)
{
    float x1 = m_pState.x1;
    float x2 = m_pState.x2;
    float x3 = m_pState.x3;


    m_pState.x1 = m_pIntegrators[0]->update(x2 + m_B[0]*input, dt);
    m_pState.x2 = m_pIntegrators[1]->update(x3 + m_B[1]*input, dt);

    float eqX3 = m_A[2][0]*x1 + m_A[2][1]*x2 + m_A[2][2]*x3 + m_B[2]*input;
    m_pState.x3 = m_pIntegrators[2]->update(eqX3, dt);

    m_pY = m_C[0]*m_pState.x1 + m_C[1]*m_pState.x2 + m_C[2]*m_pState.x3;
    return m_pY;
}



float ContPlant::updateSignal(float dt)
{
    float x1 = m_sState.x1;
    float x2 = m_sState.x2;

    m_sState.x1 = m_sIntegrators[0]->update(m_As[0][0]*x1 + m_As[0][1]*x2, dt);
    m_sState.x2 = m_sIntegrators[1]->update(m_As[1][0]*x1 + m_As[1][1]*x2, dt);

    m_sY = m_sState.x1;
    return m_sY;
}
