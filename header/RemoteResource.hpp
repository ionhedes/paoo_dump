#pragma once

#include "Resource.hpp"

class RemoteResource : public Resource
{

private:

        

public:

    RemoteResource(int);

    void do_op() override;

};