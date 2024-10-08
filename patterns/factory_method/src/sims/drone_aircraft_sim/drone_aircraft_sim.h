#ifndef DRONE_AIRCRAFT_SIM_H
#define DRONE_AIRCRAFT_SIM_H

#include <memory>
#include <string>
#include <vector>
#include "aircraft_sim.h"

class DroneAircraftSim: public AircraftSim
{
public:
    ~DroneAircraftSim() = default;

protected:
    virtual std::vector<std::string> getAircraftTypesAvailable() override;
    virtual std::unique_ptr<IAircraft> createAircraft(const std::string type) override;
};

#endif // DRONE_AIRCRAFT_SIM_H
