#ifndef SHADOW_H
#define SHADOW_H

#include "iaircraft.h"

class Shadow : public IAircraft
{
public:
    ~Shadow() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // SHADOW_H
