#include "gps_decorator.h"
#include <string>
#include <memory>
#include <iostream>

using std::string;
using std::endl;

GpsDecorator::GpsDecorator(std::unique_ptr<IAircraft> aircraft):AircraftDecorator(std::move(aircraft))
{
    updateGps(m_aircraft->getPosition());
};

std::string GpsDecorator::info() const
{
    std::stringstream ss;
    ss << "gps:{x: " << m_gps.x << ", y: " << m_gps.y << " }";    
    return m_aircraft->info() + ss.str();
}

void GpsDecorator::update(const double &time_delta)
{
    m_aircraft->update(time_delta);

    updateGps(m_aircraft->getPosition());
}

void GpsDecorator::updateGps(const Pos &pos)
{
    // Just for fun, we use this for some random numbers
    // You can ignore this!
    const double sigma{10};
    const double mean{0};
    
    std::mt19937 engine;
    std::normal_distribution<double> normal_dist(mean, sigma);
 
    // normal distribution noise
    auto noise_x = normal_dist(engine);
    auto noise_y = normal_dist(engine);

    m_gps.x = pos.x + noise_x;
    m_gps.y = pos.y + noise_y;
}
