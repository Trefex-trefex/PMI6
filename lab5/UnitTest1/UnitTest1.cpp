#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5/Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestSumArr1)
		{
			int a[] = { 1,2,3,4,5 };
			Assert::AreEqual(sumArr(a, 5), 15);	
		}
	};
}
