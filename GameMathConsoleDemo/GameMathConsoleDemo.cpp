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

    unsigned short uShorts1[3] = { 5, 0 };
    unsigned short uShorts2[3] = { 1, 10 };
    double uShortMag = CalculateArrayDistance(uShorts1, uShorts2, 2);
    std::cout << "Positive Array Distance: " << uShortMag << std::endl;

    Vector2D v2D1 = Vector2D();
    v2D1.x = 4;
    v2D1.y = 6;
    Vector2D v2D2 = Vector2D();
    v2D2.x = -3;
    v2D2.y = 7;
    double resultDP2 = CalculateDotProduct(&v2D1, &v2D2);
    std::cout << "2D Dot Product: " << resultDP2 << std::endl;

    Vector3D v3D1 = Vector3D();
    v3D1.x = 3;
    v3D1.y = -2;
    v3D1.z = 7;
    Vector3D v3D2 = Vector3D();
    v3D2.x = 0;
    v3D2.y = 4;
    v3D1.z = -1;
    double resultDP3 = CalculateDotProduct(&v3D1, &v3D2);
    std::cout << "3D Dot Product: " << resultDP3 << std::endl;

    return 0;
}