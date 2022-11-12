#include "../header/Car.hpp"

#include <iostream>

Car::Car(Engine* engine, Transmission* transmission)
    : engine(engine), transmission(transmission)
{

}

void Car::drive(int gearShift, unsigned rpm)
{
    transmission->shift(gearShift);
    engine->rev(rpm);

    std::cout << "Driving the car..." << std::endl;
}

// Item 11: try exception-resilient behaviour

Car::Car(const Car& rhs)
{
    Engine* original_engine = engine;
    Transmission* original_transmission = transmission;

    engine = new Engine(*rhs.engine);
    transmission = new Transmission(*rhs.transmission);

    /**
     * Commenting these out to avoid double delete
     * We will delete this heap data in main
    */ 
    // delete original_engine;
    // delete original_transmission;
}

Car& Car::operator=(const Car& rhs)
{
    Engine* original_engine = engine;
    Transmission* original_transmission = transmission;

    engine = new Engine(*rhs.engine);
    transmission = new Transmission(*rhs.transmission);

    /**
     * Commenting these out to avoid double delete
     * We will delete this heap data in main
    */ 
    // delete original_engine;
    // delete original_transmission;

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Car& car)
{
    os << "Car with:" << std::endl << *car.engine << std::endl << *car.transmission;
    return os;
}