#include "shadow.h"

#include <iostream>

using std::cout;
using std::endl;

void Shadow::fly(const double time_delta)
{
    if (m_first_time)
    {
        setup();
    }
    else cout << "S";
}

void Shadow::setup()
{
    cout << "Shadow:flying!" << endl;
    cout << "Shadow: GPS (ON)" << endl;
    cout << "Shadow: Nav Waypoint (14)" << endl;
    cout << "Shadow: Battery (51%)" << endl;
    m_first_time = false;
}
