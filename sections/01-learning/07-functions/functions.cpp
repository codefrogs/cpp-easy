// Cpp-Easy by Codefrogs

#include <iostream>
#include <string>

void displayUnknown(void)
{
    std::cout << "1. Current User: Unknown" << std::endl;
}

void displayUser( const std::string name )
{
    std::cout << "2. Current User: " << name << std::endl ;
}

std::string getCurrentUser()
{
    return "Kira" ;
}

using std::cout;
using std::endl; // Let's us avoid having to repeat 'std'.
using std::string;

int main()
{

    displayUnknown();  // Basic minimal call.
    displayUser("Dave"); // Using a variable
   
    string name = getCurrentUser();
    cout << "3. User is: " << name << endl ;
 
    return 0;
}
