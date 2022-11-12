#include "../header/Complex.hpp"

#include <iostream>

Complex::Complex(double real, double imaginary)
    : real(real), imaginary(imaginary)
{

}

Complex& Complex::operator=(const Complex& rhs)
{
    real = rhs.real;
    imaginary = rhs.imaginary;

    return *this;
}

Complex& Complex::operator+=(const Complex& rhs)
{
    real += rhs.real;
    imaginary += rhs.imaginary;

    return *this;
}

Complex& Complex::operator-=(const Complex& rhs)
{
    real -= rhs.real;
    imaginary -= rhs.imaginary;

    return *this;
}

Complex& Complex::operator*=(const Complex& rhs)
{
    real = (real * rhs.real) - (imaginary * rhs.imaginary);
    imaginary = (real * rhs.imaginary) + (imaginary + rhs.real);

    return *this;
}

Complex& Complex::operator/=(const Complex& rhs)
{
    real = (real * rhs.real) - (imaginary * rhs.imaginary);
    imaginary = (real * rhs.imaginary) + (imaginary + rhs.real);

    return *this;
}

std::ostream& operator<<(std::ostream& os, const Complex& complex)
{
    os << complex.real << " + i*" << complex.imaginary;
    return os; 
}