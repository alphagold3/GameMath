#include "pch.h"
#include "CppUnitTest.h"
#include "../GameMathLibrary/GameMath.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameMathTesting
{

	TEST_CLASS(GameMathTesting)
	{
	public:

		TEST_METHOD(TestSumArrayContents)
		{
			short shorts[3] = { 1,2,3 };
			short sumShorts = SumArrayContents(shorts, 3);
			Assert::IsTrue((short)6 == sumShorts);

			unsigned short uShorts[3] = { 1,2,3 };
			unsigned short sumUShorts = SumArrayContents(uShorts, 3);
			Assert::IsTrue((unsigned short)6 == sumUShorts);

			int ints[3] = { 1,2,3 };
			int sumInts = SumArrayContents(ints, 3);
			Assert::IsTrue(6 == sumInts);

			unsigned int uInts[3] = { 1,2,3 };
			unsigned int sumUInts = SumArrayContents(uInts, 3);
			Assert::IsTrue((unsigned int)6 == sumUInts);

			long longs[3] = { 1,2,3 };
			long sumLongs = SumArrayContents(longs, 3);
			Assert::IsTrue((short)6 == sumLongs);

			unsigned long uLongs[3] = { 1,2,3 };
			unsigned long sumULongs = SumArrayContents(uLongs, 3);
			Assert::IsTrue((unsigned long)6 == sumULongs);

			double doubles[3] = { 1,2,3 };
			double sumDoubles = SumArrayContents(doubles, 3);
			Assert::IsTrue((double)6 == sumDoubles);

			float floats[3] = { 1,2,3 };
			float sumFloats = SumArrayContents(floats, 3);
			Assert::IsTrue((float)6 == sumFloats);
		}

		TEST_METHOD(TestMultiplyArrayContents)
		{
			short shorts[3] = { 1,2,3 };
			short sumShorts = MultiplyArrayContents(shorts, 3);
			Assert::IsTrue((short)6 == sumShorts);

			unsigned short uShorts[3] = { 1,2,3 };
			unsigned short sumUShorts = MultiplyArrayContents(uShorts, 3);
			Assert::IsTrue((unsigned short)6 == sumUShorts);

			int ints[3] = { 1,2,3 };
			int sumInts = MultiplyArrayContents(ints, 3);
			Assert::IsTrue(6 == sumInts);

			unsigned int uInts[3] = { 1,2,3 };
			unsigned int sumUInts = MultiplyArrayContents(uInts, 3);
			Assert::IsTrue((unsigned int)6 == sumUInts);

			long longs[3] = { 1,2,3 };
			long sumLongs = MultiplyArrayContents(longs, 3);
			Assert::IsTrue((short)6 == sumLongs);

			unsigned long uLongs[3] = { 1,2,3 };
			unsigned long sumULongs = MultiplyArrayContents(uLongs, 3);
			Assert::IsTrue((unsigned long)6 == sumULongs);

			double doubles[3] = { 1,2,3 };
			double sumDoubles = MultiplyArrayContents(doubles, 3);
			Assert::IsTrue((double)6 == sumDoubles);

			float floats[3] = { 1,2,3 };
			float sumFloats = MultiplyArrayContents(floats, 3);
			Assert::IsTrue((float)6 == sumFloats);
		}

		TEST_METHOD(TestCalculateAverage)
		{
			short shorts[3] = { 1,2,3 };
			double sumShorts = CalculateAverage(shorts, 3);
			Assert::IsTrue((double)2 == sumShorts);

			unsigned short uShorts[3] = { 1,2,3 };
			double sumUShorts = CalculateAverage(uShorts, 3);
			Assert::IsTrue((double)2 == sumUShorts);

			int ints[3] = { 1,2,3 };
			double sumInts = CalculateAverage(ints, 3);
			Assert::IsTrue(2 == sumInts);

			unsigned int uInts[3] = { 1,2,3 };
			double sumUInts = CalculateAverage(uInts, 3);
			Assert::IsTrue((double)2 == sumUInts);

			long longs[3] = { 1,2,3 };
			double sumLongs = CalculateAverage(longs, 3);
			Assert::IsTrue((double)2 == sumLongs);

			unsigned long uLongs[3] = { 1,2,3 };
			double sumULongs = CalculateAverage(uLongs, 3);
			Assert::IsTrue((double)2 == sumULongs);

			double doubles[3] = { 1,2,3 };
			double sumDoubles = CalculateAverage(doubles, 3);
			Assert::IsTrue((double)2 == sumDoubles);

			float floats[3] = { 1,2,3 };
			double sumFloats = CalculateAverage(floats, 3);
			Assert::IsTrue((double)2 == sumFloats);
		}

		TEST_METHOD(TestAddScalarToArray)
		{
			double scalar = 2;

			short shorts[3] = { 1,2,3 };
			AddScalarToArray(shorts, 3, scalar);
			Assert::IsTrue((short)3 == shorts[0]);
			Assert::IsTrue((short)4 == shorts[1]);
			Assert::IsTrue((short)5 == shorts[2]);

			unsigned short uShorts[3] = { 1,2,3 };
			AddScalarToArray(uShorts, 3, scalar);
			Assert::IsTrue((unsigned short)3 == uShorts[0]);
			Assert::IsTrue((unsigned short)4 == uShorts[1]);
			Assert::IsTrue((unsigned short)5 == uShorts[2]);

			int ints[3] = { 1,2,3 };
			AddScalarToArray(ints, 3, scalar);
			Assert::IsTrue((int)3 == ints[0]);
			Assert::IsTrue((int)4 == ints[1]);
			Assert::IsTrue((int)5 == ints[2]);

			unsigned int uInts[3] = { 1,2,3 };
			AddScalarToArray(uInts, 3, scalar);
			Assert::IsTrue((unsigned int)3 == uInts[0]);
			Assert::IsTrue((unsigned int)4 == uInts[1]);
			Assert::IsTrue((unsigned int)5 == uInts[2]);

			long longs[3] = { 1,2,3 };
			AddScalarToArray(longs, 3, scalar);
			Assert::IsTrue((long)3 == longs[0]);
			Assert::IsTrue((long)4 == longs[1]);
			Assert::IsTrue((long)5 == longs[2]);

			unsigned long uLongs[3] = { 1,2,3 };
			AddScalarToArray(uLongs, 3, scalar);
			Assert::IsTrue((unsigned long)3 == uLongs[0]);
			Assert::IsTrue((unsigned long)4 == uLongs[1]);
			Assert::IsTrue((unsigned long)5 == uLongs[2]);

			double doubles[3] = { 1,2,3 };
			AddScalarToArray(doubles, 3, scalar);
			Assert::IsTrue((double)3 == doubles[0]);
			Assert::IsTrue((double)4 == doubles[1]);
			Assert::IsTrue((double)5 == doubles[2]);

			float floats[3] = { 1,2,3 };
			AddScalarToArray(floats, 3, scalar);
			Assert::IsTrue((float)3 == floats[0]);
			Assert::IsTrue((float)4 == floats[1]);
			Assert::IsTrue((float)5 == floats[2]);
		}

		TEST_METHOD(TestAddScalarToVector)
		{
			double scalar = 2;

			Vector2D *v2D = new Vector2D();
			v2D->x = 1;
			v2D->y = 2;
			AddScalarToVector(v2D, scalar);
			Assert::IsTrue((double)3 == v2D->x);
			Assert::IsTrue((double)4 == v2D->y);

			Vector3D* v3D = new Vector3D();
			v3D->x = 1;
			v3D->y = 2;
			v3D->z = 3;
			AddScalarToVector(v3D, scalar);
			Assert::IsTrue((double)3 == v3D->x);
			Assert::IsTrue((double)4 == v3D->y);
			Assert::IsTrue((double)5 == v3D->z);
		}

		TEST_METHOD(TestMultiplyScalarToArray)
		{
			double scalar = 2;

			short shorts[3] = { 1,2,3 };
			MultiplyScalarToArray(shorts, 3, scalar);
			Assert::IsTrue((short)2 == shorts[0]);
			Assert::IsTrue((short)4 == shorts[1]);
			Assert::IsTrue((short)6 == shorts[2]);

			unsigned short uShorts[3] = { 1,2,3 };
			MultiplyScalarToArray(uShorts, 3, scalar);
			Assert::IsTrue((unsigned short)2 == uShorts[0]);
			Assert::IsTrue((unsigned short)4 == uShorts[1]);
			Assert::IsTrue((unsigned short)6 == uShorts[2]);

			int ints[3] = { 1,2,3 };
			MultiplyScalarToArray(ints, 3, scalar);
			Assert::IsTrue((int)2 == ints[0]);
			Assert::IsTrue((int)4 == ints[1]);
			Assert::IsTrue((int)6 == ints[2]);

			unsigned int uInts[3] = { 1,2,3 };
			MultiplyScalarToArray(uInts, 3, scalar);
			Assert::IsTrue((unsigned int)2 == uInts[0]);
			Assert::IsTrue((unsigned int)4 == uInts[1]);
			Assert::IsTrue((unsigned int)6 == uInts[2]);

			long longs[3] = { 1,2,3 };
			MultiplyScalarToArray(longs, 3, scalar);
			Assert::IsTrue((long)2 == longs[0]);
			Assert::IsTrue((long)4 == longs[1]);
			Assert::IsTrue((long)6 == longs[2]);

			unsigned long uLongs[3] = { 1,2,3 };
			MultiplyScalarToArray(uLongs, 3, scalar);
			Assert::IsTrue((unsigned long)2 == uLongs[0]);
			Assert::IsTrue((unsigned long)4 == uLongs[1]);
			Assert::IsTrue((unsigned long)6 == uLongs[2]);

			double doubles[3] = { 1,2,3 };
			MultiplyScalarToArray(doubles, 3, scalar);
			Assert::IsTrue((double)2 == doubles[0]);
			Assert::IsTrue((double)4 == doubles[1]);
			Assert::IsTrue((double)6 == doubles[2]);

			float floats[3] = { 1,2,3 };
			MultiplyScalarToArray(floats, 3, scalar);
			Assert::IsTrue((float)2 == floats[0]);
			Assert::IsTrue((float)4 == floats[1]);
			Assert::IsTrue((float)6 == floats[2]);
		}

		TEST_METHOD(TestMultiplyScalarToVector)
		{
			double scalar = 2;

			Vector2D* v2D = new Vector2D();
			v2D->x = 1;
			v2D->y = 2;
			MultiplyScalarToVector(v2D, scalar);
			Assert::IsTrue((double)2 == v2D->x);
			Assert::IsTrue((double)4 == v2D->y);

			Vector3D* v3D = new Vector3D();
			v3D->x = 1;
			v3D->y = 2;
			v3D->z = 3;
			MultiplyScalarToVector(v3D, scalar);
			Assert::IsTrue((double)2 == v3D->x);
			Assert::IsTrue((double)4 == v3D->y);
			Assert::IsTrue((double)6 == v3D->z);
		}

		TEST_METHOD(TestDivideScalarToArray)
		{
			double scalar = 2;

			short shorts[3] = { 2,4,6 };
			DivideScalarToArray(shorts, 3, scalar);
			Assert::IsTrue((short)1 == shorts[0]);
			Assert::IsTrue((short)2 == shorts[1]);
			Assert::IsTrue((short)3 == shorts[2]);

			unsigned short uShorts[3] = { 2,4,6 };
			DivideScalarToArray(uShorts, 3, scalar);
			Assert::IsTrue((unsigned short)1 == uShorts[0]);
			Assert::IsTrue((unsigned short)2 == uShorts[1]);
			Assert::IsTrue((unsigned short)3 == uShorts[2]);

			int ints[3] = { 2,4,6 };
			DivideScalarToArray(ints, 3, scalar);
			Assert::IsTrue((int)1 == ints[0]);
			Assert::IsTrue((int)2 == ints[1]);
			Assert::IsTrue((int)3 == ints[2]);

			unsigned int uInts[3] = { 2,4,6 };
			DivideScalarToArray(uInts, 3, scalar);
			Assert::IsTrue((unsigned int)1 == uInts[0]);
			Assert::IsTrue((unsigned int)2 == uInts[1]);
			Assert::IsTrue((unsigned int)3 == uInts[2]);

			long longs[3] = { 2,4,6 };
			DivideScalarToArray(longs, 3, scalar);
			Assert::IsTrue((long)1 == longs[0]);
			Assert::IsTrue((long)2 == longs[1]);
			Assert::IsTrue((long)3 == longs[2]);

			unsigned long uLongs[3] = { 2,4,6 };
			DivideScalarToArray(uLongs, 3, scalar);
			Assert::IsTrue((unsigned long)1 == uLongs[0]);
			Assert::IsTrue((unsigned long)2 == uLongs[1]);
			Assert::IsTrue((unsigned long)3 == uLongs[2]);

			double doubles[3] = { 2,4,6 };
			DivideScalarToArray(doubles, 3, scalar);
			Assert::IsTrue((double)1 == doubles[0]);
			Assert::IsTrue((double)2 == doubles[1]);
			Assert::IsTrue((double)3 == doubles[2]);

			float floats[3] = { 2,4,6 };
			DivideScalarToArray(floats, 3, scalar);
			Assert::IsTrue((float)1 == floats[0]);
			Assert::IsTrue((float)2 == floats[1]);
			Assert::IsTrue((float)3 == floats[2]);
		}

		TEST_METHOD(TestDivideScalarToVector)
		{
			double scalar = 2;

			Vector2D* v2D = new Vector2D();
			v2D->x = 2;
			v2D->y = 4;
			DivideScalarToVector(v2D, scalar);
			Assert::IsTrue((double)1 == v2D->x);
			Assert::IsTrue((double)2 == v2D->y);

			Vector3D* v3D = new Vector3D();
			v3D->x = 2;
			v3D->y = 4;
			v3D->z = 6;
			DivideScalarToVector(v3D, scalar);
			Assert::IsTrue((double)1 == v3D->x);
			Assert::IsTrue((double)2 == v3D->y);
			Assert::IsTrue((double)3 == v3D->z);
		}

		TEST_METHOD(TestAddArrayToArray)
		{
			double scalar = 2;

			short shorts[3] = { 1,2,3 };
			AddArrayToArray(shorts, shorts, 3);
			Assert::IsTrue((short)2 == shorts[0]);
			Assert::IsTrue((short)4 == shorts[1]);
			Assert::IsTrue((short)6 == shorts[2]);

			unsigned short uShorts[3] = { 1,2,3 };
			AddArrayToArray(uShorts, uShorts, 3);
			Assert::IsTrue((unsigned short)2 == uShorts[0]);
			Assert::IsTrue((unsigned short)4 == uShorts[1]);
			Assert::IsTrue((unsigned short)6 == uShorts[2]);

			int ints[3] = { 1,2,3 };
			AddArrayToArray(ints, ints, 3);
			Assert::IsTrue((int)2 == ints[0]);
			Assert::IsTrue((int)4 == ints[1]);
			Assert::IsTrue((int)6 == ints[2]);

			unsigned int uInts[3] = { 1,2,3 };
			AddArrayToArray(uInts, uInts, 3);
			Assert::IsTrue((unsigned int)2 == uInts[0]);
			Assert::IsTrue((unsigned int)4 == uInts[1]);
			Assert::IsTrue((unsigned int)6 == uInts[2]);

			long longs[3] = { 1,2,3 };
			AddArrayToArray(longs, longs, 3);
			Assert::IsTrue((long)2 == longs[0]);
			Assert::IsTrue((long)4 == longs[1]);
			Assert::IsTrue((long)6 == longs[2]);

			unsigned long uLongs[3] = { 1,2,3 };
			AddArrayToArray(uLongs, uLongs, 3);
			Assert::IsTrue((unsigned long)2 == uLongs[0]);
			Assert::IsTrue((unsigned long)4 == uLongs[1]);
			Assert::IsTrue((unsigned long)6 == uLongs[2]);

			double doubles[3] = { 1,2,3 };
			AddArrayToArray(doubles, doubles, 3);
			Assert::IsTrue((double)2 == doubles[0]);
			Assert::IsTrue((double)4 == doubles[1]);
			Assert::IsTrue((double)6 == doubles[2]);

			float floats[3] = { 1,2,3 };
			AddArrayToArray(floats, floats, 3);
			Assert::IsTrue((float)2 == floats[0]);
			Assert::IsTrue((float)4 == floats[1]);
			Assert::IsTrue((float)6 == floats[2]);
		}

		TEST_METHOD(TestAddVectorToVector)
		{
			double scalar = 2;

			Vector2D* v2D = new Vector2D();
			v2D->x = 1;
			v2D->y = 2;
			AddVectorToVector(v2D, v2D);
			Assert::IsTrue((double)2 == v2D->x);
			Assert::IsTrue((double)4 == v2D->y);

			Vector3D* v3D = new Vector3D();
			v3D->x = 1;
			v3D->y = 2;
			v3D->z = 3;
			AddVectorToVector(v3D, v3D);
			Assert::IsTrue((double)2 == v3D->x);
			Assert::IsTrue((double)4 == v3D->y);
			Assert::IsTrue((double)6 == v3D->z);
		}

		TEST_METHOD(TestSubtractArrayToArray)
		{
			double scalar = 2;

			short shorts[3] = { 2,4,6 };
			SubtractArrayToArray(shorts, shorts, 3);
			Assert::IsTrue((short)0 == shorts[0]);
			Assert::IsTrue((short)0 == shorts[1]);
			Assert::IsTrue((short)0 == shorts[2]);

			unsigned short uShorts[3] = { 2,4,6 };
			SubtractArrayToArray(uShorts, uShorts, 3);
			Assert::IsTrue((unsigned short)0 == uShorts[0]);
			Assert::IsTrue((unsigned short)0 == uShorts[1]);
			Assert::IsTrue((unsigned short)0 == uShorts[2]);

			int ints[3] = { 2,4,6 };
			SubtractArrayToArray(ints, ints, 3);
			Assert::IsTrue((int)0 == ints[0]);
			Assert::IsTrue((int)0 == ints[1]);
			Assert::IsTrue((int)0 == ints[2]);

			unsigned int uInts[3] = { 2,4,6 };
			SubtractArrayToArray(uInts, uInts, 3);
			Assert::IsTrue((unsigned int)0 == uInts[0]);
			Assert::IsTrue((unsigned int)0 == uInts[1]);
			Assert::IsTrue((unsigned int)0 == uInts[2]);

			long longs[3] = { 2,4,6 };
			SubtractArrayToArray(longs, longs, 3);
			Assert::IsTrue((long)0 == longs[0]);
			Assert::IsTrue((long)0 == longs[1]);
			Assert::IsTrue((long)0 == longs[2]);

			unsigned long uLongs[3] = { 2,4,6 };
			SubtractArrayToArray(uLongs, uLongs, 3);
			Assert::IsTrue((unsigned long)0 == uLongs[0]);
			Assert::IsTrue((unsigned long)0 == uLongs[1]);
			Assert::IsTrue((unsigned long)0 == uLongs[2]);

			double doubles[3] = { 2,4,6 };
			SubtractArrayToArray(doubles, doubles, 3);
			Assert::IsTrue((double)0 == doubles[0]);
			Assert::IsTrue((double)0 == doubles[1]);
			Assert::IsTrue((double)0 == doubles[2]);

			float floats[3] = { 2,4,6 };
			SubtractArrayToArray(floats, floats, 3);
			Assert::IsTrue((float)0 == floats[0]);
			Assert::IsTrue((float)0 == floats[1]);
			Assert::IsTrue((float)0 == floats[2]);
		}

		TEST_METHOD(TestSubtractVectorToVector)
		{
			double scalar = 2;

			Vector2D* v2D = new Vector2D();
			v2D->x = 2;
			v2D->y = 4;
			SubtractVectorToVector(v2D, v2D);
			Assert::IsTrue((double)0 == v2D->x);
			Assert::IsTrue((double)0 == v2D->y);

			Vector3D* v3D = new Vector3D();
			v3D->x = 2;
			v3D->y = 4;
			v3D->z = 6;
			SubtractVectorToVector(v3D, v3D);
			Assert::IsTrue((double)0 == v3D->x);
			Assert::IsTrue((double)0 == v3D->y);
			Assert::IsTrue((double)0 == v3D->z);
		}

		TEST_METHOD(TestCalculateMagnitude)
		{
			short shorts[3] = { 12, -5 };
			double shortMag = CalculateArrayMagnitude(shorts, 2);
			Assert::IsTrue(13 == shortMag);

			unsigned short uShorts[3] = { 12, 5 };
			double uShortMag = CalculateArrayMagnitude(uShorts, 2);
			Assert::IsTrue(13 == uShortMag);

			int ints[3] = { 12, 5 };
			double intMag = CalculateArrayMagnitude(ints, 2);
			Assert::IsTrue(13 == intMag);

			unsigned int uInts[3] = { 12, 5 };
			double uIntMag = CalculateArrayMagnitude(uInts, 2);
			Assert::IsTrue(13 == uIntMag);

			long longs[3] = { 12, 5 };
			double longMag = CalculateArrayMagnitude(longs, 2);
			Assert::IsTrue(13 == longMag);

			unsigned long uLongs[3] = { 12, 5 };
			double uLongMag = CalculateArrayMagnitude(uLongs, 2);
			Assert::IsTrue(13 == uLongMag);

			double doubles[3] = { 12, 5 };
			double doubleMag = CalculateArrayMagnitude(doubles, 2);
			Assert::IsTrue(13 == doubleMag);

			float floats[3] = { 12, 5 };
			double floatMag = CalculateArrayMagnitude(floats, 2);
			Assert::IsTrue(13 == floatMag);

			Vector2D* v2D = new Vector2D();
			v2D->x = 12;
			v2D->y = -5;
			double magnitude2D = CalculateMagnitude(v2D);
			Assert::IsTrue(13 == magnitude2D);

			Vector3D* v3D = new Vector3D();
			v3D->x = 12;
			v3D->y = -5;
			v3D->z = 0;
			double magnitude3D = CalculateMagnitude(v3D);
			Assert::IsTrue(13 == magnitude3D);
		}

		TEST_METHOD(TestNormalizeVector)
		{
			Vector2D* v2D = new Vector2D();
			v2D->x = 12;
			v2D->y = -5;
			Vector2D newVector2 = NormalizeVector(*v2D);
			NormalizeVector(v2D);
			Assert::IsTrue(newVector2.x == v2D->x);
			Assert::IsTrue(newVector2.x <= 1 && newVector2.x >= -1);
			Assert::IsTrue(v2D->x <= 1 && v2D->x >= -1);
			Assert::IsTrue(newVector2.y == v2D->y);
			Assert::IsTrue(newVector2.y <= 1 && newVector2.y >= -1);
			Assert::IsTrue(v2D->y <= 1 && v2D->y >= -1);

			Vector3D* v3D = new Vector3D();
			v3D->x = 12;
			v3D->y = -5;
			v3D->z = 0;
			Vector3D newVector3 = NormalizeVector(*v3D);
			NormalizeVector(v3D);
			Assert::IsTrue(newVector3.x == v3D->x);
			Assert::IsTrue(newVector3.x <= 1 && newVector3.x >= -1);
			Assert::IsTrue(v3D->x <= 1 && v3D->x >= -1);
			Assert::IsTrue(newVector3.y == v3D->y);
			Assert::IsTrue(newVector3.y <= 1 && newVector3.y >= -1);
			Assert::IsTrue(v3D->y <= 1 && v3D->y >= -1);
			Assert::IsTrue(newVector3.z == v3D->z);
			Assert::IsTrue(newVector3.z <= 1 && newVector3.z >= -1);
			Assert::IsTrue(v3D->z <= 1 && v3D->z >= -1);
		}

		TEST_METHOD(TestCalculateDistance)
		{
			Vector2D v2D1 = Vector2D();
			v2D1.x = 5;
			v2D1.y = 0;
			Vector2D v2D2 = Vector2D();
			v2D2.x = -1;
			v2D2.y = 8;
			double result2D = CalculateDistance(&v2D1, &v2D2);
			Assert::IsTrue(10 == result2D);

			Vector3D v3D1 = Vector3D();
			v3D1.x = 13;
			v3D1.y = 10;
			v3D1.z = 0;
			Vector3D v3D2 = Vector3D();
			v3D2.x = 1;
			v3D2.y = 5;
			v3D1.z = 0;
			double result3D = CalculateDistance(&v3D1, &v3D2);
			Assert::IsTrue(13 == result3D);
		}

		TEST_METHOD(TestCalculateDotProduct)
		{
			Vector2D v2D1 = Vector2D();
			v2D1.x = 4;
			v2D1.y = 6;
			Vector2D v2D2 = Vector2D();
			v2D2.x = -3;
			v2D2.y = 7;
			double result2D = CalculateDotProduct(&v2D1, &v2D2);
			Assert::IsTrue(30 == result2D);

			Vector3D v3D1 = Vector3D();
			v3D1.x = 3;
			v3D1.y = -2;
			v3D1.z = 7;
			Vector3D v3D2 = Vector3D();
			v3D2.x = 0;
			v3D2.y = 4;
			v3D1.z = -1;
			double result3D = CalculateDotProduct(&v3D1, &v3D2);
			Assert::IsTrue(-8 == result3D);
		}
	};
}