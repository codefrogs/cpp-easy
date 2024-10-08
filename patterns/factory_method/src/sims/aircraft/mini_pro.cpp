#include "mini_pro.h"

#include <iostream>

using std::cout;
using std::endl;

void MiniPro::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "M";
}

void MiniPro::setup()
{
    cout << "MiniPro:flying!" << endl;
    cout << "MiniPro: Tracking (ON)" << endl;
    cout << "MiniPro: Battery (93%)" << endl;
    m_first_time = false;
}
