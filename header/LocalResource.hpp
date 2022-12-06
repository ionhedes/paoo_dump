#pragma once

#include "Resource.hpp"

class LocalResource : public Resource
{

private:



public:

    LocalResource(int);

    void do_op() override;

};