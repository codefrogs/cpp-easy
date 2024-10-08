#ifndef AIRCRAFT_SIM_H
#define AIRCRAFT_SIM_H

#include <memory>
#include <string>
#include <vector>
#include "iaircraft.h"

class AircraftSim
{
    static const inline double kOneSecond{1.0};

public:
    ~AircraftSim() = default;
    void loadScenario();

    void run(int seconds);

protected:
    void update(double time_delta);

    virtual std::vector<std::string> getAircraftTypesAvailable();

    // Factory method
    virtual std::unique_ptr<IAircraft> createAircraft(const std::string type);

private:
    std::vector<std::unique_ptr<IAircraft>> m_aircrafts;
};

#endif // AIRCRAFT_SIM_H
