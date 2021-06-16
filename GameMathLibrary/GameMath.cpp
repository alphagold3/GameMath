#include "GameMath.h"

static double Pi = 3.14159265359;
static bool IsLeftHanded;

void GMInit(bool leftHanded)
{
	IsLeftHanded = leftHanded;
}

// Sum the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
T SumArrayContentsBase(T values[], int length)
{
	T result = 0;
	for (int i = 0; i < length; i++)
	{
		result += values[i];
	}
	return result;
}
short SumArrayContents(short values[], int length) { return SumArrayContentsBase(values, length); }
unsigned short SumArrayContents(unsigned short values[], int length) { return SumArrayContentsBase(values, length); }
int SumArrayContents(int values[], int length) { return SumArrayContentsBase(values, length); }
unsigned int SumArrayContents(unsigned int values[], int length) { return SumArrayContentsBase(values, length); }
long SumArrayContents(long values[], int length) { return SumArrayContentsBase(values, length); }
unsigned long SumArrayContents(unsigned long values[], int length) { return SumArrayContentsBase(values, length); }
float SumArrayContents(float values[], int length) { return SumArrayContentsBase(values, length); }
double SumArrayContents(double values[], int length) { return SumArrayContentsBase(values, length); }


// Multiply the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
T MultiplyArrayContentsBase(T values[], int length)
{
	T result = 1;
	for (int i = 0; i < length; i++)
	{
		result *= values[i];
	}
	return result;
}
short MultiplyArrayContents(short values[], int length) { return MultiplyArrayContentsBase(values, length); }
unsigned short MultiplyArrayContents(unsigned short values[], int length) { return MultiplyArrayContentsBase(values, length); }
int MultiplyArrayContents(int values[], int length) { return MultiplyArrayContentsBase(values, length); }
unsigned int MultiplyArrayContents(unsigned int values[], int length) { return MultiplyArrayContentsBase(values, length); }
long MultiplyArrayContents(long values[], int length) { return MultiplyArrayContentsBase(values, length); }
unsigned long MultiplyArrayContents(unsigned long values[], int length) { return MultiplyArrayContentsBase(values, length); }
float MultiplyArrayContents(float values[], int length) { return MultiplyArrayContentsBase(values, length); }
double MultiplyArrayContents(double values[], int length) { return MultiplyArrayContentsBase(values, length); }


// Calculate the averages of the contents of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
double CalculateAverageBase(T values[], int length)
{
	T sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += values[i];
	}
	double result = (double)sum / (double)length;
	return result;
}
double CalculateAverage(short values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(unsigned short values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(int values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(unsigned int values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(long values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(unsigned long values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(float values[], int length) { return CalculateAverageBase(values, length); }
double CalculateAverage(double values[], int length) { return CalculateAverageBase(values, length); }


// Add a scalar to the elements of an array.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void AddScalarToArrayBase(T values[], int length, double scalar)
{
	for (int i = 0; i < length; i++)
	{
		values[i] += scalar;
	}
}
void AddScalarToArray(short values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(unsigned short values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(int values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(unsigned int values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(long values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(unsigned long values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(float values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }
void AddScalarToArray(double values[], int length, double scalar) { return AddScalarToArrayBase(values, length, scalar); }


// Add a scalar to the elements of a vector.
void AddScalarToVector(Vector2D* vector, double scalar) { vector->x += scalar; vector->y += scalar; }
void AddScalarToVector(Vector3D* vector, double scalar) { vector->x += scalar; vector->y += scalar; vector->z += scalar; }


// Multiply an array by a scalar
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void MultiplyScalarToArrayBase(T values[], int length, double scalar)
{
	for (int i = 0; i < length; i++)
	{
		values[i] *= scalar;
	}
}
void MultiplyScalarToArray(short values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(unsigned short values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(int values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(unsigned int values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(long values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(unsigned long values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(float values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }
void MultiplyScalarToArray(double values[], int length, double scalar) { return MultiplyScalarToArrayBase(values, length, scalar); }


// Multiply a vector by a scalar
void MultiplyScalarToVector(Vector2D* vector, double scalar) { vector->x *= scalar; vector->y *= scalar; }
void MultiplyScalarToVector(Vector3D* vector, double scalar) { vector->x *= scalar; vector->y *= scalar; vector->z *= scalar; }


// Divide an array by a scalar
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void DivideScalarToArrayBase(T values[], int length, double scalar)
{
	for (int i = 0; i < length; i++)
	{
		values[i] /= scalar;
	}
}
void DivideScalarToArray(short values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(unsigned short values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(int values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(unsigned int values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(long values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(unsigned long values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(float values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }
void DivideScalarToArray(double values[], int length, double scalar) { return DivideScalarToArrayBase(values, length, scalar); }


// Divide a vector by a scalar
void DivideScalarToVector(Vector2D* vector, double scalar) { vector->x /= scalar; vector->y /= scalar; }
void DivideScalarToVector(Vector3D* vector, double scalar) { vector->x /= scalar; vector->y /= scalar; vector->z /= scalar; }


// Add two same size arrays using linear algebra rules for vector addition
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void AddArrayToArrayBase(T values1[], T values2[], int length)
{
	for (int i = 0; i < length; i++)
	{
		values1[i] += values2[i];
	}
}
void AddArrayToArray(short values1[], short values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(unsigned short values1[], unsigned short values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(int values1[], int values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(unsigned int values1[], unsigned int values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(long values1[], long values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(unsigned long values1[], unsigned long values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(float values1[], float values2[], int length) { AddArrayToArrayBase(values1, values2, length); }
void AddArrayToArray(double values1[], double values2[], int length) { AddArrayToArrayBase(values1, values2, length); }


// Add 2 vectors to each other.
void AddVectorToVector(Vector2D* vector1, Vector2D* vector2) { vector1->x += vector2->x; vector1->y += vector2->y; }
void AddVectorToVector(Vector3D* vector1, Vector3D* vector2) { vector1->x += vector2->x; vector1->y += vector2->y; vector1->z += vector2->z; }


// Subtract two same size arrays using linear algebra rules for vector subtraction
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void SubtractArrayToArrayBase(T values1[], T values2[], int length)
{
	for (int i = 0; i < length; i++)
	{
		values1[i] -= values2[i];
	}
}
void SubtractArrayToArray(short values1[], short values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(unsigned short values1[], unsigned short values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(int values1[], int values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(unsigned int values1[], unsigned int values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(long values1[], long values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(unsigned long values1[], unsigned long values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(float values1[], float values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }
void SubtractArrayToArray(double values1[], double values2[], int length) { SubtractArrayToArrayBase(values1, values2, length); }


// Subtract 2 vectors from each other.
void SubtractVectorToVector(Vector2D* vector1, Vector2D* vector2) { vector1->x -= vector2->x; vector1->y -= vector2->y; }
void SubtractVectorToVector(Vector3D* vector1, Vector3D* vector2) { vector1->x -= vector2->x; vector1->y -= vector2->y; vector1->z -= vector2->z; }

// Calculate the magnitude (length) of an array vector
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
double CalculateArrayMagnitudeBase(T values[], int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += values[i] * values[i];
	}
	return sqrt(sum);
}
double CalculateArrayMagnitude(short values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(unsigned short values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(int values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(unsigned int values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(long values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(unsigned long values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(float values[], int length) { return CalculateArrayMagnitudeBase(values, length); }
double CalculateArrayMagnitude(double values[], int length) { return CalculateArrayMagnitudeBase(values, length); }

// Calculate the magnitude (length) of a vector
double CalculateMagnitude(Vector2D* vector)
{
	return sqrt((vector->x * vector->x) + (vector->y * vector->y));
}
double CalculateMagnitude(Vector3D* vector)
{
	return sqrt((vector->x * vector->x) + (vector->y * vector->y) + (vector->z * vector->z));
}

// Normalize an array vector
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
void NormalizeArrayVectorBase(T values[], int length)
{
	double magnitude = CalculateArrayMagnitude(values, length);
	for (int i = 0; i < length; i++)
	{
		values[i] = values[i] / magnitude;
	}
}
GAMEMATH_API_EXPORT void NormalizeArrayVector(short values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(unsigned short values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(int values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(unsigned int values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(long values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(unsigned long values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(float values[], int length) { NormalizeArrayVectorBase(values, length); }
GAMEMATH_API_EXPORT void NormalizeArrayVector(double values[], int length) { NormalizeArrayVectorBase(values, length); }

// Normalize a vector
Vector2D NormalizeVector(Vector2D vector)
{
	Vector2D result = Vector2D();
	double magnitude = CalculateMagnitude(&vector);
	result.x = vector.x / magnitude;
	result.y = vector.y / magnitude;
	return result;
}
Vector3D NormalizeVector(Vector3D vector)
{
	Vector3D result = Vector3D();
	double magnitude = CalculateMagnitude(&vector);
	result.x = vector.x / magnitude;
	result.y = vector.y / magnitude;
	result.z = vector.z / magnitude;
	return result;
}
void NormalizeVector(Vector2D* vector)
{
	double magnitude = CalculateMagnitude(vector);
	vector->x = vector->x / magnitude;
	vector->y = vector->y / magnitude;
}
void NormalizeVector(Vector3D* vector)
{
	double magnitude = CalculateMagnitude(vector);
	vector->x = vector->x / magnitude;
	vector->y = vector->y / magnitude;
	vector->z = vector->z / magnitude;
}

// Calculate the distance between 2 same size array vectors
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
double CalculateArrayDistanceBase(T values1[], T values2[], int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		double subtraction = values1[i] - values2[i];
		double square = subtraction * subtraction;
		sum += square;
	}	
	return sqrt(sum);
}
double CalculateArrayDistance(short values1[], short values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(unsigned short values1[], unsigned short values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(int values1[], int values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(unsigned int values1[], unsigned int values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(long values1[], long values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(unsigned long values1[], unsigned long values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(float values1[], float values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }
double CalculateArrayDistance(double values1[], double values2[], int length) { return CalculateArrayDistanceBase(values1, values2, length); }

// Calculates distance between 2 vectors
double CalculateDistance(Vector2D* vector1, Vector2D* vector2)
{
	Vector2D subVector = Vector2D();
	subVector.x = vector1->x - vector2->x;
	subVector.y = vector1->y - vector2->y;
	return CalculateMagnitude(&subVector);
}
double CalculateDistance(Vector3D* vector1, Vector3D* vector2)
{
	Vector3D subVector = Vector3D();
	subVector.x = vector1->x - vector2->x;
	subVector.y = vector1->y - vector2->y;
	subVector.z = vector1->z - vector2->z;
 	return CalculateMagnitude(&subVector);
}

// Calculates the dot product.
// Dot product is one method of multiplying 2 vectors that results in a single value, a scalar.
template<typename T, typename = typename std::enable_if<std::is_arithmetic<T>::value, T>::type>
double CalculateArrayDotProductBase(T values1[], T values2[], int length)
{
	double sum = 0;
	for (int i = 0; i < length; i++)
	{
		sum += values1[i] * values2[i];
	}
	return sum;
}
double CalculateArrayDotProduct(short values1[], short values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(unsigned short values1[], unsigned short values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(int values1[], int values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(unsigned int values1[], unsigned int values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(long values1[], long values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(unsigned long values1[], unsigned long values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(float values1[], float values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }
double CalculateArrayDotProduct(double values1[], double values2[], int length) { return CalculateArrayDotProductBase(values1, values2, length); }

// Calculates the dot product.
// Dot product is one method of multiplying 2 vectors that results in a single value, a scalar.
double CalculateDotProduct(Vector2D* vector1, Vector2D* vector2)
{
	Vector2D subVector = Vector2D();
	subVector.x = vector1->x * vector2->x;
	subVector.y = vector1->y * vector2->y;
	return subVector.x + subVector.y;
}
double CalculateDotProduct(Vector3D* vector1, Vector3D* vector2)
{
	Vector3D subVector = Vector3D();
	subVector.x = vector1->x * vector2->x;
	subVector.y = vector1->y * vector2->y;
	subVector.z = vector1->z * vector2->z;
	return subVector.x + subVector.y + subVector.z;
}

// Convert a radians value to degrees
double ConvertToDegrees(double radians)
{
	return radians * (180 / Pi);
}

// Convert a degrees value to radians
double ConvertToRadians(double degrees)
{
	return degrees * (Pi / 180);
}