#include "civil_aircraft_sim.h"
#include <memory>
#include "cessna_skyhawk.h"

using std::make_unique;
using std::unique_ptr;

std::vector<std::string> CivilAircraftSim::getAircraftTypesAvailable()
{
    return std::vector<std::string>({ "Cessna-Skyhawk"}); //, "Airbus-A320", "Boeing-777", "Spitefire-Mk24", "Airbus-H120", "Gulfstream-G550"});
}

unique_ptr<IAircraft> CivilAircraftSim::createAircraft(const std::string type)
{
    if ( type == "Cessna-Skyhawk")
    {
        return make_unique<CessnaSkyhawk>();
    }
    else
    {
        return nullptr;
    }
}
