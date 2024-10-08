#ifndef RAPTOR_H
#define RAPTOR_H

#include "iaircraft.h"

class Raptor : public IAircraft
{
public:
    ~Raptor() = default;

    void fly(const double time_delta) override;

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // RAPTOR_H
