#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	// задание 1
	int h, m, s;

	int sec = 325;
	preobr(sec, h, m, s);
	cout << h << ", " << m << ", " << s << endl; // правильный ответ 0, 5, 25 

	sec = 5 * 3600 + 34 * 60 + 22;
	preobr(sec, h, m, s);
	cout << h << ", " << m << ", " << s << endl; // правильный ответ 5, 34, 22
	cout << endl;

	// задание 2
	int n = 5;
	cout << summa(n) << endl;
	n = 1;
	cout << summa(n) << endl;
	n = 122;
	cout << summa(n) << endl;
}
