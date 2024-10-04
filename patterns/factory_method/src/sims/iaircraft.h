#ifndef IAIRCRAFT_H
#define IAIRCRAFT_H

class IAircraft
{
public:
    virtual void fly(const double time_delta) = 0;
};

#endif // IAIRCRAFT_H