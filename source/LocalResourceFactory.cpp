#include "../header/LocalResourceFactory.hpp"

Resource* LocalResourceFactory::get_resource(int id) const
{
    return new LocalResource(id);
}