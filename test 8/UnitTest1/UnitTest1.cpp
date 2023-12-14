#include "pch.h"
#include "CppUnitTest.h"
#include "..\\test 8\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string input = "00012345000";
			std::string newString = removeZeros(input);
			std::string ans = "12345000";
			Assert::AreEqual(ans, newString);
		}
		TEST_METHOD(TestMethod2)
		{
			std::string input = "0";
			std::string newString = removeZeros(input);
			std::string ans = "0";
			Assert::AreEqual(ans, newString);
		}
		TEST_METHOD(TestMethod3)
		{
			std::string input = "0000";
			std::string newString = removeZeros(input);
			std::string ans = "0";
			Assert::AreEqual(ans, newString);
		}
		TEST_METHOD(TestMethod4)
		{
			std::string input = "12345";
			std::string newString = removeZeros(input);
			std::string ans = "12345";
			Assert::AreEqual(ans, newString);
		}
	};
}
