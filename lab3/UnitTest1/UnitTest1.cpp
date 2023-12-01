#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab3\Header.h"
#include <cmath>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCheckBit1)
		{
			Assert::AreEqual(checkBit(5, 2), 0);
		}
		TEST_METHOD(TestCheckBit2)
		{
			Assert::AreEqual(checkBit(77, 3), 1);
		}
		TEST_METHOD(TestSetZero1)
		{
			Assert::AreEqual(setZero(15, 3), 11);
		}
		TEST_METHOD(TestSetZero2)
		{
			Assert::AreEqual(setZero(77, 4), 69);
		}
		TEST_METHOD(TestSetOne1)
		{
			Assert::AreEqual(setOne(5, 2), 7);
		}
		TEST_METHOD(TestSetOne2)
		{
			Assert::AreEqual(setOne(32, 1), 33);
		}
		TEST_METHOD(TestExp1)
		{
			Assert::AreEqual(exp1(0), 1.);
		}
		TEST_METHOD(TestExp2)
		{
			Assert::AreEqual(exp1(4), exp(4), 0.0001);
		}
	};
}
