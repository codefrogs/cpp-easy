// cpp-easy by Codefrogs

#ifndef STATE_H
#define STATE_H

// State of gas volume
struct State
{
    double temp;     // kelvin
    double pressure; // atm
    double volume;   // cm^3
    double mass;     // grams

    State() = default;
    State( double temp, double pressure, double volume, double mass );

    void show();
};

#endif // STATE_H
