#ifndef BOEING_777_H
#define BOEING_777_H

#include "iaircraft.h"

class Boeing777 : public IAircraft
{
public:
    ~Boeing777() = default;

    void fly(const double time_delta);

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // BOEING_777_H
