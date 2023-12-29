// cpp-easy by Codefrogs
#include <iostream>
#include <string>
#include <ctime>

using std::cout;
using std::string;

/**
 * A simple function that just outputs to screen.
 * This function does not return any result, so has the return value 'void'.
 * It does not take any parameters.
 */
void show_some_text()
{
  cout << "1: show_some_text() called.\n\n"; // we use \n\n to start a new line, and add a blank line
}

/**
 * This function takes a value 'v', which it then adds a value onto.
 * It then displays the value.
 * The value is passed to the function using 'pass-by-value'. This means
 * the value is copied in full into the function. It also means that changes
 * to 'v' do not alter the value/variable that passed the value.
 */
void show_double_val(double v)
{
  v = v * 2.0;
  cout << "2: show_double_val(double v) called.\n";
  cout << "2: v   inside  function: " << v << "\n";
}

/**
 * A function that has one parameter. This function uses 'pass-by-value', which means
 * the value is 'copied' into the variable 'v'. For small values this is fine, but for large
 * objects, perhaps an array, it might be costly to copy everything.
 * Notice that we say that the value 'v' is constant by prefixing it with 'const'.
 * Const correctness is important, as it prevents silly errors where a constant should never change.
 * And example might be the value for a physical, or mathematical constant, e.g. pi.
 */
void display_val(const double v)
{
    cout << "3: display_val(const double v) called.\n";
    cout << "3: v = " << v << "\n\n";
}

/**
 * A function using a parameter 's' that it displays.
 * Here we 'pass-by-reference'. This means, rather than copy over the value
 * to the function, we give the address of the object (a reference) instead.
 * This 'address-value' can be used just like a value.
 * Notice we have marked this as 'const', as we don't intend to change the value
 * of the string.
 */
void display_string(const string &s)
{
  cout << "4: display_string(const string &s) called.\n";
  cout << "4: string value s: " << s << "\n\n";
}

/**
 * This time we have a value that is passed by reference.
 * We do this because we want to modify the value directly.
 */
void square_val(double &v)
{
    cout << "5: square_val(double &v) called.\n";
    v = v*v; // modify the value of 'v'
}

// We use a const reference here.
double square_of(const double &v)
{
    cout << "6: square_of(const double &v) called.\n";
    cout << "6: v: " << v << "\n";
    return v*v;
}

// Shows how we can return a string.
std::string get_date()
{
    cout << "7: get_date() called.\n";
    std::time_t date_now = std::time(nullptr);
    return std::ctime(&date_now);
}

/**
 * Returning some special favourite prime number.
 * This function shows how we can return an integer.
 */
int get_prime()
{
    cout << "8: get_prime called.\n";
    return 101;
}

// Utility function only.
void newline(){ cout << "\n" ; }

//
// Using the defined functions
// ---------------------------
int main()
{
  cout << "cpp-easy by Codefrogs\n";
  cout << "\n";

  // 1
  show_some_text(); // Just a simple function call.

  // 2
  double val{111.11} ;
  cout << "2: val = " << val << "\n";
  show_double_val(val); // function with an argument. It is passed by value.
  cout << "2: val outside function: " << val << "\n\n" ;
  
  // 3 - Passing a value used as a constant 
  display_val(val); // Displays the value 'val'

  // 4 - Passing a parameter using a constant 'pass-by-reference'.
  display_string( "Some text" ); // This converts the 'char *' text into a 'string'.

  // 5 - Modifying a parameter using 'pass-by-reference'.
  cout << "5: Current value of val: " << val << "\n";
  square_val(val);
  cout << "5: Current value of val: " << val << "\n\n";  // Value shown to one decimal place.

  // 6 - Pass by reference, a bit deeper
  // This won't work:
  // square_val(2.0);
  // There isn't a variable that can be modified.
  // 
  // However the function square_of(const double &v) can be used
  // with a number as it is a constant. So, we can do this:
  square_of(3.0); // For simplicity, We are not using the return value.
		  // But what happens here is that the compiler makes up a temporary object
		  // that holds the value '3.0' for us.
  
  double result{ square_of(3.0) }; // repeating call again
  cout << "6: Result of square: " << result << "\n\n";

  // 7 - Get a string value
  string date_now = get_date();
  cout << "7: Date now: " << date_now << "\n" ;

  // 8 - Get prime value
  int p = get_prime();
  cout << "8: Favourite prime: " << p << "\n\n";

  return 0;
}
