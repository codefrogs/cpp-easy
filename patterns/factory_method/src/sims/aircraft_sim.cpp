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
    for( int i{0}; i < seconds; ++i )
    {
        update(kOneSecond);
    }
    cout << "\nFinished!" << endl;
};

void AircraftSim::update(double time_delta)
{
    cout << "." ;
};

std::unique_ptr<IAircraft> AircraftSim::createAircraft(const std::string type) { return nullptr; };
