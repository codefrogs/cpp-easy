/**
 * cpp-easy by Codefrogs
 * Example usage of Nullable
 */
#ifndef _FLIGHT_H
#define _FLIGHT_H

#include "nullable.h"

class Flight: public Nullable<Flight>
{
  public:
    Flight();
    Flight(int id);

    void show();

  private:
    int m_flight_no; //!< the flight number

};

#endif // _FLIGHT_H