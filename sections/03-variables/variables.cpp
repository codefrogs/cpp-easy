/*
 * cpp-easy by Codefrogs
 *
 * Defining variables is easy.
 */
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main()
{

    std::cout << "cpp-easy by Codefrogs" << endl;
    cout << endl;
    cout << "Defining Variables" << endl;
    cout << "See the source code to see how!" << endl;
    cout << endl;

    // Initialising a variable, there's more than one way!
    string myvar = "An example of a string"; 
    string veg{"Potato"};                    
    string product = {"chair"};              
    auto colour = "purple" ; // implicitly a string

    // You can make a variable constant using 'const'
    const string dob = "17/05/1988";

    // Initialise an integer, there's more than one way!
    int height = 198;     
    int dist{515};     
    int ticks={23};    
    auto count = 5 ; 

    // Initialising other types, again there's many ways to do it!
    float weight{23.3} ;   
    double speed{301.8} ; 
    auto friction_n{15.2342} ; // implicitly a double

    // Constant Variables
    const double gravity{9.8116};
    int watch_out_for_this_one = 9.8 ; // gets converted to 9, (not 10)

    // Constant variables defined at compile time.
    // Some variables never change, and they are known *before* we run the program
    // in this case we use constexpr
    // So one constant we can rely on is perhaps pi.
    constexpr double pi = 3.141592653589 ;

}