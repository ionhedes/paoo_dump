#pragma once

#include "Uncopyable.hpp"

/**
 * Item 4: The Context class should be an util class,
 * containing info to be use by all other classes
 * The code in this project must share a single instance
 * of this class, so we implement the class using the
 * Singleton patter, thus avoiding using non-local static
 * Context variables uninitialized.
 * 
 * Item 6: the Uncopyable base class is inherited to deny
 * creation of default copy constructor and assignment operator;
*/
class Context : private Uncopyable
{

private:
    int a;
    int b;

    /**
     * Item 5:
     * - because we have this arg-constructor declaration, the 
     * compiler won't insert a no-arg constructor
     * (even if this one is private)
    */
    Context(int, int);

public:
    static Context& get_context();

    void print_description();

    void print_current_context();

    int get_context_element_a();

    int get_context_element_b();

};