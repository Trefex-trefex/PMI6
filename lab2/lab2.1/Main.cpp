#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	double test1 = Distance(6, 6, 3, 2);
	double test2 = DistanceToLine(-1, 5, -3, 2, 1, 2);
	double test3 = Square(1, 1, 4, 5, 8, 5);
	cout << test1 << " " << test2 << " " << test3 << endl;
}