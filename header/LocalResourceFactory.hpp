#pragma once

#include "../header/ResourceFactory.hpp"
#include "../header/LocalResource.hpp"

class LocalResourceFactory : ResourceFactory
{

public:

    Resource* get_resource(int) const override;

};
