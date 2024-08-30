#include "oven.h" // Look in oven.h first!
#include "bread.h"


int main()
{
    Oven my_oven;    
    
    my_oven.add(new Bread);
    my_oven.cook();

    return 0;
}