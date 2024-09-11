#include "aircraft.h"
#include "engine_strategy.h"

void Aircraft::addEngine( std::unique_ptr<EngineStrategy> engine)
{
    m_engine = std::move(engine);
}

void Aircraft::ignition_start()
{
    m_engine->start();    
}