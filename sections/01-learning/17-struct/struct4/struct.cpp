// cpp-easy by Codefrogs

#include <iostream>
#include <string>
#include "state.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "cpp-easy by Codefrogs\n";
    cout << "\n";

    State a; // We can now do this with our new 'State' struct.
   
    // We've moved the show function into the struct.
    // So now we don't need to pass any arguments. 
    cout << "Default value:" << endl ;
    a.show();

    a.temp = 221.48;
    a.pressure = 32.2;
    a.volume = 14213;
    a.mass = 122.8;

    cout << "Some value:" << endl;

    a.show();

    // Just remember, we use 'a' as a variable for this technical example.
    
  return 0;
}
