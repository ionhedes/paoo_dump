#include "../header/Resource.hpp"

#include <iostream>

Resource::Resource(int id)
    : id(id)
{
    std::cout << "Resource constructor" << std::endl;
}

Resource::~Resource()
{
    std::cout << "Resource destructor" << std::endl;
}