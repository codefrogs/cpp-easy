#include <memory>
#include <vector>
#include <algorithm>

#include "aircraft.h"
#include "logging_decorator.h"
#include "gps_decorator.h"
#include "thrust_boost_decorator.h"
#include "rand_walk_decorator.h"

using std::unique_ptr;
using std::make_unique;
using std::vector;

int main()
{
    vector<unique_ptr<IAircraft>> aircrafts;
    
    // These are 'cross cutting concern' decorators.
    // They just add features without modifying aircraft behaviour.
    auto aircraft1 = make_unique<LoggingDecorator>(
                        make_unique<GpsDecorator>(
                            make_unique<Aircraft>("BA42")));

    // These decorators modify behaviour.
    // Thing of these as new skins!
    auto aircraft2 = make_unique<RandWalkDecorator>(
                        make_unique<ThrustBoostDecorator>(
                            make_unique<Aircraft>("EZ326", Pos{300,200}, 0)));

    // For convenience we put the aircraft in a container.
    aircrafts.push_back(std::move(aircraft1));
    aircrafts.push_back(std::move(aircraft2));

    constexpr double t_delta_sec = 1.0;
    auto update_op = [t_delta_sec](unique_ptr<IAircraft>& aircraft){ aircraft->update(t_delta_sec); };
    auto info_op = [](unique_ptr<IAircraft>& aircraft){ std::cout << aircraft->info() << "\n" << std::endl; };

    // Let's fly for a minute!
    const int one_min{60};
    for( int i; i < one_min; ++i)
    {        
        std::ranges::for_each(aircrafts, update_op) ;
    }

    // Get info on aircraft
    std::ranges::for_each(aircrafts, info_op) ;

    return 0;
}
