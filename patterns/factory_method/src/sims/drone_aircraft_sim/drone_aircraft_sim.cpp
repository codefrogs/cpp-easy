#include "drone_aircraft_sim.h"
#include <memory>
#include "mini_pro.h"

using std::make_unique;
using std::unique_ptr;

std::vector<std::string> DroneAircraftSim::getAircraftTypesAvailable()
{
    return std::vector<std::string>({ "Mini-Pro" });
}

unique_ptr<IAircraft> DroneAircraftSim::createAircraft(const std::string type)
{
    if ( type == "Mini-Pro")
    {
        return make_unique<MiniPro>();
    }
    else
    {
        return unique_ptr<IAircraft>{};
    }
}
