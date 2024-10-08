#ifndef MINI_PRO_H
#define MINI_PRO_H

#include "iaircraft.h"

class MiniPro : public IAircraft
{
public:
    ~MiniPro() = default;

    void fly(const double time_delta) override;

private:
    void setup();

private:
    bool m_first_time = true;
};

#endif // MINI_PRO_H
