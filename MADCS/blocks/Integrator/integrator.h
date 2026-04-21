#ifndef INTEGRATOR_H
#define INTEGRATOR_H


class Integrator
{
public:
    Integrator(float state = 0.0);

    float update(float input, float dt);

    float state() const;

private:
    float m_pState = 0;
    float m_prevInput = 0;

    float m_plantDiscreteState = 0;
};

#endif // INTEGRATOR_H
