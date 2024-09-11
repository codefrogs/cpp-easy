#ifndef TURBOPROP_H
#define TURBOPROP_H

#include "engine_strategy.h"

class Turboprop: public EngineStrategy
{
    public:
        virtual void start() ;
};

#endif // TURBOPROP_H