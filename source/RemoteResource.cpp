#include "../header/RemoteResource.hpp"

#include <iostream>
#include <cstdlib>

RemoteResource::RemoteResource(int id)
    : Resource::Resource(id)
{
    
}

void RemoteResource::do_op()
{
    srand(time(NULL));

    int num = rand() % 100;
    if (num < 50)
    {
        throw num;
    }
    
    std::cout << "Operation on remote resource" << std::endl;
}