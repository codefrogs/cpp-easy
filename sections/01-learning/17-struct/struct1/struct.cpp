// cpp-easy by Codefrogs

#include <iostream>
#include <string>
#include "state.h"

using std::cout;
using std::endl;
using std::string;

void show_state(const State& s)
{
    cout << "T(" << s.temp     << "), " 
	 << "P(" << s.pressure << "), " 
	 << "V(" << s.volume   << "), "
	 << "M(" << s.mass     << ")" << endl;
}

int main()
{
    cout << "cpp-easy by Codefrogs\n";
    cout << "\n";

    // Our simple state struct can be initialised in the following ways:
   
    State a; // without any parameters, the values are uninitialised. *Not recommended*.
	     // You will find unitialised values a source or hard to find bugs!
   
    State ni{288.15, 34.8, 8000.0, 278.6}; // nitrogen 28 g/mol
  
    // Another way 
    State he = {288.15, 236.5, 8000.0, 273.6}; // helium 4 g/mol
 
    // Old C++98 style 
    State ox(288.15, 9.68, 8000.0, 44.5); // oxygen 15.9994 g/mol

    // Another way, assignment
    State air = State(288.16, 3.34, 8000.0, 27.9); // air 28.97 g/mol

    cout << "The line below may have unitialised values." << endl; 
    show_state(a);
    show_state(ni);
    show_state(he);
    show_state(ox);
    show_state(air);

    // Note: the names used here typically would not be used in production code.
    
  return 0;
}
