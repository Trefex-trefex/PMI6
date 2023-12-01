#include <iostream>

using namespace std;

void print_bin(int number)
{
	do {
		cout << (number & 1);
		number = number >> 1;
	} while (number);
}

double exp1(double x, double eps = 0.0001) {
	double s = 1, a = 1;
	int i = 0;
	while (abs(a) >= eps) {
		i++;
		a *= x / i;
		s += a; 
	}
	return s;
}

int checkBit(int number, int i) {
	number = number >> (i - 1);
	return number & 1;
}

int setOne(int number, int i) {
	return number | (1 << (i - 1));
}

int setZero(int number, int i) {
	int t = (1 << (i - 1)) - 1;
	int n = number & t;
	number >>= i;
	return (number << i) | n;
}


