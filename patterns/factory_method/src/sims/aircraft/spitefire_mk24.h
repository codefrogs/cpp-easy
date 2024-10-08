#ifndef SPITEFIRE_MK24_H
#define SPITEFIRE_MK24_H

#include "iaircraft.h"

class SpitefireMk24 : public IAircraft
{
public:
    ~SpitefireMk24() = default;

    void fly(const double time_delta) override;

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // BOEING_SPITEFIRE_MK24_H777_H
