#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <memory>

class Engine;

class Aircraft
{
    public:
    void addEngine( std::unique_ptr<Engine> engine);
    void ignition_start();

    private:

    std::unique_ptr<Engine> m_engine;
};

#endif // AIRCRAFT_H