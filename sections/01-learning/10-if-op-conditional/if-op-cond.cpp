// Cpp-Easy by Codefrogs

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// In this example we show how we can use 'the conditional operator'.
// They have the form:
//                     (<condition expression>)? <expression> : <expression> ;

double device_read_temp(bool in_celsius)
{
    //...Some code to interact with some external device
    //...Which then returns a temperature in kelvin.
    //...
    double temp_kelvin{77.36}; // Nitrogen boiling point in Kelvin

    double temp_celsius = temp_kelvin - 273.2;

    // Conditional operator
    // The conditional expression could be a lot more complicated,
    // but it should resolve to a true or false expression.
    return (in_celsius)? temp_celsius: temp_celsius + 32.0; 
}

int main()
{
    bool in_celsius{true} ;
    double device_reading{device_read_temp(in_celsius)};
    cout << "1: Device reading (°C): " << device_reading << endl ;

    in_celsius = false;
    device_reading = device_read_temp(in_celsius);
    cout << "2: Device reading (°F): " << device_reading << endl ;
 
    return 0;
}
