#include "parrot.h"

#include <iostream>

using std::cout;
using std::endl;

void Parrot::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "P";
}

void Parrot::setup()
{
    cout << "Parrot:flying!" << endl;
    cout << "Parrot: AI mode (ON)" << endl;
    cout << "Parrot: Battery (12%)" << endl;
    m_first_time = false;
}
