#include <iostream>

using namespace std;

int* create_array(int n, int val = 0) {
	int* a = new int[n];
	for (int i = 0;i < n;i++)
		a[i] = val;
	return a;
}

void print(int* a, int n) {
	for (int i = 0; i < (n - 1); i++) {
		cout << a[i] << ", ";
	}
	cout << a[n - 1];
}

bool check(int* a, int n) {
	bool flag = true;
	for (int i = 0; i < (n - 1); i++) {
		if (a[i] != a[i + 1])
			flag = false;
	}
	return flag;
}

