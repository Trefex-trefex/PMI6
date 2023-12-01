#include "pch.h"
#include "CppUnitTest.h"
#include "..//test 5/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestCheck1)
		{
			int a[] = { 5,13,44,1,23 };
			Assert::AreEqual(check(a, 5), true);
		}
		TEST_METHOD(TestCheck2)
		{
			int a[] = { -5,13,44,1,23 };
			Assert::AreEqual(check(a, 5), false);
		}
		TEST_METHOD(TestCheck3)
		{
			int a[] = { 5,13,44,1,-23 };
			Assert::AreEqual(check(a, 5), false);
		}
		TEST_METHOD(TestCheck4)
		{
			int a[] = { 5,13,-44,1,23 };
			Assert::AreEqual(check(a, 5), false);
		}
		TEST_METHOD(TestCheck5)
		{
			int a[] = { 5,13,0,1,23 };
			Assert::AreEqual(check(a, 5), true);
		}
		TEST_METHOD(TestCheckBiggerA1)
		{
			int a[] = { 5,13,44,72,23,31 };
			int* begin = a + 2;
			int* end = a + 5;
			int A = 21;
			Assert::AreEqual(checkBiggerA(begin, end, A), true);
		}
		TEST_METHOD(TestCheckBiggerA2)
		{
			int a[] = { 5,13,44,72,23,31 };
			int* begin = a;
			int* end = a + 3;
			int A = 13;
			Assert::AreEqual(checkBiggerA(begin, end, A), false);
		}
		TEST_METHOD(TestCheckBiggerA3)
		{
			int a[] = { 15,13,17,72,23,31 };
			int* begin = a;
			int* end = a + 4;
			int A = 13;
			Assert::AreEqual(checkBiggerA(begin, end, A), false);
		}

	};
}
