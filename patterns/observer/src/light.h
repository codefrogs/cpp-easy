#ifndef LIGHT_H
#define LIGHT_H

#include "observer.h"

class Light: public Codefrogs::Observer
{
    void update( Codefrogs::Observable* observable ) override;
};

#endif