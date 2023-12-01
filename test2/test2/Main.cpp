#include <iostream>
#include <cmath>
#include "Header.h"

using namespace std;

int main() {
	cout << "test 1 => " << cos_h(2) << "; " << cosh(2) << endl; //правильный ответ 3.7622
	cout << "test 2 => " << cos_h(0) << "; " << cosh(0) << endl; //правильный ответ 1
	cout << "test 3 => " << cos_h(10) << "; " << cosh(10) << endl; //правильный ответ 11013.2


}