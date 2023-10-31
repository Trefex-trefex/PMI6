#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"


using namespace std;

int main() {
	int n, x;
	cout << "Enter n: ";
	cin >> n;
	cout << endl;

	int countChecked = 0;
	int maxSumOdd = INT_MIN;
	int numOdd = INT_MIN;
	cout << "Enter numbers:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (checkFirstAndLast(x))
			countChecked++;
		if (maxSumOdd < sumOddDigits(x)) {
			maxSumOdd = sumOddDigits(x);
			numOdd = x;
		}
	}
	cout << "count numbers with equal first and last digits: " << countChecked << endl;
	cout << "number with max sum odd digits: " << numOdd << endl;
}