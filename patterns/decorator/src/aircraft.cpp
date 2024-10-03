#include "aircraft.h"

#include <string>
#include <cmath>
#include <iostream>
#include <numbers>
#include <random>
#include "pos.h"

using std::string;
using std::cout ;
using std::endl;

Aircraft::Aircraft(const std::string &callsign):m_callsign(callsign)
{
    initPos();
}

Aircraft::Aircraft(const string &callsign,  const Pos &pos, const Feet &altitude): 
    m_callsign(callsign), 
    m_pos{pos},
    m_altitude(altitude)    
    {
        updateThrust(); // thrust should match altitude
    }

void Aircraft::initPos()
{
    std::random_device r;
    std::mt19937 engine(r());
    std::uniform_real_distribution<> real_dist(-1000.0, 1000.0);
 
    // normal distribution noise
    m_pos.x = real_dist(engine);
    m_pos.y = real_dist(engine);
}
    
void Aircraft::update(const double &time_delta)
{
    updatePosition();
    updateAltitude();
    updateThrust();
}

void Aircraft::updatePosition()
{   
    using std::numbers::pi;
    const double speed{kSpeed};
    double heading = getHeading()*pi/180;

    double dx = speed*cos(heading);
    double dy = speed*sin(heading);

    Pos pos = getPosition();
    Pos new_pos{ pos.x+dx, pos.y+dy};

    setPosition(new_pos);

}

void Aircraft::updateAltitude()
{
    Feet alt = getAltitude();

    if ( alt < Level::kCruiseAltitude )
    {
        setAltitude( alt + kClimbRate );
    }
}

void Aircraft::updateThrust()
{
    Feet alt = getAltitude();
    Newtons thrust{0};

    if (alt < Level::kTakeoff)
    {
        thrust = Thrust::kTakeoff;
    }
    else if (alt < Level::kClimb) 
    {
        thrust = Thrust::kClimb;
    }
    else if (alt < Level::kIntermediate)
    {
        thrust = Thrust::kIntermediate;
    }
    else
    {
        thrust = Thrust::kCruise;
    }
    setThrust(thrust);
}

Pos Aircraft::getPosition(){ return m_pos;}
double Aircraft::getHeading(){ return m_heading; } ;
double Aircraft::getAltitude(){ return m_altitude; } ;
Newtons Aircraft::getThrust(){ return m_thrust;}
std::string Aircraft::getCallsign() const { return m_callsign;}

void Aircraft::setPosition(const Pos &pos){m_pos = pos;}
void Aircraft::setHeading(const Deg &heading){m_heading = heading;}
void Aircraft::setAltitude(const Feet &altitude){m_altitude = altitude;}
void Aircraft::setThrust(const Newtons &thrust){m_thrust = thrust;}

string Aircraft::info() const
{   
    std::stringstream ss;  
    ss << "----INFO----" << endl;
    ss << "callsign: " << m_callsign << endl ;
    ss << m_pos << endl;
    ss << "heading: " << m_heading << endl ;
    ss << "altitude: " << m_altitude << endl ;
    ss << "thrust: " << m_thrust << endl;
    
    return ss.str();
} 
