#pragma once

#include <string>

class Complex
{

private:

    double real;
    double imaginary;

public:

    Complex(double, double);
    Complex& operator=(const Complex&);
    Complex& operator+=(const Complex&);
    Complex& operator-=(const Complex&);
    Complex& operator*=(const Complex&);
    Complex& operator/=(const Complex&);

    friend std::ostream& operator<<(std::ostream&, const Complex&);

};

std::ostream& operator<<(std::ostream&, const Complex&);