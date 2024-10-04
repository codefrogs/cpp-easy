#include <memory>

#include "aircraft_sim.h"
using std::make_unique;
using std::unique_ptr;

int main()
{
    unique_ptr<AircraftSim> sim_app = make_unique<AircraftSim>();
    return 0;
}
