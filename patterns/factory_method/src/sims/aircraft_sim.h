#ifndef AIRCRAFT_SIM_H
#define AIRCRAFT_SIM_H

#include <memory>
#include <string>
#include "iaircraft.h"

class AircraftSim
{
    public:

    void loadScenario(){};
    
    void run(int seconds){};

    protected:

    void update(double time_delta){};

    virtual std::unique_ptr<IAircraft> createAircraft(const std::string type){ return nullptr; } ;

};

#endif // AIRCRAFT_SIM_H