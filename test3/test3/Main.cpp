#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	
	cout << "test1 " << sum(0) << endl; // правильный ответ 0
	cout << "test2 " << sum(1) << endl; // правильный ответ 1
	cout << "test3 " << sum(145) << endl; // правильный ответ 10
	cout << "test4 " << sum(8007) << endl; // правильный ответ 15
	cout << "test5 " << sum(40000) << endl; // правильный ответ 4
}