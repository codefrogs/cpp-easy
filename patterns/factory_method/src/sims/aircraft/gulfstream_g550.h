#ifndef GULFSTREAM_G550_H
#define GULFSTREAM_G550_H

#include "iaircraft.h"

class GulfstreamG550 : public IAircraft
{
public:
    ~GulfstreamG550() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // GULFSTREAM_G550_H
