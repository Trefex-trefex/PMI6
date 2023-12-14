#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 2\task3.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -2,4,5,6,-2 };
			replaceZero(a, 5);
			int b[] = { 0,4,5,6,0 };
			for (int i = 0; i < 5; ++i) {
				Assert::AreEqual(a[i], b[i]);
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int a[] = { -2,-20,0,-1,-2 };
			replaceZero(a, 5);
			int b[] = { 0,0,0,0,0 };
			for (int i = 0; i < 5; ++i) {
				Assert::AreEqual(a[i], b[i]);
			}
		}
		TEST_METHOD(TestMethod3)
		{
			int a[] = { 1,2,3,4,5 };
			replaceZero(a, 5);
			int b[] = { 1,2,3,4,5 };
			for (int i = 0; i < 5; ++i) {
				Assert::AreEqual(a[i], b[i]);
			}
		}
	};
}
