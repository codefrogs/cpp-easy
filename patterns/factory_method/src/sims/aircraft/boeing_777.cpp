#include "boeing_777.h"

#include <iostream>

using std::cout;
using std::endl;

void Boeing777::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "B";
}

void Boeing777::setup()
{
    cout << "Boeing777:flying!" << endl;
    cout << "Boeing777: QNH (1003)" << endl;
    cout << "Boeing777: WXR (ON)" << endl;
    m_first_time = false;
}
