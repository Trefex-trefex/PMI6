#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int n = 7;
	int* a = create_array(n, 3);
	cout << "arr => ";
	print(a, n);
	cout << endl;
	cout << check(a, n); // должна быть единица 
	delete[] a;

}