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

    Vector2D* vector2 = new Vector2D();
    vector2->x = 4;
    vector2->y = 0;
    double mag2 = CalculateMagnitude(vector2);
    std::cout << "Magnitude for Vector 2D: " << mag2 << std::endl;

    Vector3D* vector3 = new Vector3D();
    vector3->x = 4;
    vector3->y = 0;
    vector3->z = 0;
    double mag3 = CalculateMagnitude(vector3);
    std::cout << "Magnitude for Vector 3D: " << mag3 << std::endl;

    return 0;
}