#include "../header/ResourceManager.hpp"

#include <iostream>

ResourceManager::ResourceManager(Resource* res)
    : res(res)
{
    std::cout << "Resource Manager constructor" << std::endl;
}

ResourceManager::~ResourceManager()
{
    std::cout << "Resource manager destructor" << std::endl;
    delete res;
}

Resource* ResourceManager::operator->() const
{
    return res;
}