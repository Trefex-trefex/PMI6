#include "pch.h"
#include "CppUnitTest.h"
#include "..//test 7/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str1[MAX_LENGTH] = "ABCDEFG";

			Assert::IsTrue(str_double(str1) == 1);

		}
		TEST_METHOD(TestMethod2)
		{
			char str2[MAX_LENGTH] = "AABCDEFG";

			Assert::IsTrue(str_double(str2) == 0);
		}
		TEST_METHOD(TestMethod3)
		{
			char str3[MAX_LENGTH] = "ABCDEFGG";

			Assert::IsTrue(str_double(str3) == 0);
		}
	};
}
