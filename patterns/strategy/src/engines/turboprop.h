#ifndef TURBOPROP_H
#define TURBOPROP_H

#include "engine_strategy.h"

class TurbopropStrategy: public EngineStrategy
{
    public:
        virtual void start() ;
};

#endif // TURBOPROP_H