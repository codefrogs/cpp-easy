#include "pos.h"
#include <sstream>
#include <iostream>

std::ostream &operator<<(std::ostream &out, const Pos &p)
{
    std::stringstream ss;
    ss << "pos:{ x: " << p.x << ", y: " << p.y << " }" ;
    out << ss.str();
    
    return out;
}