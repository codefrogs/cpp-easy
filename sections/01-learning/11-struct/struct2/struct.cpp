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

    //State a; // without any parameters this is no longer allowed
                // But we could provide defaults to make this work.
		// Let's fix that in State3!
    
    State ni{288.15, 34.8, 8000.0, 278.6}; // nitrogen 28 g/mol
   
    show_state(ni);

    // Changing values :
    ni.temp = 3.4;
    ni.pressure = 42.3;
    ni.volume = 10000.0;
    ni.mass = 102;

    show_state(ni);

    // You can't do this if you are wondering!:
    // ni.temp{3.4} ;

    
  return 0;
}
