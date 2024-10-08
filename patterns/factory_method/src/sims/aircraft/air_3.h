#ifndef AIR_3_H
#define AIR_3_H

#include "iaircraft.h"

class Air3 : public IAircraft
{
public:
    ~Air3() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // AIR_3_H
