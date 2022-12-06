#pragma once

class Uncopyable
{

protected:
    Uncopyable() = default;
    ~Uncopyable() = default;

private:

    /**
     * Item 6: 
     * - disallowing the creation of a public default copy constructor
     * and assignment operator using inheritance;
    */
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);

};