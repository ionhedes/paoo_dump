#pragma once

#include <iostream>

class Transmission
{

private:
    
    int gears;
    int current_gear;

public:

    Transmission(int);
    void shift(int);

    friend std::ostream& operator<<(std::ostream&, const Transmission&);

};

std::ostream& operator<<(std::ostream&, const Transmission&);
