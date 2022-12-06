#pragma once

#include "Uncopyable.hpp"
#include "Resource.hpp"

class ResourceFactory : Uncopyable
{

public:

    virtual Resource* get_resource(int) const = 0;

};