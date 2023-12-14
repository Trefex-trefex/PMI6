#include "pch.h"
#include "CppUnitTest.h"
#include"..\\individual task 2\task2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{	
			int n = 5;
			int* a = new int [n] { 1, 2, 2, 4, 5 };
			delTwoEqual(a, n);
			int b[] = { 1,4,5 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 5;
			int* a = new int [n] { 2, 2, 2, 4, 5 };
			delTwoEqual(a, n);
			int b[] = { 2,2,2,4,5 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestMethod3)
		{
			int n = 5;
			int* a = new int [n] { 1, 2, 3, 5, 5 };
			delTwoEqual(a, n);
			int b[] = { 1,2,3 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestMethod4)
		{
			int n = 6;
			int* a = new int [n] { 5, 5, 5, 1, 2, 2};
			delTwoEqual(a, n);
			int b[] = { 5,5,5,1 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestMethod5)
		{
			int n = 6;
			int* a = new int [n] { 5, 5, 5, 2, 2, 2};
			delTwoEqual(a, n);
			int b[] = { 5,5,5,2,2,2 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
		TEST_METHOD(TestMethod6)
		{
			int n = 5;
			int* a = new int [n] { 5, 5, 4, 2, 2};
			delTwoEqual(a, n);
			int b[] = { 4,2,2 };
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(a[i] == b[i], true);
			}
			delete[] a;
		}
	};
}
