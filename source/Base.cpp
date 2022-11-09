#include "../header/Base.hpp"

#include <iostream>

Base::Base(Composed& composed)
    : first_field(0), second_field(composed) //< Item 4: constructors should initialize every non-static member before the body;
{
    std::cout << "\"Base\" object #"
                << (*get_instance_counter())++
                <<" created" 
                << std::endl;
}

void Base::do_first_action()
{
    std::cout << "Base: First action" << std::endl;
}

int Base::do_second_action(int int_val)
{
    std::cout << "Base: Second action" << std::endl;
    return first_field + int_val;
}

// Item 4: making non-local static variables local
int* Base::get_instance_counter()
{
    static int instance_counter;
    return &instance_counter;
}