#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	
	cout << "test1 " << sum(0) << endl; // ���������� ����� 0
	cout << "test2 " << sum(1) << endl; // ���������� ����� 1
	cout << "test3 " << sum(145) << endl; // ���������� ����� 10
	cout << "test4 " << sum(8007) << endl; // ���������� ����� 15
	cout << "test5 " << sum(40000) << endl; // ���������� ����� 4
}