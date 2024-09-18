#include "oven.h"
#include "light.h"

using namespace Codefrogs;

int main()
{
    std::shared_ptr my_oven = std::make_shared<Oven>();
    Light light;

    my_oven->add(&light);
    my_oven->turnOn(true);
    my_oven->turnOn(false);

    return 0;
}
