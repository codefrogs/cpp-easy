#include "civil_aircraft_sim.h"
#include <memory>
#include "cessna_skyhawk.h"
#include "airbus_a320.h"
#include "boeing_777.h"
#include "spitefire_mk24.h"
#include "gulfstream_g550.h"

using std::make_unique;
using std::unique_ptr;

std::vector<std::string> CivilAircraftSim::getAircraftTypesAvailable()
{
    return std::vector<std::string>({ "Cessna-Skyhawk", "Airbus-A320", "Boeing-777", "Spitefire-Mk24", "Gulfstream-G550"});
}

unique_ptr<IAircraft> CivilAircraftSim::createAircraft(const std::string type)
{
    if ( type == "Cessna-Skyhawk")
    {
        return make_unique<CessnaSkyhawk>();
    }
    if ( type == "Airbus-A320")
    {
        return make_unique<AirbusA320>();
    }
    if ( type == "Boeing-777")
    {
        return make_unique<Boeing777>();
    }
    if ( type == "Spitefire-Mk24")
    {
        return make_unique<SpitefireMk24>();
    }
    if ( type == "Gulfstream-G550")
    {
        return make_unique<GulfstreamG550>();
    }
    else
    {
        return unique_ptr<IAircraft>{};
    }
}
