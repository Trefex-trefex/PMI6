#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	// ������� 1
	int h, m, s;

	int sec = 325;
	preobr(sec, h, m, s);
	cout << h << ", " << m << ", " << s << endl; // ���������� ����� 0, 5, 25 

	sec = 5 * 3600 + 34 * 60 + 22;
	preobr(sec, h, m, s);
	cout << h << ", " << m << ", " << s << endl; // ���������� ����� 5, 34, 22
	cout << endl;

	// ������� 2
	int n = 5;
	cout << summa(n) << endl;
	n = 1;
	cout << summa(n) << endl;
	n = 122;
	cout << summa(n) << endl;
}
