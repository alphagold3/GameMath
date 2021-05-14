#pragma once

#ifndef GAMEMATH_API_EXPORT
#define GAMEMATH_API_EXPORT __declspec(dllexport)
#endif

#ifndef GAMEMATH_API_IMPORT
#define GAMEMATH_API_IMPORT __declspec(dllimport)
#endif

#include <type_traits>

struct Vector2D
{
	double x;
	double y;
};

struct Vector3D
{
	double x;
	double y;
	double z;
};

GAMEMATH_API_EXPORT void GMInit(bool leftHanded);

GAMEMATH_API_EXPORT int GetNumber();

// Sum the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
T SumArrayContentsBase(T values[], int length);
GAMEMATH_API_EXPORT short SumArrayContents(short values[], int length);
GAMEMATH_API_EXPORT unsigned short SumArrayContents(unsigned short values[], int length);
GAMEMATH_API_EXPORT int SumArrayContents(int values[], int length);
GAMEMATH_API_EXPORT unsigned int SumArrayContents(unsigned int values[], int length);
GAMEMATH_API_EXPORT long SumArrayContents(long values[], int length);
GAMEMATH_API_EXPORT unsigned long SumArrayContents(unsigned long values[], int length);
GAMEMATH_API_EXPORT float SumArrayContents(float values[], int length);
GAMEMATH_API_EXPORT double SumArrayContents(double values[], int length);

// Multiply the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
T MultiplyArrayContentsBase(T values[], int length);
GAMEMATH_API_EXPORT short MultiplyArrayContents(short values[], int length);
GAMEMATH_API_EXPORT unsigned short MultiplyArrayContents(unsigned short values[], int length);
GAMEMATH_API_EXPORT int MultiplyArrayContents(int values[], int length);
GAMEMATH_API_EXPORT unsigned int MultiplyArrayContents(unsigned int values[], int length);
GAMEMATH_API_EXPORT long MultiplyArrayContents(long values[], int length);
GAMEMATH_API_EXPORT unsigned long MultiplyArrayContents(unsigned long values[], int length);
GAMEMATH_API_EXPORT float MultiplyArrayContents(float values[], int length);
GAMEMATH_API_EXPORT double MultiplyArrayContents(double values[], int length);

// Calculate the averages of the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
double CalculateAverageBase(T values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(short values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(unsigned short values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(int values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(unsigned int values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(long values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(unsigned long values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(float values[], int length);
GAMEMATH_API_EXPORT double CalculateAverage(double values[], int length);

// Add a scalar to the elements of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void AddScalarToArrayBase(T values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(short values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(unsigned short values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(int values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(unsigned int values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(long values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(unsigned long values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(float values[], int length, double scalar);
GAMEMATH_API_EXPORT void AddScalarToArray(double values[], int length, double scalar);

// Add a scalar to the elements of a vector.
GAMEMATH_API_EXPORT void AddScalarToVector(Vector2D* vector, double scalar);
GAMEMATH_API_EXPORT void AddScalarToVector(Vector3D* vector, double scalar);

// Multiply an array by a scalar
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void MultiplyScalarToArrayBase(T values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(short values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(unsigned short values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(int values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(unsigned int values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(long values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(unsigned long values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(float values[], int length, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToArray(double values[], int length, double scalar);

// Multiply a vector by a scalar
GAMEMATH_API_EXPORT void MultiplyScalarToVector(Vector2D* vector, double scalar);
GAMEMATH_API_EXPORT void MultiplyScalarToVector(Vector3D* vector, double scalar);

// Divide an array by a scalar
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void DivideScalarToArrayBase(T values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(short values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(unsigned short values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(int values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(unsigned int values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(long values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(unsigned long values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(float values[], int length, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToArray(double values[], int length, double scalar);

// Divide a vector by a scalar
GAMEMATH_API_EXPORT void DivideScalarToVector(Vector2D* vector, double scalar);
GAMEMATH_API_EXPORT void DivideScalarToVector(Vector3D* vector, double scalar);

// Add two same size arrays using linear algebra rules for vector addition
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void AddArrayToArrayBase(T values1[], T values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(short values1[],short values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(unsigned short values1[], unsigned short values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(int values1[], int values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(unsigned int values1[], unsigned int values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(long values1[], long values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(unsigned long values1[], unsigned long values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(float values1[], float values2[], int length);
GAMEMATH_API_EXPORT void AddArrayToArray(double values1[], double values2[], int length);

// Add 2 vectors to each other
GAMEMATH_API_EXPORT void AddVectorToVector(Vector2D* vector1, Vector2D* vector2);
GAMEMATH_API_EXPORT void AddVectorToVector(Vector3D* vector1, Vector3D* vector2);

// Subtract two same size arrays using linear algebra rules for vector addition
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void SubtractArrayToArrayBase(T values1[], T values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(short values1[], short values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(unsigned short values1[], unsigned short values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(int values1[], int values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(unsigned int values1[], unsigned int values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(long values1[], long values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(unsigned long values1[], unsigned long values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(float values1[], float values2[], int length);
GAMEMATH_API_EXPORT void SubtractArrayToArray(double values1[], double values2[], int length);

// Subtract 2 vectors to each other
GAMEMATH_API_EXPORT void SubtractVectorToVector(Vector2D* vector1, Vector2D* vector2);
GAMEMATH_API_EXPORT void SubtractVectorToVector(Vector3D* vector1, Vector3D* vector2);

// Calculate the magnitude of a vector
GAMEMATH_API_EXPORT double CalculateMagnitude(Vector2D* vector);
GAMEMATH_API_EXPORT double CalculateMagnitude(Vector3D* vector);



// Convert a radians value to degrees
GAMEMATH_API_EXPORT double ConvertToDegrees(double radians);

// Convert a degrees value to radians
GAMEMATH_API_EXPORT double ConvertToRadians(double degrees);