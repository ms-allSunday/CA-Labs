#include "calculator.h"
#include <iostream>

int Calculator::Add (double a, double b)
{
    int result = a + b + 0.5;
    std::cout << "Add: " << a << " + " << b << " = " << result << std::endl;
    return result;
}

int Calculator::Sub (double a, double b)
{
    int result = Add(a, -b);
    std::cout << "Sub: " << a << " - " << b << " = " << result << std::endl;
    return result;
}

int Calculator::Mul (double a, double b)
{
    int result = a * b + 0.5;
    std::cout << "Mul: " << a << " * " << b << " = " << result << std::endl;
    return result;
}

