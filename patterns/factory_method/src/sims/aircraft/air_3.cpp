#include "air_3.h"

#include <iostream>

using std::cout;
using std::endl;

void Air3::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "A";
}

void Air3::setup()
{
    cout << "Air3:flying!" << endl;
    cout << "Air3: 4G (Connected)" << endl;
    cout << "Air3: Battery (35%)" << endl;
    m_first_time = false;
}
