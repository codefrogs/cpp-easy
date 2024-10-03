#ifndef LOGGING_DECORATOR_H
#define LOGGING_DECORATOR_H

#include "aircraft_decorator.h"
#include <memory>

class LoggingDecorator : public AircraftDecorator
{
public:
    LoggingDecorator(std::unique_ptr<IAircraft> aircraft);

    virtual std::string getCallsign() const;

    void logMethodCall(const char *func) const;

    virtual Pos getPosition();
    virtual Deg getHeading();
    virtual Feet getAltitude();
    virtual Newtons getThrust();

    virtual void setPosition(const Pos &pos);
    virtual void setHeading(const Deg &heading);
    virtual void setAltitude(const Feet &altitude);
    virtual void setThrust(const Newtons &thrust);

    virtual std::string info() const;

    virtual void update(const double &time_delta);
};

#endif // LOGGING_DECORATOR_H