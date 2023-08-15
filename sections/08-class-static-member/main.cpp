#include <iostream>
#include "shape.h"

using std::cout;
using std::endl;

int main()
{
    cout << "Codefrogs - cpp-easy" << endl;
    cout << "Static member example" << endl;
    cout << endl;

    Shape rectangle(23);

    if (rectangle.id() == Shape::root.id() )
    {
        cout << "Found root shape." << endl ;
    }
    else
    {
        cout << "Shape is not the root node." << endl;
    }

}