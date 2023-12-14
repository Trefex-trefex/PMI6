#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 2\task5.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double* avg;
			int** a = new int* [3];
			a[0] = new int [4] {-20, 4, 7, -1};
			a[1] = new int [4] {-5, -8, 10, 0};
			a[2] = new int [4] {3, -4, 1, -2};
			avg = vector(a, 3, 4);
			double ans[] = { -10.5, -6.5, -3. };
			for (int i = 0; i < 3; ++i) {
				Assert::AreEqual(avg[i], ans[i], 0.0001);
			}
			delete[] avg;
			delete_(a, 3);
		}
		TEST_METHOD(TestMethod2)
		{
			double* avg;
			int** a = new int* [3];
			a[0] = new int [4] {-20, 4, 7, 1};
			a[1] = new int [4] {1, 8, 10, -5};
			a[2] = new int [4] {3, -4, 1, 2};
			avg = vector(a, 3, 4);
			double ans[] = { -20., -5., -4. };
			for (int i = 0; i < 3; ++i) {
				Assert::AreEqual(avg[i], ans[i], 0.0001);
			}
			delete[] avg;
			delete_(a, 3);
		}
	};
}
