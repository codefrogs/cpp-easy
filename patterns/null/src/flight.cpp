/*
 * cpp-easy by Codefrogs
 * Example usage of Nullable
 */
#include "flight.h"
#include <iostream>

using std::cout;
using std::endl;

Flight::Flight(){}

Flight::Flight(int id):m_flight_no(id)
{
  setNull(false) ;
}

void Flight::show()
{
  cout << "Flight: " << m_flight_no << endl;
}
