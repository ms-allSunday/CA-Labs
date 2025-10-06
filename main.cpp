#include <iostream>
#include "calculator.h"

int main()
{
    Calculator calc;
    std::cout << "3 + 2 = " << calc.Add(3, 2) << std::endl;
    std::cout << "3 - 2 = " << calc.Sub(3, 2) << std::endl;
    return 0;
}
