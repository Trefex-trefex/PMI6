#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	elem_list* head = new elem_list{ 123, new elem_list{456, new elem_list{789, new elem_list{99, new elem_list{333, new elem_list{999, nullptr}}}}} };// ������ 123, 456, 789, 99, 333, 999
	datatype x1 = 99; // ���� ������������
	datatype x2 = 123; // ������ �������
	datatype x3 = 999; // ��������� �������
	datatype x4 = 13; // �� ������ 
	cout << exists(head, x1) << endl; // 1
	cout << exists(head, x2) << endl;// 1
	cout << exists(head, x3) << endl;// 1
	cout << exists(head, x4) << endl;// 0
}