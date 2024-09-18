#include "light.h"

#include <iostream>
#include <memory>
#include "oven.h"

using std::cout;
using std::endl;

void Light::update(std::shared_ptr<Codefrogs::Observable> observable)
{
    std::shared_ptr<Oven> oven = std::static_pointer_cast<Oven>(observable); // We know there's only one observable.

    if (oven->isOn()) // pull data
    {
        cout << "Light: ON" << endl;
    }
    else
    {
        cout << "Light: OFF" << endl;
    }
}