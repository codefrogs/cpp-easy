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
    std::vector<std::string> getAircraftTypesAvailable() override;
    std::unique_ptr<IAircraft> createAircraft(const std::string type) override;
};

#endif // CIVIL_AIRCRAFT_SIM_H
