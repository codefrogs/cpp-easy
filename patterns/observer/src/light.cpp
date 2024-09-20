#include "light.h"

#include <iostream>
#include "oven.h"

using std::cout;
using std::endl;

void Light::update(Codefrogs::Observable *observable)
{
    // We have strong coupling to the oven here, so if we knew there might be other
    // observers, we might create a interface instead.
    // But for this simple case, we will use the concrete class.
    //
    Oven *oven = static_cast<Oven*>(observable); // We know there's only one observable.
    
    
    if (oven->isOn()) // pull data
    {
        cout << "Light: ON" << endl;
    }
    else
    {
        cout << "Light: OFF" << endl;
    }
}
