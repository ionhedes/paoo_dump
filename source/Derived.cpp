#include "../header/Derived.hpp"

#include <iostream>

// Item 4: explicitly initializing using base class constructor
Derived::Derived(Composed& composed)
    : Base::Base(composed)
{
}

void Derived::do_third_action()
{
    std::cout <<"Derived: Third action" << std::endl;
}