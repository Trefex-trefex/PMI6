#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 2\task4.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A = 5;
			int** a = new int* [3];
			a[0] = new int [3] { -3, 4, 7 };
			a[1] = new int [3] { 0, -20, 11 };
			a[2] = new int [3] { 3, 10, -15 };
			Assert::AreEqual(minElem(a, 3, A), 7);
			deleteMatrix(a, 3);
		}
		TEST_METHOD(TestMethod2)
		{
			int A = -3;
			int** a = new int* [3];
			a[0] = new int [3] { 0, 22, 4  };
			a[1] = new int [3] { 0, -2, 11 };
			a[2] = new int [3] { 3, 10, -15 };
			Assert::AreEqual(minElem(a, 3, A), -2);
			deleteMatrix(a, 3);
		}
	};
}
