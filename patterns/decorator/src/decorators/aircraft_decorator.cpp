#include "aircraft_decorator.h"
#include <memory>

AircraftDecorator::AircraftDecorator(std::unique_ptr<IAircraft> aircraft) : m_aircraft(std::move(aircraft))
{
}

std::string AircraftDecorator::getCallsign() const
{
    return m_aircraft->getCallsign();
}

Pos AircraftDecorator::getPosition()
{
    return m_aircraft->getPosition();
}

Deg AircraftDecorator::getHeading()
{
    return m_aircraft->getHeading();
}

Feet AircraftDecorator::getAltitude()
{
    return m_aircraft->getAltitude();
}

Newtons AircraftDecorator::getThrust()
{
    return m_aircraft->getThrust();
}

void AircraftDecorator::setPosition(const Pos &pos)
{
    m_aircraft->setPosition(pos);
}

void AircraftDecorator::setHeading(const Deg &heading)
{
    m_aircraft->setHeading(heading);
}

void AircraftDecorator::setAltitude(const Feet &altitude)
{
    m_aircraft->setAltitude(altitude);
}
void AircraftDecorator::setThrust(const Newtons &thrust)
{
    m_aircraft->setThrust(thrust);
}

std::string AircraftDecorator::info() const
{
    return m_aircraft->info();
}
void AircraftDecorator::update(const double &time_delta)
{
    m_aircraft->update(time_delta);
}
