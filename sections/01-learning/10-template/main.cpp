/** 
 * Codefrogs easy-cpp
 * First template
 *
 * A very simple example of a template.
 * You could call this the helloworld of templates.
 * Here we have a template class called Valued which uses the type 'int'
 * But it could easily be of type 'float' or 'double'.
 * 
 * You will naturally start to use templates when you noticed you are
 * creating classes that have the same functionality, but just have a
 * different type.
 * 
 * Notice that the functions are *in* the header.
 */
#include "value.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Value<int> pressure;
    
    cout << "Pressure: " << pressure.value() << endl ;

    pressure.add(10);

    cout << "Pressure: " << pressure.value() << endl ;
}