#include "cessna_skyhawk.h"

#include <iostream>

using std::cout;
using std::endl;

void CessnaSkyhawk::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "C";
}

void CessnaSkyhawk::setup()
{
    cout << "CessnaSkyhaw:flying!" << endl;
    cout << "CessnaSkyhaw:Night mode OFF" << endl;
    m_first_time = false;
}
