#include "drone_aircraft_sim.h"
#include <memory>
#include "mini_pro.h"
#include "air_3.h"
#include "shadow.h"
#include "raptor.h"
#include "parrot.h"

using std::make_unique;
using std::unique_ptr;

std::vector<std::string> DroneAircraftSim::getAircraftTypesAvailable()
{
    return std::vector<std::string>({"Mini-Pro", "Air-3", "Shadow", "Raptor", "Parrot"});
}

unique_ptr<IAircraft> DroneAircraftSim::createAircraft(const std::string type)
{
    if (type == "Mini-Pro")
    {
        return make_unique<MiniPro>();
    }
    else if (type == "Air-3")
    {
        return make_unique<Air3>();
    }
    else if (type == "Shadow")
    {
        return make_unique<Shadow>();
    }
    else if (type == "Raptor")
    {
        return make_unique<Raptor>();
    }
    else if (type == "Parrot")
    {
        return make_unique<Parrot>();
    }

    else
    {
        return unique_ptr<IAircraft>{};
    }
}
