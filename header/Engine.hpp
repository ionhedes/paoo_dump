#pragma once

#include <string>
#include <iostream>

class Engine
{
    
private:
    
    unsigned horsepower;
    std::string oem;

    void init(const Engine&);

public:

    Engine(unsigned, std::string);
    void rev(unsigned);

    Engine(const Engine&);
    Engine& operator=(const Engine&);

    friend std::ostream& operator<<(std::ostream&, const Engine&);

};

std::ostream& operator<<(std::ostream&, const Engine&);