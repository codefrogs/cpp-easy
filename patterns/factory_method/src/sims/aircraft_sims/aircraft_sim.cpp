#include "aircraft_sim.h"
#include <iostream>
#include <algorithm>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
using std::unique_ptr;
using std::vector;

void AircraftSim::loadScenario()
{
    cout << "Loading scenario..." << endl;
    vector<string> aircraft_names = getAircraftTypesAvailable();

    for (const auto &name : aircraft_names)
    {
        m_aircrafts.push_back(createAircraft(name));
    }
    cout << "Loaded " << m_aircrafts.size() << " aircraft into simulation." << endl;
};

vector<std::string> AircraftSim::getAircraftTypesAvailable()
{
    return vector<string>();// { "Cessna-Skyhawk", "Airbus-A320", "Boeing-777", "Spitefire-Mk24", "Airbus-H120", "Gulfstream-G550"};
}

void AircraftSim::run(int seconds)
{
    cout << "Running for " << seconds << " seconds." << endl;
    for (int i{0}; i < seconds; ++i)
    {
        update(kOneSecond);
    }
    cout << "\nFinished!" << endl;
};

void AircraftSim::update(double time_delta)
{
    auto fly_op = [time_delta](unique_ptr<IAircraft> &aircraft)
    { aircraft->fly(time_delta); };

    std::ranges::for_each(m_aircrafts, fly_op);
    cout << ".";
};

std::unique_ptr<IAircraft> AircraftSim::createAircraft(const std::string type) { return nullptr; };
