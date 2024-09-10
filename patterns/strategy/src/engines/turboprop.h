#ifndef TURBOPROP_H
#define TURBOPROP_H

#include "engine.h"

class Turboprop: public Engine
{
    public:
        virtual void start() ;
};

#endif // TURBOPROP_H