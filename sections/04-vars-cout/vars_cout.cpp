// cpp-easy by Codefrogs
#include <iostream>
#include <string>

// #include <format> // perhaps not available

using std::cout;
using std::endl;
using std::string;
// using std::format;

int main()
{
    cout << "cpp-easy by Codefrogs" << endl;

    // Defining some variables
    string myvar = "The answer to everything is:";
    int answer = 42;          // the old way to initialise
    string product = "chair"; // string
    int height{98};           // integer initialised another way

    float width = {23.3};    // float initialised another way again!
    string bird = "chicken"; // string
    const double gravity{9.8116};

    // Display variables with 'cout <<'
    cout << myvar << " " << answer << endl;
    cout << product << endl;
    cout << "HxW: " << height << ", " << width << endl;
    cout << "Bird: " << bird << endl;
    cout << "Gravity of the Earth:" << gravity << endl;
    cout << endl;

    /*
    // Not yet available on most compilers.
    string prefix = "data";
    string suffix = "dat";
    string file = "route";

    // Using brackets to allow variables to be printed next to text.
    cout << format("file: {}-${}.${}", prefix, file, suffix) << endl;  // Alternative way to display variables.
    cout << format("file: {2}-{1}.{3}", file, prefix, suffix) << endl; // Same again...but we reorder the arguments.
    */
}
