#include<iostream>

using namespace std;

int task1(int* a, int n) {
	int count = 0;
	int mx = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			count++;
			if (count > mx) {
				mx = count;
			}
		}
		else {
			count = 0;
		}
	}
	return mx;
}

double task2(double** a, int rows, int cols) {
	double mn = 0;
	for (int i = 0; i < rows; i++) {
		mn += a[i][0];
	}
	for (int j = 1; j < cols; j++) {
		double s = 0;
		for (int i = 0; i < rows; i++) {
			s += a[i][j];
		}
		if (s < mn) {
			mn = s;
		}
	}
	return mn;
}

void task3(int*& a, int& n) {
	int mx = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > mx) {
			mx = a[i];
		}
	}
	int newSize = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] != mx) {
			a[newSize] = a[i];
			newSize++;
		}
	}
	int* b = new int[newSize];
	for (int i = 0; i < newSize; i++) {
		b[i] = a[i];
	}
	delete[] a;
	a = b;
	n = newSize;
}

void newMatrix(double**& a, int& rows, int& cols) {
	for (int i = 0; i < rows; i++) {
		a[i] = new double[cols];
		for (int j = 0; j < cols; j++)
			cin >> a[i][j];
	}
}

void printMatrix(double** a, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) cout << a[i][j] << " ";
		cout << endl;
	}
}

void deleteMatrix(double**& a, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] a[i];
	delete[] a;
}

void newArray(int*& a, int& n) {
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

void printArray(int* a, int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
