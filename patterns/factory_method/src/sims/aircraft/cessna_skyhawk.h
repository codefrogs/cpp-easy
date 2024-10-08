#ifndef CESSNA_SKYHAWK_H
#define CESSNA_SKYHAWK_H

#include "iaircraft.h"

class CessnaSkyhawk : public IAircraft
{
public:
    ~CessnaSkyhawk() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // CESSNA_SKYHAWK_H
