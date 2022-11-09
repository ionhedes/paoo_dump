#include "../header/Context.hpp"

#include <iostream>

Context::Context(int a, int b)
    : a(a), b(b)
{
}

Context& Context::get_context()
{
    static Context context(rand(), rand());
    return context;
}

void Context::print_description()
{
    std::cout << "Context class providing utils for every other class" << std::endl;
}

void Context::print_current_context()
{
    std::cout << "Currently running the app with the following context: "
                << a
                << ", "
                << b
                << std::endl;
}

int Context::get_context_element_a()
{
    return a;
}

int Context::get_context_element_b()
{
    return b;
}