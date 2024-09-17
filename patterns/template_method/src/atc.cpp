#include "atc.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// This template method knows how to manage an aircraft
void AirTrafficControl::manageAircraft(std::string callsign)
{
    setCallsign(callsign);
    doAssumeControl();   // common method
    doUplink("control"); // common method

    doClearance();
    doUplink("clearance");

    doRouting();
    doUplink("routing");

    doTransfer();
    doUplink("transfer");
}

void AirTrafficControl::setCallsign(const std::string &callsign)
{
    m_callsign = callsign;
}

void AirTrafficControl::doAssumeControl()
{
    cout << "Assuming control (" << m_name << "): " << m_callsign << endl;
}

void AirTrafficControl::doUplink(const std::string &msg)
{
    cout << "UpLink(" << m_callsign << "): " << msg << "\n" << endl;
}

GroundAirTrafficControl::GroundAirTrafficControl():AirTrafficControl("Ground"){}

void GroundAirTrafficControl::doClearance()
{
    cout << "Clearance("<< m_name << "): You are clear to taxi" << endl;
}

void GroundAirTrafficControl::doRouting()
{
    cout << "Routing("<< m_name <<"): Taxi to Runway 27 via Taxiways Alpha and Bravo, hold short of Runway 27." << endl;
}

void GroundAirTrafficControl::doTransfer()
{
    cout << "Transfer("<< m_name <<"): Contact Tower on 124.85MHz" << endl;
}

TowerAirTrafficControl::TowerAirTrafficControl():AirTrafficControl("Tower"){}

void TowerAirTrafficControl::doClearance()
{
    cout << "Clearance(" << m_name << "): Cleared for takeoff" << endl;
}

void TowerAirTrafficControl::doRouting()
{
    cout << "Routing(" << m_name << "):Runway 27, wind 270 at 10 knots" << endl;
}

void TowerAirTrafficControl::doTransfer()
{
    cout << "Transfer(" << m_name << "): Contact Departure on 123.69MHz" << endl;
}
