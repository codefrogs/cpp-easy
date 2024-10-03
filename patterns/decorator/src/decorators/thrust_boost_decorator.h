#ifndef THRUST_DECORATOR_H
#define THRUST_DECORATOR_H

#include <memory>
#include <random>
#include "aircraft_decorator.h"
#include "sci_units.h"

class ThrustBoostDecorator : public AircraftDecorator
{
    struct Boost
    {        
        static inline double kTakeoff = 20.0;
        static inline double kClimb = 15.0;
        static inline double kIntermediate = 8.0;
        static inline double kCruise = 1.0;
    };

    struct Level
    {
        static inline Feet kTakeoff = 3000;
        static inline Feet kClimb = 10000;
        static inline Feet kIntermediate = 20000;
    };

public:
    ThrustBoostDecorator(std::unique_ptr<IAircraft> aircraft);    
    
    virtual void update(const double &time_delta);

private:
    void updateThrust();
    Newtons calcBoost(double percent, Newtons thrust);

private:
    Newtons m_thrust;

};

#endif // ENGINE_CONTROL_DECORATOR_H