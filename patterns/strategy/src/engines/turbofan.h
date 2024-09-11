#ifndef TURBOFAN_H
#define TURBOFAN_H

#include "engine_strategy.h"

class Turbofan: public EngineStrategy
{
    public:
        virtual void start() ;

};

#endif // TURBOFAN_H