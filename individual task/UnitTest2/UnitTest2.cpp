#include "pch.h"
#include "CppUnitTest.h"
#include "..//individual task/task2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestSqrt1)
		{
			Assert::AreEqual(mySqrt(0.1), 1.048809, 1.0E-4);
		}
		TEST_METHOD(TestSqrt2)
		{
			Assert::AreEqual(mySqrt(0.5), 1.224745, 1.0E-4);
		}
		TEST_METHOD(TestSqrt3)
		{
			Assert::AreEqual(mySqrt(0.95), 1.396424, 1.0E-4);
		}
		TEST_METHOD(TestSqrt4)
		{
			Assert::AreEqual(mySqrt(0.3), 1.140175, 1.0E-4);
		}
	};
}
