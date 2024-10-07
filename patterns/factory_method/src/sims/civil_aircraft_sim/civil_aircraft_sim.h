#ifndef CIVIL_AIRCRAFT_SIM_H
#define CIVIL_AIRCRAFT_SIM_H

#include <memory>
#include <string>
#include <vector>
#include "aircraft_sim.h"

class CivilAircraftSim:public AircraftSim
{

protected:
    virtual std::vector<std::string> getAircraftTypesAvailable(){return std::vector<std::string>(); }
    virtual std::unique_ptr<IAircraft> createAircraft(const std::string type){ return nullptr; }
};

#endif // CIVIL_AIRCRAFT_SIM_H
