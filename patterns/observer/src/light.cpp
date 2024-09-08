#include "light.h"

#include <iostream>
#include "oven.h"

using std::cout;
using std::endl;

void Light::update( Codefrogs::Observable* observable )
{
    Oven *oven = static_cast<Oven*>(observable); // We know there's only one observable.
    if (oven->isOn())
    {
        cout << "Light: ON" << endl;        
    }
    else
    {
        cout << "Light: OFF" << endl;
    }
    
}