#ifndef ROCKET_STRATEGY_H
#define ROCKET_STRATEGY_H

#include "engine_strategy.h"

class RocketStrategy: public EngineStrategy
{
    public:
        virtual void start() ;
};

#endif // ROCKET_STRATEGY_H