#ifndef POS_H
#define POS_H

#include <string>
#include <sstream>
#include <iostream>

struct Pos
{
    double x;
    double y;

    //friend std::ostream& operator << (std::ostream& out, Colors& inst) ;

};

std::ostream &operator<<(std::ostream &out, const Pos &p);

#endif