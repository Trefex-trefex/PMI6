#include "pch.h"
#include "CppUnitTest.h"
#include "..//individual task/task1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCheck1)
		{
			Assert::AreEqual(checkFirstAndLast(1233), false);
		}
		TEST_METHOD(TestCheck2)
		{
			Assert::AreEqual(checkFirstAndLast(1231), true);
		}
		TEST_METHOD(TestCheck3)
		{
			Assert::AreEqual(checkFirstAndLast(1), true);
		}
		TEST_METHOD(TestCheck4)
		{
			Assert::AreEqual(checkFirstAndLast(-72217), true);
		}
		TEST_METHOD(TestSum1)
		{
			Assert::AreEqual(sumOddDigits(120093), 13);
		}
		TEST_METHOD(TestSum2)
		{
			Assert::AreEqual(sumOddDigits(2468), 0);
		}
		TEST_METHOD(TestSum3)
		{
			Assert::AreEqual(sumOddDigits(-123), 4);
		}
	};
}
