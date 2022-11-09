#include <iostream>
#include "../header/Composed.hpp"
#include "../header/Context.hpp"
#include "../header/Base.hpp"
#include "../header/Derived.hpp"

int main()
{
    // Item 4: builtin type variables should be initialized;
    int int_val = 5; 
    float float_val = 3.14;

    // Item 4: accessing a "non-local static variable"
    Context::get_context().print_current_context();

    Composed composed(int_val, float_val);
    Base base_a(composed);
    Base base_b(composed);
    Derived derived_a(composed);

    base_a.do_first_action();
    base_b.do_second_action(int_val);
    derived_a.do_third_action();

    // Item 5: destructor will now be called for all local objects
    return 0;
}