#ifndef OVEN_H
#define OVEN_H
#include "observable.h"

using namespace Codefrogs;

class Oven: public Observable
{
    public:
    
    void turnOn(bool turn_on);
    bool isOn() const;

    private:
    bool setOn(bool turn_on);

    private:
    bool is_on = false;
    
};

#endif