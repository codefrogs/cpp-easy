#ifndef IAIRCRAFT_H
#define IAIRCRAFT_H
#include <string>
#include "sci_units.h"
#include "pos.h"

class IAircraft
{
public:
    virtual ~IAircraft() {};

    virtual std::string getCallsign() const = 0;

    // Physical properties
    virtual Pos     getPosition() = 0;
    virtual Deg     getHeading() = 0;
    virtual Feet    getAltitude() = 0;
    virtual Newtons getThrust() = 0;

    virtual void setPosition(const Pos &pos) = 0;
    virtual void setHeading(const Deg &heading) = 0;
    virtual void setAltitude(const Feet &altitude) = 0;
    virtual void setThrust(const Newtons &thrust) = 0;

    // Provides information about the state of the aircraft
    // This might include wind speed, GPS position, aircraft type.
    virtual std::string info() const = 0;

    virtual void update(const double &time_delta) = 0;

};

#endif // IAIRCRAFT_H
