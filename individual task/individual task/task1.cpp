#include <iostream>

bool checkFirstAndLast(int num) {
	num = abs(num);
	int firstDigit = 0;
	int lastDigit = num % 10;
	while (num > 0) {
		firstDigit = num % 10;
		num /= 10;
	}
	return firstDigit == lastDigit;
}

int sumOddDigits(int num) {
	num = abs(num);
	int sum = 0;
	while (num > 0) {
		if (num % 10 % 2 == 1) {
			sum += num % 10;
		}
		num /= 10;
	}
	return sum;
}