#ifndef AIRCRAFT_DECORATOR_H
#define AIRCRAFT_DECORATOR_H
#include <memory>
#include "iaircraft.h"


class AircraftDecorator: public IAircraft
{
    public:
    
    AircraftDecorator( std::unique_ptr<IAircraft> aircraft);
    ~AircraftDecorator() = default;

    // methods to forward onto concrete aircraft.
    virtual std::string getCallsign() const;    
    virtual Pos     getPosition() ;
    virtual Deg     getHeading() ;
    virtual Feet    getAltitude() ;
    virtual Newtons getThrust() ;

    virtual void setPosition(const Pos &pos) ;
    virtual void setHeading(const Deg &heading) ;
    virtual void setAltitude(const Feet &altitude) ;
    virtual void setThrust(const Newtons &thrust) ;

    virtual std::string info() const ;
    virtual void update(const double &time_delta) ;

    protected:
    std::unique_ptr<IAircraft> m_aircraft;

};

#endif // AIRCRAFT_DECORATOR_H
