#include "aircraft_sim.h"
#include <iostream>

using std::cout;
using std::endl;

void AircraftSim::loadScenario()
{
    cout << "Loading scenario..." << endl;
};

void AircraftSim::run(int seconds)
{
    cout << "Running for " << seconds << " seconds." << endl;
    cout << "Finished!" << endl;
};

void AircraftSim::update(double time_delta)
{
    cout << "Updating simulation by step: " << time_delta << " secs." << endl;
};

std::unique_ptr<IAircraft> AircraftSim::createAircraft(const std::string type) { return nullptr; };
