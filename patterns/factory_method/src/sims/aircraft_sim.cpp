#include "aircraft_sim.h"

void AircraftSim::loadScenario() {};

void AircraftSim::run(int seconds) {};

void AircraftSim::update(double time_delta) {};

std::unique_ptr<IAircraft> AircraftSim::createAircraft(const std::string type) { return nullptr; };
