#ifndef ROCKET_H
#define ROCKET_H

#include "engine_strategy.h"

class RocketStrategy: public EngineStrategy
{
    public:
        virtual void start() ;
};

#endif // ROCKET_H