#ifndef AIRBUS_A320_H
#define AIRBUS_A320_H

#include "iaircraft.h"

class AirbusA320 : public IAircraft
{
public:
    ~AirbusA320() = default;

    void fly(const double time_delta) override;

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // AIRBUS_A320_H
