#include "aircraft.h"
#include "engine.h"

void Aircraft::addEngine( std::unique_ptr<Engine> engine)
{
    m_engine = std::move(engine);
}

void Aircraft::ignition_start()
{
    m_engine->start();    
}