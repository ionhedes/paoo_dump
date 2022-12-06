#include "../header/Resource.hpp"
#include "../header/RemoteResourceFactory.hpp"
#include "../header/LocalResourceFactory.hpp"
#include "../header/ResourceManager.hpp"

#include <iostream>
#include <memory>

using namespace std;

void operate_with_resource(int id)
{
    RemoteResourceFactory factory;
    unique_ptr<Resource> res(factory.get_resource(id));

    try
    {
        res->do_op();
    }
    catch (...)
    {
        std::cout << "Caught exception" << std::endl;
    }
}

void operate_with_resource_custom_manager(int id)
{
    LocalResourceFactory factory;
    ResourceManager manager(factory.get_resource(id));

    try
    {
        manager->do_op();
    }
    catch(...)
    {
        std::cout << "Caught exception" << std::endl;
    }
    
}

int main()
{
    /**
     * Item 13:
     * - operate_with_resource(int) uses a resource which might throw exceptions
     * - because the resource is owned by an object (namely an unique pointer), 
     * even if control doesn't reach the end of operate_with_resource(int), 
     * the resource is released when the smart pointer goes out of scope
    */
    // operate_with_resource(2);

    /**
     * Item 14:
     * - created a custom Resource Manager to use instead of unique pointer (overly simplified)
     * - the following call does the same thing as the previous, only it uses the custom manager
     * - the copying behaviour of the custom manager must be the same as the resource's
     * (they both are uncopyable), thus in accord with Item 14
    */
    operate_with_resource_custom_manager(2);

}