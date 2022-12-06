#include "../header/LocalResource.hpp"

#include <iostream>

LocalResource::LocalResource(int id)
    : Resource::Resource(id)
{

}

void LocalResource::do_op()
{
    srand(time(NULL));

    int num = rand() % 100;
    if (num < 25)
    {
        throw num;
    }
    
    std::cout << "Operation on local resource" << std::endl;
}