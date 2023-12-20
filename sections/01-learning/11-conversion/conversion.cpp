/** 
 * Codefrogs easy-cpp
 *
 * Type conversion is the process of converting one type to another.
 * However great care has to be taken, as many errors result from 'narrowing' conversations.
 * These are conversions to type that can't contain the original value.
 */
#include <iostream>
#include <gsl/gsl> // We don't use this, but just in case you uncomment the code example for 'narrow_cast'. 

using std::cout;
using std::endl;

int main()
{
    int key = 34 ;
    float flt = key; // int  -> float: unsafe (but compiles OK, but the integer may not fit in the float)
    double d = flt; // float -> double: OK
		    
    char ch = key ; // integer -> char: unsafe (but compiles OK)
    bool b = ch ;   // char -> bool: unsafe (but compiles OK)

    float flt2{key}; // int -> float: unsafe (generates warning)
    double d2{flt2}; // float -> double: OK
		     
    char ch2{key} ; // int -> char:  unsafe (generates warning)
    bool b2{ch} ;   // char -> bool: unsafe (generates warning)

    int pressure_setting{10}; // preferred way to initialise
    
    cout << "Pressure (int): " << pressure_setting << endl ;

    double noise{0.5223};

    // We use a cast to change the type from int to double: {double} pressure_setting
    //
    double reading = double{pressure_setting} + noise; // generates a warning.
						       // This is because it's possible that a very large
						       // integer night not fit inside a double.

    // Any 'narrowing' cast is a possible source of errors, and hard to debug.
    // If you get a warning, then it's time to look again at your coding.

    // If you are sure you know what you are doing, cast away. But his is a common source of errors.
    // You can check if your cast is problematic by using gsl:narrow.
    // This is part of the Guidelines Support Library (GSL). 
    // We'll come back to these later! Feel free to skip for now.
    // see: https://github.com/Microsoft/GSL
    //
    // Example line where we explicitly say we accept the narrowing conversion:
    reading = gsl::narrow_cast<double>(pressure_setting) + noise; // No warning

    // C++98 - legacy style. Don't use this!:
    double ignore_me = double(pressure_setting) + noise; // Allowed (just!)
    
    cout << "Reading (double): " << reading << endl ;
}
