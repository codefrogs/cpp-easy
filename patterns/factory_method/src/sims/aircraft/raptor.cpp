#include "raptor.h"

#include <iostream>

using std::cout;
using std::endl;

void Raptor::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "R";
}

void Raptor::setup()
{
    cout << "Raptor:flying!" << endl;
    cout << "Raptor: Loiter mode (ON)" << endl;
    cout << "Raptor: Battery (67%)" << endl;
    m_first_time = false;
}
