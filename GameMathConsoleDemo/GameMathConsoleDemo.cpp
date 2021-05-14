// GameMathConsoleDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
#include "GameMath.h"

int main()
{
    GMInit(true);

    std::cout << "Hello World!" << std::endl;

    int values[3] = {1,2,3};
    int sum = SumArrayContents(values, 3);
    std::cout << "Sum: " << sum << std::endl;
    int product = MultiplyArrayContents(values, 3);
    std::cout << "Product: " << product << std::endl;
    AddScalarToArray(values, 3, 4);
    std::cout << "Value 1: " << values[0] << std::endl;
    std::cout << "Value 2: " << values[1] << std::endl;
    std::cout << "Value 3: " << values[2] << std::endl;
    sum = SumArrayContents(values, 3);
    std::cout << "New Sum: " << sum << std::endl;
    float floats[3] = { 5,6,7 };
    float floatsum = SumArrayContents(floats, 3);
    std::cout << "Float Sum: " << floatsum << std::endl;

    return 0;
}