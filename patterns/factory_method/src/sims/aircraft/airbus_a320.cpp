#include "airbus_a320.h"

#include <iostream>

using std::cout;
using std::endl;

void AirbusA320::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "A";
}

void AirbusA320::setup()
{
    cout << "AirbusA320:flying!" << endl;
    cout << "AirbusA320: QNH (1003)" << endl;
    cout << "AirbusA320: VHF 2 (ON)" << endl;
    m_first_time = false;
}
