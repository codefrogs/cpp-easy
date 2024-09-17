#include <string>
#include "atc.h"

int main()
{
    std::string aircraft{"BA42"};
    GroundAirTrafficControl ground_control;
    ground_control.manageAircraft(aircraft);

    TowerAirTrafficControl tower_control;
    tower_control.manageAircraft(aircraft);
    return 0;
}
