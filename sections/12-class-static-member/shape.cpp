#include "shape.h"

Shape Shape::root(0);  

Shape::Shape():m_id(-1){}

Shape::Shape(const int id): m_id(id){}

