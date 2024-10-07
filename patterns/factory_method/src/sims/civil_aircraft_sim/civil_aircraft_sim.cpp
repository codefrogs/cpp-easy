#include "civil_aircraft_sim.h"

std::vector<std::string> CivilAircraftSim::getAircraftTypesAvailable()
{
    return std::vector<std::string>();
}

std::unique_ptr<IAircraft> CivilAircraftSim::createAircraft(const std::string type)
{
    return nullptr;
}
