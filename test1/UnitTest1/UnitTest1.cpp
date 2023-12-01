#include "pch.h"
#include "CppUnitTest.h"
#include "..\test1\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSumChet1)
		{
			Assert::AreEqual(SumChet(12034468), 24);
		}
		TEST_METHOD(TestSumChet2)
		{
			Assert::AreEqual(SumChet(0), 0);
		}
		TEST_METHOD(TestSumChet3)
		{
			Assert::AreEqual(SumChet(-124), 6);
		}
		TEST_METHOD(TestSumChet4)
		{
			Assert::AreEqual(SumChet(-17), 0);
		}
		TEST_METHOD(TestDoubleTen1)
		{
			Assert::AreEqual(DoubleTen(17), 27);
		}
		TEST_METHOD(TestDoubleTen2)
		{
			Assert::AreEqual(DoubleTen(1), 1);
		}
		TEST_METHOD(TestDoubleTen3)
		{
			Assert::AreEqual(DoubleTen(164), 124);
		}

	};
}
