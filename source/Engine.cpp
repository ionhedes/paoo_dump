#include "../header/Engine.hpp"

#include <iostream>

#define REDLINE 7000

Engine::Engine(unsigned horsepower, std::string oem)
    : horsepower(horsepower), oem(oem)
{

}

void Engine::rev(unsigned rpm)
{
    if (rpm > REDLINE)
    {
        rpm = REDLINE;
    }

    std::cout << "Revving to " << rpm << "rpm" << std::endl;
}

void Engine::init(const Engine& rhs)
{
    horsepower = rhs.horsepower;
    oem = rhs.oem;
}

Engine::Engine(const Engine& rhs)
{
    init(rhs);
}

Engine& Engine::operator=(const Engine& rhs)
{
    init(rhs);
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Engine& engine)
{
    os << engine.oem << " engine(" << engine.horsepower << "HP)";
    return os;
}