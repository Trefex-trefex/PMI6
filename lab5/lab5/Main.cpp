#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a[] = { 1,2,3,4,5 };
	cout << sumArr(a, 5) << endl;

	int b[] = { 4,0,7,3,1 };
	int c[5];
	multArr(a, b, c, 5);
	printArr(c, 5);


}