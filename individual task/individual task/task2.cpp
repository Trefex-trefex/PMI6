#include <iostream>

double mySqrt(double x, double eps = 0.0001) {
	double s = 1, a = 1;
	int i = 0;
	while (abs(a) >= eps) {
		i++;
		a *= -(2 * i - 3) * x / (2 * i);
		s += a;
	}
	return s;
}
