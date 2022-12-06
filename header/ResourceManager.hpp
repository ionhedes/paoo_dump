#include "Resource.hpp"

// Item 14: the managing class should have the same copying policy as the resource it manages
class ResourceManager : Uncopyable
{

public:

    ResourceManager(Resource*);

    ~ResourceManager();

    Resource* operator->() const;

private:

    Resource* res;

};