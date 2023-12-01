#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

double cos_h(double x) {
	const double eps = 1.0e-10;
	double a = 1, s = a, p = x * x;
	double i = 0;
	while (abs(a) > eps) {
		i++;
		a = a * p / (2 * i - 1) / (2 * i);
		s += a;
	}
	return s;
}
