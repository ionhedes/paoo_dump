#pragma once

#include "Base.hpp"
#include "Composed.hpp"

class Derived : public Base
{

public:
    Derived(Composed&);

    static void do_third_action();

private:
    /**
     * Item 5: 
     * - the compiler will not add a copy constructor 
     * and an assignment operator overload, because
     * the ones in the base class are private
     * (and it won't be able to call them);
     * - a destructor will still be added;
    */
};