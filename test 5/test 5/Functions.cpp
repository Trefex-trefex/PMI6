#include <iostream>

using namespace std;

bool check(int* a, int length) {
	if (length == 1)
		return a[0] >= 0;
	else
		return (a[0] >= 0) && check(a + 1, length - 1);
}

bool checkBiggerA(int* begin, int* end, int A) {
	for (int* i = begin; i < end; ++i) {
		if (*i <= A) 
			return false;
	}
	return true;
}

void read(int*& a, int& n) {
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void print(int* a, int n) {
	for (int i = 0; i < (n - 1); i++) {
		cout << a[i] << ", ";
	}
	cout << a[n - 1];
}

int* create_array(int n, int val = 0) {
	int* a = new int[n];
	for (int i = 0;i < n;i++)
		a[i] = val;
	return a;
}




