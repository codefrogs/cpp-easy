#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <memory>

class EngineStrategy;

class Aircraft
{
    public:
    void addEngine( std::unique_ptr<EngineStrategy> engine);
    void ignition_start();

    private:

    std::unique_ptr<EngineStrategy> m_engine;
};

#endif // AIRCRAFT_H