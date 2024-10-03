#ifndef GPS_DECORATOR_H
#define GPS_DECORATOR_H

#include <memory>
#include <random>
#include "aircraft_decorator.h"

class GpsDecorator : public AircraftDecorator
{
public:
    GpsDecorator(std::unique_ptr<IAircraft> aircraft);    
    virtual std::string info() const;
    virtual void update(const double &time_delta);

private:
    void updateGps(const Pos &pos);

private:
    Pos m_gps;

};

#endif // GPS_DECORATOR_H