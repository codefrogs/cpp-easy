#ifndef ROCKET_H
#define ROCKET_H

#include "engine.h"

class Rocket: public Engine
{
    public:
        virtual void start() ;
};

#endif // ROCKET_H