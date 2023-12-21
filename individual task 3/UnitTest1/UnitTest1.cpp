#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 3\task1.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s1[256] = "hello hello    hello ";
			changeWord(s1);
			char ans[256] = "hello hello ***hello ";
			Assert::AreEqual(s1, ans);
		}
		TEST_METHOD(TestMethod2)
		{
			char s1[256] = "   hello hello    hello   ";
			changeWord(s1);
			char ans[256] = " **hello hello ***hello **";
			Assert::AreEqual(s1, ans);
		}
		TEST_METHOD(TestMethod3)
		{
			char s1[256] = "hello, my name is misha.";
			changeWord(s1);
			char ans[256] = "hello, my name is misha.";
			Assert::AreEqual(s1, ans);
		}
	};
}
