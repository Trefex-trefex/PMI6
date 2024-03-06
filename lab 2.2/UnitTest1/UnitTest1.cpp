#include "pch.h"
#include "CppUnitTest.h"
#include "..\\lab 2.2\Header.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 4;
			int* a = new int[n] {2, 2, 2, 2};
			Array A(n, 2);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(A[i], a[i]);
			}
			int* b = new int[n] {0, 0, 0, 0};
			Array B;
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(B[i], b[i]);
			}
			Array C(B);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(C[i], b[i]);
			}
		}
		TEST_METHOD(TestMethod2)
		{
			int n = 4;
			int* a = new int[n] {2, 2, 2, 2};
			Array A(n, 2);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(A[i], a[i]);
			}
			int* b = new int[n] {0, 0, 0, 0};
			Array B;
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(B[i], b[i]);
			}
			Array C(B);
			for (int i = 0; i < n; i++) {
				Assert::AreEqual(C[i], b[i]);
			}
		}
	};
}
