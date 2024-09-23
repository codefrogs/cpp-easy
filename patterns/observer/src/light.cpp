#include "light.h"

#include <iostream>
#include "observable.h"
#include "switchable.h"

using std::cout;
using std::endl;

void Light::update(Codefrogs::Observable *observable)
{
    // We would have strong coupling to the oven here if we didn't use the interface.
    // i.e. if we had:
    // Oven* oven = dynamic_cast<Oven*>(observable)
    //
    Switchable *device = dynamic_cast<Switchable*>(observable);
    
    if (device->isOn()) // pull data
    {
        cout << "Light: ON" << endl;
    }
    else
    {
        cout << "Light: OFF" << endl;
    }
}
