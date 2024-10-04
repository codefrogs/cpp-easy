#include <memory>

#include "aircraft_sim.h"
using std::make_unique;
using std::unique_ptr;

int main()
{
    constexpr int kOneMin{60};
    unique_ptr<AircraftSim> sim_app = make_unique<AircraftSim>();
    sim_app->loadScenario();
    sim_app->run(kOneMin);

    return 0;
}
