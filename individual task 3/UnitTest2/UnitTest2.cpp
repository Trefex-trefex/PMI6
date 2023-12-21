#include "pch.h"
#include "CppUnitTest.h"
#include "..\\individual task 3\task2.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			sp_ptr head = new list{ 123, new list{456, new list{789, new list{99, new list{333, new list{996, nullptr}}}}} };
			sp_ptr ans = new list{2, new list{ 123, new list{456, new list{99, new list{333, nullptr}}}} };
			processList(head);
			sp_ptr t_head = head;
			sp_ptr t_ans = ans;
			while (t_head) {
				Assert::AreEqual(t_head->data, t_ans->data);
				t_head = t_head->next;
				t_ans = t_ans->next;
			}
			erase(head);
			erase(ans);
		}
	};
}
