// MathClient.cpp
// compile with: cl /EHsc MathClient.cpp /link Tutorial1.lib

#include <iostream>
#include "Tutorial.h"

int main()
{
    double a = 7.4;
    int b = 99;

    std::cout << "a + b = " <<
        Tutorial1::Arithmetic::Add(a, b) << std::endl;
    std::cout << "a - b = " <<
        Tutorial1::Arithmetic::Subtract(a, b) << std::endl;
    std::cout << "a * b = " <<
        Tutorial1::Arithmetic::Multiply(a, b) << std::endl;
    std::cout << "a / b = " <<
        Tutorial1::Arithmetic::Divide(a, b) << std::endl;

    return 0;
}