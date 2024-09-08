#include "oven.h"

void Oven::turnOn(bool turn_on)
{    
    if (this->setOn(turn_on))
    {
        setChanged();
        notifyObservers();
    }
}

bool Oven::setOn(bool on)
{
    bool changed{false};

    if (is_on != on)
    {
        is_on = on;
        changed = true;        
    }
    return changed;
}

bool Oven::isOn() const
{
    return is_on;
}