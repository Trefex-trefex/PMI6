#include "task1.h"
#include <iostream>

using namespace std;

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

bool threeInRow(int* a, int n) {
	int k_pos = 0, k_neg = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			k_pos++;
			k_neg = 0;
		}
		else {
			k_neg++;
			k_pos = 0;
		}
		if (k_neg == 3 || k_pos == 3) return false;	
	}
	return true;
}