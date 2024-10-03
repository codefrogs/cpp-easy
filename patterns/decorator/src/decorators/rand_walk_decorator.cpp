#include "rand_walk_decorator.h"
#include <memory>
#include <random>
#include <numbers>

using std::string;
using std::endl;

RandWalkDecorator::RandWalkDecorator(std::unique_ptr<IAircraft> aircraft):AircraftDecorator(std::move(aircraft)){};


void RandWalkDecorator::update(const double &time_delta)
{
    m_aircraft->update(time_delta);
    updateHeading();
}

void RandWalkDecorator::updateHeading()
{    
    setHeading(getHeading() + headingNoise());
}

double RandWalkDecorator::headingNoise()
{
    using std::numbers::pi;

    std::random_device r;
    std::mt19937 engine(r());
    std::uniform_real_distribution<> real_dist(-0.5, 0.5);
 
    // normal distribution noise
    return real_dist(engine);
}