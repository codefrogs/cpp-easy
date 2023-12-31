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

    State a; // We can now do this with our new 'State' struct.
    
    show_state(a);

  return 0;
}
