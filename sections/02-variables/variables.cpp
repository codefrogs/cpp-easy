#include <string>
#include <iostream>

int main()
{
    // How to declare variables

    // strings
    std::string myvar{"The answer to everything is:"} ;
    std::string veg{"Potato"} ;
    std::string product{"chair"} ;
    std::string bird = "chicken" ; // Legacy assignment! The old way!

    // integers
    int answer{42};   // Brace initialisation
    int height = 98 ; // Legacy assignment!

    float width{23.3} ; // float
    double hardness{1.3} ; // double

    // Constant Variables
    const float gravity{9.81} ;
    const std::string dob{"17/05/1988"} ;

    std::cout << "All variables have been set!" << std::endl ;

    return 0;
}
