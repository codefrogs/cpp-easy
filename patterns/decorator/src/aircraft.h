#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <string>
#include "iaircraft.h"

/**
 * This basic aircraft flies in a straight line.
   The default aircraft starts at a random position at cruise altitude.      
*/
class Aircraft: public IAircraft
{    
    static inline const Pos     kPosInitial{0,0};    
    static inline const Feet    kClimbRate{30};
    static inline const double  kSpeed{230};

    struct Thrust
    {        
        static inline Newtons kTakeoff      = 120'000;
        static inline Newtons kClimb        = 100'000;
        static inline Newtons kIntermediate =  90'000;
        static inline Newtons kCruise       =  70'000;
    };

    struct Level
    {
        static inline Feet kTakeoff{3'000};
        static inline Feet kClimb{10'000};
        static inline Feet kIntermediate{20'000};
        static inline Feet kCruiseAltitude{32'000};
    };

public:    
    Aircraft(const std::string &callsign);
    Aircraft(const std::string &callsign, const Pos &pos, const Feet &altitude = Level::kCruiseAltitude);

    void update(const double &time_delta);

    // These are the 'existing' methods that all aircraft must have.
    Pos     getPosition();
    Deg     getHeading();
    Feet    getAltitude();
    Newtons getThrust();

    void setPosition(const Pos &pos);
    void setHeading(const Deg &heading);
    void setAltitude(const Feet &altitude);
    void setThrust(const Newtons &thrust);

    std::string getCallsign() const;

    // Provides information about the state of the aircraft
    // This might include wind speed, GPS position, aircraft type.
    std::string info() const;
    
protected:
    void updatePosition();
    void updateAltitude();
    void updateThrust();

private:
    void initPos();

protected:
    std::string m_callsign;

    Pos  m_pos;
    Deg  m_heading{0};
    Feet m_altitude{Level::kCruiseAltitude};
    Newtons m_thrust{Thrust::kCruise};    
};

#endif // AIRCRAFT_H
