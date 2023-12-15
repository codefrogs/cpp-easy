// cpp-easy by Codefrogs
#include <iostream>
#include <string>
#include <ctime>

using std::cout;
using std::string;

// A simple function that just outputs to screen
void do_something()
{
  cout << "1: do_something(): simple void called.\n";
}

// A function using a parameter 's' that it displays.
void display_this(const string &s)
{
  cout << "display_this: " << s << "\n";
}

// Returning a string
std::string get_date()
{
  std::time_t date_now = std::time(nullptr);
  return std::ctime(&date_now);
}

// Returning favorite prime number
int get_prime()
{
  return 101;
}

//
// Using the defined functions
// ---------------------------
int main()
{
  cout << "cpp-easy by Codefrogs\n";

  do_something(); // Just a simple function call.

  // Passing a parameter to a function
  cout << "2: ";
  display_this( "Look no hands!" );

  // Get a string value
  string date_now = get_date();
  cout << "3: Date now - get_date(): " << date_now ;

  // Get prime value
  int p = get_prime();
  cout << "4: Prime - get_prime(): " << p << "\n";

  return 0;
}
