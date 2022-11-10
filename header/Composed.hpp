#pragma once

class Composed 
{

public:
    Composed(int, float);

    /**
     * Item 5: copy constructor and assignment operator will
     * be generated automatically for this class
     */

private:

    int first_field;
    const float second_field;
    static unsigned instance_counter;

};