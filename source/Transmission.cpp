#include "../header/Transmission.hpp"

#include <iostream>

Transmission::Transmission(int gears)
    : gears(gears), current_gear(0)
{

}

void Transmission::shift(int positions)
{
    int resulting_gear = current_gear + positions;
    if (resulting_gear < -1)
    {
        resulting_gear = 0;
    }
    else if (resulting_gear > gears)
    {
        resulting_gear = gears;
    }

    std::cout << "Shifted to " << resulting_gear << "th gear" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Transmission& transmission)
{
    os << "Transmission with " << transmission.gears << " gears";
    return os;
}
