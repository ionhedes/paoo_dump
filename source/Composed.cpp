#include "../header/Composed.hpp"

#include <iostream>

// Item 4: constructors should initialize every non-static member before the body (compulsory for refs and consts)
Composed::Composed(int int_val, float float_val) 
    : first_field(int_val), second_field(float_val)
{
    std::cout << "\"Composed\" object " 
            << instance_counter++ << " created and initialized with values " 
            << first_field << ", " << second_field << std::endl;
}

unsigned Composed::instance_counter = 0; // < Item 4: is this safer because the static member is private?