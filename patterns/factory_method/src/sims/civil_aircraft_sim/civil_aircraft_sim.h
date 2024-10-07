#ifndef CIVIL_AIRCRAFT_SIM_H
#define CIVIL_AIRCRAFT_SIM_H

#include <memory>
#include <string>
#include <vector>
#include "aircraft_sim.h"

class CivilAircraftSim: public AircraftSim
{
public:
    ~CivilAircraftSim() = default;

protected:
    virtual std::vector<std::string> getAircraftTypesAvailable();
    virtual std::unique_ptr<IAircraft> createAircraft(const std::string type);
};

#endif // CIVIL_AIRCRAFT_SIM_H
