#include "logging_decorator.h"
#include <iostream>

using std::cout;
using std::endl;

LoggingDecorator::LoggingDecorator(std::unique_ptr<IAircraft> aircraft):AircraftDecorator(std::move(aircraft)){};

std::string LoggingDecorator::getCallsign() const 
{
    logMethodCall(__func__);
    return m_aircraft->getCallsign();
}

Pos LoggingDecorator::getPosition()
{
    logMethodCall(__func__);
    return m_aircraft->getPosition();
}

Deg LoggingDecorator::getHeading()
{
    logMethodCall(__func__);
    return m_aircraft->getHeading();
}

Feet LoggingDecorator::getAltitude()
{
    logMethodCall(__func__);
    return m_aircraft->getAltitude();
}

Newtons LoggingDecorator::getThrust()
{
    logMethodCall(__func__);
    return m_aircraft->getThrust();
}

void LoggingDecorator::setPosition(const Pos &pos)
{
    logMethodCall(__func__);
    m_aircraft->setPosition(pos);
}

void LoggingDecorator::setHeading(const Deg &heading)
{
    logMethodCall(__func__);
    m_aircraft->setHeading(heading);
}

void LoggingDecorator::setAltitude(const Feet &altitude)
{
    logMethodCall(__func__);
    m_aircraft->setAltitude(altitude);
}

void LoggingDecorator::setThrust(const Newtons &thrust)
{
    logMethodCall(__func__);
    m_aircraft->setThrust(thrust);
};

std::string LoggingDecorator::info() const
{
    logMethodCall(__func__);
    return m_aircraft->info();
}

void LoggingDecorator::update(const double &time_delta)
{
    logMethodCall(__func__);
    m_aircraft->update(time_delta);
}

void LoggingDecorator::logMethodCall(const char* func) const
{
    cout << "Log(" << m_aircraft->getCallsign() << "): " << func << " called." << endl;
}
