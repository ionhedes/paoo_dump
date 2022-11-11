#pragma once

#include "Composed.hpp"
#include "Uncopyable.hpp"

/**
 *  Item 6: the Uncopyable base class is inherited to deny
 * creation of default copy constructor and assignment operator;
 */
class Base : protected Uncopyable
{

private:

    int first_field;

    /**
     * Item 5:
     * - because we have a reference member, the compiler will not
     * generate an assignment operator function;
     * 
     * - when creating Base object, the Composed constructor will not
     * be called for second_field, because it is a reference,
     * not an object in itself
    */
    Composed& second_field;

public:

    /**
     * Item 5: 
     * - an arg-constructor declaration is given, no implicit no-args
     * constructor declaration will be injected by the compiler;
     * - a destructor will still be generated by the compiler;
    */
    Base(Composed&);

    void do_first_action();
    int do_second_action(int);
    int* get_instance_counter();

};