#include "aircraft_sim.h"
#include <iostream>
#include <algorithm>

using std::cout;
using std::endl;
using std::unique_ptr;

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
    auto fly_op = [time_delta](unique_ptr<IAircraft>& aircraft){ aircraft->fly(time_delta); };

    std::ranges::for_each(m_aircrafts, fly_op) ;
    cout << "." ;
};

std::unique_ptr<IAircraft> AircraftSim::createAircraft(const std::string type) { return nullptr; };
