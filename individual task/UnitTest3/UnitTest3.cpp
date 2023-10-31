#include "pch.h"
#include "CppUnitTest.h"
#include "..//individual task/task3.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestCountZeros1)
		{
			Assert::AreEqual(countZeros(5), 1);
		}
		TEST_METHOD(TestCountZeros2)
		{
			Assert::AreEqual(countZeros(16), 4);
		}
		TEST_METHOD(TestCountZeros3)
		{
			Assert::AreEqual(countZeros(1), 0);
		}
		TEST_METHOD(TestCountZeros4)
		{
			Assert::AreEqual(countZeros(15), 0);
		}
	};
}
