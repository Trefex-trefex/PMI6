#include <iostream>

int digits(int n) {
	n = abs(n);
	int k = 0;
	while (n > 0) {
		n /= 10;
		k++;
	}
	return k;
}
