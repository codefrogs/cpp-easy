// Cpp-Easy by Codefrogs

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// In this example we show how we can use 'if' statements.
// They have the form if (<expression>){...}
// Where 'expression' is true or false.

int main()
{
    // Boolean values, either 'true' or 'false'.
    bool device_found = true ;
    bool is_device_on = false ;

    bool root_user = true ;
    bool verbose = true ;

    if (device_found == true)
    {
        cout << "Found device: " << device_found << endl;
    }

    cout << "Device is: " ;
    if ( is_device_on == true )
    {
	cout << "on" << endl;
    }
    else
    { 
	cout << "off" << endl;
    }

    if ( root_user == true )
    {
        cout << "Root user is logged in!" << endl ;
    }
    else if ( verbose == true )
    {
	   cout << "Standard user is logged in." << endl ;
    }

    // Other logic expressions are possible too, e.g. !=, >, <, >=, <=
    // But don't use '=' on its own!

    double wind_speed{30.56};
    if ( wind_speed > 25 )
    {
        cout << "Wind speed: " << "HIGH @" << wind_speed << " m/s" << endl ;
    } 

    // Using values directly
    if (5)
    {
        cout << "True: A non-zero is true, e.g. 5" << endl ;
    }
    else
    {
        cout << "False: Won't get here " << endl ; //
    }

    if (0)
    {
	cout << "True: Won't get here" << endl ;
    }
    else
    {
	cout << "False: Zero is converted to a false." << endl ;
    }

    if ('h')
    {
        cout << "True: characters are values." << endl ;
	int h_val = 'h';
	cout << "Value of h = " << h_val << endl ;
	// Remember a non-zero value translates to 'true'.
    }
    else
    {
	cout << "False: Won't get here" << endl ;
    }

    string empty_str;

    if ( empty_str.empty() )
    {
	cout << "True: empty_str is EMPTY." << endl ;
    }
    else
    {
	cout << "False: Won't get here" << endl ;
    }

    string colour("blue");

    // If the compare() function returns '0', the strings are a match.
    if ( colour.compare("blue") == 0 ) // Logical comparision
    {
	cout << "True: colour= " << colour << endl ;
    }
    else
    {
	cout << "False: colour= " << colour << endl ;
    }

    return 0;
}
