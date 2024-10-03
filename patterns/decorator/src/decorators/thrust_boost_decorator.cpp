#include "thrust_boost_decorator.h"
#include <string>
#include <memory>
#include <iostream>

using std::string;
using std::endl;

ThrustBoostDecorator::ThrustBoostDecorator(std::unique_ptr<IAircraft> aircraft):AircraftDecorator(std::move(aircraft)){};

void ThrustBoostDecorator::update(const double &time_delta)
{
    m_aircraft->update(time_delta);

    updateThrust();
}

void ThrustBoostDecorator::updateThrust()
{
    Feet alt = m_aircraft->getAltitude();
    Newtons thrust = m_aircraft->getThrust();
    Newtons boost{0};
    
    if (alt < Level::kTakeoff)
    {
        boost = calcBoost(Boost::kTakeoff, thrust);
    }
    else if (alt < Level::kClimb) 
    {
        boost = calcBoost(Boost::kClimb, thrust);
    }
    else if (alt < Level::kIntermediate)
    {
        boost = calcBoost(Boost::kIntermediate, thrust);
    }
    else
    {
        boost = calcBoost(Boost::kCruise, thrust);
    }

    m_aircraft->setThrust(thrust + boost); 
}

Newtons ThrustBoostDecorator::calcBoost(double percent, Newtons thrust)
{
    return percent*thrust/100.0;
}
