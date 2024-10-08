#ifndef PARROT_H
#define PARROT_H

#include "iaircraft.h"

class Parrot : public IAircraft
{
public:
    ~Parrot() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // PARROT_H
