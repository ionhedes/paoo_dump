#pragma once

#include "Engine.hpp"

#include <string>

class ElectricEngine : public Engine
{

private:

    double batteryChargingTime; // hours

public:

    ElectricEngine(unsigned, std::string, double);
    void charge(double);

    ElectricEngine(const ElectricEngine&);

    ElectricEngine& operator=(const ElectricEngine&);

    friend std::ostream& operator<<(std::ostream&, const ElectricEngine&);

};

std::ostream& operator<<(std::ostream&, const ElectricEngine&);