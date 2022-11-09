#pragma once

class Composed 
{
public:
    Composed(int, float);

private:

    int first_field;
    const float second_field;
    static unsigned instance_counter;

    //~Composed(); // < I think the default destructor function generation cannot be disallowed because of Base class
    
    /**
     * Item 6: Disallowing the creation of a default assignment operator overload
    */
    Composed& operator=(const Composed&);
};