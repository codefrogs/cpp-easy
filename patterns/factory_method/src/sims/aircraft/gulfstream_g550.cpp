#include "gulfstream_g550.h"

#include <iostream>

using std::cout;
using std::endl;

void GulfstreamG550::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "G";
}

void GulfstreamG550::setup()
{
    cout << "GulfstreamG550: flying!" << endl;
    cout << "GulfstreamG550: Steep approach mode (ON)" << endl;
    m_first_time = false;
}
