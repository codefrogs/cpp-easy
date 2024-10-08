#include "spitefire_mk24.h"

#include <iostream>

using std::cout;
using std::endl;

void SpitefireMk24::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "S";
}

void SpitefireMk24::setup()
{
    cout << "SpitefireMk24:flying!" << endl;
    cout << "SpitefireMk24: Oil temp (40)" << endl;
    cout << "SpitefireMk24: COM2 (ON)" << endl;
    m_first_time = false;
}
