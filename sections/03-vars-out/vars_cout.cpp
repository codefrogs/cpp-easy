#include <string>
#include <iostream>

int main()
{
    // How to declare variables

    // strings
    std::string myvar = "The answer to everything is:" ;
    std::string veg = "Potato" ;
    std::string product = "chair" ;
    std::string bird = "chicken" ;

    // integers
    int answer{42};   // Initialise with the number 42
    int height = 98 ; // Assignment

    float width{23.3} ; // float (although is treated as a string!)

    // Constant Variables
    const float gravity{9.81} ;
    const std::string dob = "17/05/1988" ;

    std::cout << "myvar = " << myvar << " " << answer << std::endl;
    std::cout << "veg = " << veg << std::endl;

    return 0;
}
