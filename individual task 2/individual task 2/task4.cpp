#include <iostream>

using namespace std;

int minElem(int** a, int rows, int A) {
	int  mn = 2147483647;
	for (int i = 0; i < rows; ++i) {
		for (int j = i; i + j < rows; ++j) {
			if (a[i][j] > A && a[i][j] < mn) {
				mn = a[i][j];
			}
		}
	}
	if (mn == 2147483647) throw double{ 10. };
	return mn;
}

void new_(int**& a, int& rows, int& cols) {
	for (int i = 0; i < rows; i++) {
		a[i] = new int[cols];
		for (int j = 0; j < cols; j++)
			cin >> a[i][j];
	}
}

void print(int** a, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}

void deleteMatrix(int**& a, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] a[i];
	delete[] a;
}