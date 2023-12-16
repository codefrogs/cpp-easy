// Cpp-Easy by Codefrogs

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

// In this example we show how we can use 'switch' statements.
// These are a useful alternative to a whole series of if/else statements
// They are also easier to read too!
// The value supplied needs to transate to an integer, so it could be
// a character, integer, and more often that not, an enumeration.
//
int main()
{
    cout << "Enter option (a-d): " ;
    char key{'?'};
    cin >> key;

    bool is_ok{true} ;

    switch (key)
    {
        case 'a':
	    cout << "You chose option A\n";
            break;
        case 'b':
            cout << "You chose option B\n";
            break;
	case 'c':
	    cout << "You chose option C\n";
            break;
	case 'd':
	    cout << "You chose option D\n";
            break;

	default: // Always have a default!
	    cout << "Unknown option: " << key << "\n";
	    is_ok = false;
    }

    if (is_ok)
    {
        cout << "Well done!\n" ;
    }
    else
    {
        cout << "Please try again!\n" ;
    }

    return 0;
}
