#include "pch.h"
#include "CppUnitTest.h"
#include "..\\control work 3\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestTAsk1_1)
		{
			char s1[256] = "hello mmisha and mmaxim";
			insertSymbol(s1, 'm', '*');
			char ans[256] = "hello *mmisha and *mmaxim";
			Assert::AreEqual(s1, ans);
		}
		TEST_METHOD(TestTAsk1_2)
		{
			char s1[256] = "mm and m and mm";
			insertSymbol(s1, 'm', '*');
			char ans[256] = "*mm and m and *mm";
			Assert::AreEqual(s1, ans);
		}
		TEST_METHOD(TestTAsk1_3)
		{
			char s1[256] = "hello lllera";
			insertSymbol(s1, 'l', '*');
			char ans[256] = "he*llo *lllera";
			Assert::AreEqual(s1, ans);
		}
		TEST_METHOD(TestTAsk3_1)
		{
			char name[] = "C:/Users/misha/source/repos/control work 3/UnitTest1/input.txt";
			Assert::AreEqual(countNumbers(name), 3);
		}
		TEST_METHOD(TestTAsk3_2)
		{
			char name[] = "C:/Users/misha/source/repos/control work 3/UnitTest1/input1.txt";
			Assert::AreEqual(countNumbers(name), 1);
		}
		TEST_METHOD(TestTAsk2_1)
		{
			std::string str = "hello world misha  ";
			removeLetter(str, 'r');
			std::string ans = "hello world   ";
			Assert::AreEqual(str, ans);
		}
	};
}
