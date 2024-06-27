#include <vector>
#include <iostream>

#include "flight.h"
 
using std::cout;
using std::endl;
using std::vector;

int main()
{
  vector<Flight> flights{32,215,115,422};
  
  flights.insert(flights.begin() + 2, Flight::Null );

  int index{0};

  for( auto& flight: flights )
  {
    if (flight.isNull())
    {
      cout << "Flight.isNull() == true at index: " << index << endl;
    }

    if (flight == Flight::Null )
    {
      cout << "Found Null flight at index: " << index << endl;
      continue;
    }

    flight.show();
    index++;
  }

  return 0;
}



