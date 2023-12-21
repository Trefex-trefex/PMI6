#include "pch.h"
#include "CppUnitTest.h"
#include "..\\control work 2\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestTask1_1)
		{
			int a[] = { 1,2,3,4,-4 };
			Assert::AreEqual(task1(a, 5), 4);
		}
		TEST_METHOD(TestTask1_2)
		{
			int a[] = { -1,2,3,4,4 };
			Assert::AreEqual(task1(a, 5), 4);
		}
		TEST_METHOD(TestTask1_3)
		{
			int a[] = { 1,2,3,-4,4,5,5,7 };
			Assert::AreEqual(task1(a, 8), 4);
		}
		TEST_METHOD(TestTask1_4)
		{
			int a[] = { 1,2,0,-5,-11,5,5,7 };
			Assert::AreEqual(task1(a, 8), 3);
		}
		TEST_METHOD(TestTask2_1)
		{
			double** a = new double* [3];
			a[0] = new double [4] { -3, 4, 7, 1 };
			a[1] = new double [4] { 0, -20, 11, 4 };
			a[2] = new double [4] { 3, 10, -15, -1 };
			Assert::AreEqual(task2(a, 3, 4), -6.);
			deleteMatrix(a, 3);
		}
		TEST_METHOD(TestTask2_2)
		{
			double** a = new double* [1];
			a[0] = new double [4] { -3, 4, 7, 1 };
			Assert::AreEqual(task2(a, 1, 4), -3.);
			deleteMatrix(a, 1);
		}
		TEST_METHOD(TestTask3_1)
		{
			int n = 5;
			int* a = new int [n] { 1, 2, 2, 4, 5 };
			task3(a, n);
			int b[] = { 1,2,2,4 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestTask3_2)
		{
			int n = 6;
			int* a = new int [n] { -4, 11, 5, 7, 11, 11 };
			task3(a, n);
			int b[] = { -4,5,7 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestTask3_3)
		{
			int n = 5;
			int* a = new int [n] { 7, 2, 2, 4, 5 };
			task3(a, n);
			int b[] = { 2,2,4,5 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
	};
}
