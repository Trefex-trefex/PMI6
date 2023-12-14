#include "Header.h"
#include <iostream>

using namespace std;

int sumElem(double** a, int rows) {
	int  s = 0;
	for (int j = 0; j < rows; ++j) {
		for (int i = j + 1; i < rows; ++i) {
			s += a[i][j];
		}
	}
	return s;
}

void new_(double**& a, int& rows, int& cols) {
	for (int i = 0; i < rows; i++) {
		a[i] = new double[cols];
		for (int j = 0; j < cols; j++)
			cin >> a[i][j];
	}
}

void print(double** a, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}

void delete_matrix(double**& a, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] a[i];
	delete[] a;
}