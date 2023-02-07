// Codefrogs easy-cpp

#include <iostream> 
using std::cout;
using std::endl;

int main()  // The start of any program.
{
    auto temp=70.3; // auto type is auto determined. 

    cout << (temp > 100 ? "Boiling": "Below temperature.") ;
    cout << endl; 

    auto state = "ON";
    auto colour = (state == "ON" ? "Red": "Black") ;
    cout << "State: " << state << ", Colour: " << colour << endl;
 
    return 0; // return 0 to indicate the program worked OK.
}
