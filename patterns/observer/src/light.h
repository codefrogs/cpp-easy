#ifndef LIGHT_H
#define LIGHT_H

#include "observer.h"
#include <memory>

class Light: public Codefrogs::Observer
{
    void update( std::shared_ptr<Codefrogs::Observable> observable ) override;
};

#endif