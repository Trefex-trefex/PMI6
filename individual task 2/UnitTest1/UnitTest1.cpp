#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 2\task1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 3,-4,4,-4,4 };
			Assert::AreEqual(threeInRow(a, 5), true);
		}
		TEST_METHOD(TestMethod2)
		{
			int a[] = { 3,4,4,-4,-4 };
			Assert::AreEqual(threeInRow(a, 5), false);
		}
		TEST_METHOD(TestMethod3)
		{
			int a[] = { -3,-4,4,4,4 };
			Assert::AreEqual(threeInRow(a, 5), false);
		}
		TEST_METHOD(TestMethod4)
		{
			int a[] = { 3,4,0,4,4 };
			Assert::AreEqual(threeInRow(a, 5), false);
		}
	};
}
