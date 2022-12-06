#pragma once

#include "../header/ResourceFactory.hpp"
#include "../header/RemoteResource.hpp"

class RemoteResourceFactory : ResourceFactory
{

public:

    Resource* get_resource(int) const override;

};
