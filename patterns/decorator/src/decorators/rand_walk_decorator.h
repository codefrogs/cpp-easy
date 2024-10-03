#ifndef RAND_HEADING_DECORATOR_H
#define RAND_HEADING_DECORATOR_H

#include "aircraft_decorator.h"

class RandWalkDecorator : public AircraftDecorator
{
   
public:
    RandWalkDecorator(std::unique_ptr<IAircraft> aircraft);    
    
    virtual void update(const double &time_delta);

private:
    void updateHeading();
    double headingNoise();
};

#endif // ENGINE_CONTROL_DECORATOR_H