#pragma once

#include "Engine.hpp"
#include "Transmission.hpp"

class Car
{

private:

    Engine* engine;
    Transmission* transmission;

public:

    Car(Engine*, Transmission*);
    void drive(int, unsigned);
    

    Car(const Car&);
    Car& operator=(const Car&);

    friend std::ostream& operator<<(std::ostream&, const Car&);

};

std::ostream& operator<<(std::ostream&, const Car&);