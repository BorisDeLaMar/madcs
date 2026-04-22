#include "integrator.h"

Integrator::Integrator(float state)
{
    m_pState = state;
}

float Integrator::update(float input, float dt)
{
    m_pState += (m_prevInput+input)*dt/2;
    m_prevInput = input;

    return m_pState;
}

float Integrator::state() const
{
    return m_pState;
}
