#ifndef TURBOFAN_H
#define TURBOFAN_H

#include "engine_strategy.h"

class TurbofanStrategy: public EngineStrategy
{
    public:
        virtual void start() ;

};

#endif // TURBOFAN_H