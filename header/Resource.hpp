#pragma once

#include "Uncopyable.hpp"

class Resource : Uncopyable
{

public:

    Resource(int);

    ~Resource();

    virtual void do_op() = 0;

private:

    int id;

};