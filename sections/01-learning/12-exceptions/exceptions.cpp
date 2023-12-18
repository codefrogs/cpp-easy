// Cpp-Easy by Codefrogs
// When an error is detected we can either return an error code, or
// 'throw an exception'.
// When we return an error code, we are mixing error handing with code
// that handles the 'norminal' / 'good-case' flow of the code.
// This can make the code harder to follow.
//
// As an alternative, we can use 'exceptions'.
// This means that the error handing can be moved out of 
// the flow of the code.
//
#include <iostream>
#include <string>
#include <stdexcept> // We need this for exceptions

using std::cout;
using std::endl;
using std::string;

// We can give a literal type an alias as follows:
using Celcius = double; // just for a bit of clarity
using Kelvin = double;

// The basic equation for converting to degrees celcius
// Notice the 'noexcept' keyword. We are explicitly saying 
// that this does not 'throw' exceptions. This can mean the compiler
// can speed up the calculation.
Celcius kelvin_to_celcius(const Kelvin &k) noexcept // pass by reference
{
    return k - 273.15;
}

// Converts kelvin to celcius but also throws an error.
Celcius to_celcius(const Kelvin &k)
{
    if (k < 0.0)
    {
        throw std::out_of_range("Temperature below absolute minimum");
    }
    return kelvin_to_celcius(k);
}


int main()
{
    Kelvin absolute_zero_k{0.0};
    Kelvin bad_temperature_k{-1.0}; // This does not exist!

    Celcius temp_c     = kelvin_to_celcius(absolute_zero_k);
    Celcius bad_temp_c = kelvin_to_celcius(bad_temperature_k);

    cout << "Absolute zero (C)  : " << temp_c     << endl;
    cout << "Nonsensical temperature (C): " << bad_temp_c << endl;

    try // the try block
    {
        double temperature = to_celcius(-1.0);
	// more code...
	// process temperature
	// ...
    }
    catch ( std::out_of_range &e ) // catches are ignored if there's no exception.
    {
        cout << "Error: " << e.what() << endl;
	// we can do whatever we feel is necessary here.
	// Perhaps we send a termination message and
	// only then exit. Alternatively we just report an error,
	// and carry on.
	return 1; // we chose to terminate.
    }
    catch (...) // the catch-all exception handler
    {
	cout << "Error: Unknown exception" << endl;
	return 1; // terminate
    }

    return 0;
}

// Note that we could even have the catch outside the main function:
// e.g.
//
// int main() try {...}
// catch ( std::out_of_range &e){}
