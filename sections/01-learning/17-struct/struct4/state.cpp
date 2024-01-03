// cpp-easy by Codefrogs

#include "state.h"
#include <iostream>

using std::cout ;
using std::endl ;

State::State( double temp, double pressure, double volume, double mass ): 
	temp{temp},
	pressure{pressure},
	volume{volume},
	mass{mass}
{
}

void State::show()
{
    cout << "T(" << temp     << "), "
         << "P(" << pressure << "), "
         << "V(" << volume   << "), "
         << "M(" << mass     << ")" << endl;
}
