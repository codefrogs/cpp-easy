#include "oven.h"
#include "light.h"

using namespace Codefrogs;

int main()
{
    Oven my_oven;
    Light light;

    my_oven.add(&light);
    my_oven.turnOn(true);
    my_oven.turnOn(false);

    return 0;
}
