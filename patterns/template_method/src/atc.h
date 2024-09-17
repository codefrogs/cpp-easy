#include <string>

/**
 * Template method example.
 *
 * Inherit this class to implement the hook methods used
 * by the template method (manageAircraft()).
 *
 * In this example, we give the air traffic control some set procedure for managing
 * an aircraft. (Which may bear little resemblance to reality!)
 *
 */
class AirTrafficControl
{
public:
    AirTrafficControl(const std::string &name) : m_name(name) {}

    virtual void manageAircraft(std::string callsign); // template method

protected:
            void doAssumeControl();
    virtual void doClearance() = 0; // hook method
    virtual void doRouting()   = 0; // hook method
    virtual void doTransfer()  = 0; // hook method

    void setCallsign(const std::string &callsign);

private:
    void doUplink(const std::string &msg);

protected:
    std::string m_name;     // ATC name
    std::string m_callsign; // current aircraft callsign
};

class GroundAirTrafficControl : public AirTrafficControl
{
public:
    explicit GroundAirTrafficControl();

protected:
    void doClearance();
    void doRouting();
    void doTransfer();
};

class TowerAirTrafficControl : public AirTrafficControl
{
public:
    explicit TowerAirTrafficControl();

protected:
    void doClearance();
    void doRouting();
    void doTransfer();
};
