#include "../header/RemoteResourceFactory.hpp"

Resource* RemoteResourceFactory::get_resource(int id) const
{
    return new RemoteResource(id);
}