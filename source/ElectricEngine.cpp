#include "../header/ElectricEngine.hpp"

#include <iostream>

ElectricEngine::ElectricEngine(unsigned horsepower, std::string oem, double batteryChargingTime)
    : Engine(horsepower, oem), batteryChargingTime(batteryChargingTime)
{

}

void ElectricEngine::charge(double chargingHours)
{
    std::cout << "Charged for " << chargingHours << " hours" << std::endl;
}

ElectricEngine::ElectricEngine(const ElectricEngine& rhs)
    : Engine(rhs)
{
    batteryChargingTime = rhs.batteryChargingTime;
}

ElectricEngine& ElectricEngine::operator=(const ElectricEngine& rhs)
{
    Engine::operator=(rhs);
    batteryChargingTime = rhs.batteryChargingTime;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const ElectricEngine& electricEngine)
{
    os << "Electric "
         << static_cast<const Engine&>(electricEngine)
         << " (" << electricEngine.batteryChargingTime
         << " hours charging time)";
    return os;
}