#include "pch.h"
#include "CppUnitTest.h"
#include "../lab2.1/Header.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestDistance1)
		{
			Assert::AreEqual(Distance(6, 6, 3, 2), 5.);
		}
		TEST_METHOD(TestDistance2)
		{
			Assert::AreEqual(Distance(-2, 2, -2, 6), 4.);
		}
		TEST_METHOD(TestDistance3)
		{
			Assert::AreEqual(Distance(2, 0, -1, -4), 5.);
		}
		TEST_METHOD(TestDistance4)
		{
			Assert::AreEqual(Distance(3, 3, 3, 3), 0.);
		}
		TEST_METHOD(TestDistanceToLine1)
		{
			Assert::AreEqual(DistanceToLine(4, 4, 6, 1, 6, 5), 2.);
		}
		TEST_METHOD(TestDistanceToLine2)
		{
			Assert::AreEqual(DistanceToLine(-1, 5, -3, 2, 1, 2), 3.);
		}
		TEST_METHOD(TestDistanceToLine3)
		{
			Assert::AreEqual(DistanceToLine(0, 1, 2, -2, 6, -2), 3.);
		}
		TEST_METHOD(TestDistanceToLine4)
		{
			Assert::AreEqual(DistanceToLine(2, 4, 5, 4, 2, 1), 2.121, 0.001);
		}
		TEST_METHOD(TestSquare1)
		{
			Assert::AreEqual(Square(1, 1, 5, 1, 2, 4), 6., 0.0001);
		}
		TEST_METHOD(TestSquare2)
		{
			Assert::AreEqual(Square(1, 1, 1, 1, 1, 1), 0.);
		}
		TEST_METHOD(TestSquare3)
		{
			Assert::AreEqual(Square(1, 1, 5, 1, 3, 1), 0.);
		}
		TEST_METHOD(TestSquare4)
		{
			Assert::AreEqual(Square(1, 1, 4, 5, 8, 5), 8.);
		}
	};
}
