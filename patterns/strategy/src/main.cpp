#include <memory>
#include <vector>
#include <algorithm>

#include "aircraft.h"
#include "turbofan.h"
#include "turboprop.h"
#include "rocket.h"

using std::unique_ptr;
using std::make_unique;
using std::vector;

int main()
{
    vector<unique_ptr<Aircraft>> aircrafts;
    
    // Let's make some aircraft.
    auto aircraft1 = make_unique<Aircraft>();
    auto aircraft2 = make_unique<Aircraft>();
    auto aircraft3 = make_unique<Aircraft>();

    // Now we add different types of engine (our strategies!!!).
    aircraft1->addEngine( make_unique<TurbofanStrategy>() );
    aircraft2->addEngine( make_unique<TurbopropStrategy>());
    aircraft3->addEngine( make_unique<RocketStrategy>());

    // For convenience we put them in a container.
    aircrafts.push_back(std::move(aircraft1));
    aircrafts.push_back(std::move(aircraft2));
    aircrafts.push_back(std::move(aircraft3));

    // Let's turn on all the engines!
    auto ign_start_op = [](unique_ptr<Aircraft>& aircraft){ aircraft->ignition_start(); };
    std::ranges::for_each(aircrafts, ign_start_op) ;

    return 0;
}
