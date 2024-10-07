#include <memory>
#include <iostream>

#include "aircraft_sim.h"
// #include "civil_aircraft_sim.h"
using std::make_unique;
using std::unique_ptr;

using std::cout;
using std::endl;

int main()
{
    cout << "main: CALLED" << endl;

    constexpr int kOneMin{60};
    unique_ptr<AircraftSim> sim_app = make_unique<AircraftSim>();
    // unique_ptr<AircraftSim> sim_app = make_unique<CivilAircraftSim>();
    sim_app->loadScenario();
    sim_app->run(kOneMin);

    return 0;
}
