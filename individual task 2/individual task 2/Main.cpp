#include <iostream>
#include "task4.h"
#include "task3.h"
#include "task5.h"
using namespace std;

int main() {
	int rows;
	int cols;
	int** a;
	double* avg = nullptr;
	cout << "rows: ";
	cin >> rows;
	cout << "cols: ";
	cin >> cols;
	a = new int* [rows];
	new_(a, rows, cols);
	cout << "matrix" << endl;
	print(a, rows, cols);
	cout << endl;
	try {
		avg = vector(a, rows, cols);
		for (int i = 0; i < rows; ++i) {
			cout << avg[i] << "; ";
		}
	}
	catch (double) {
		cout << "not found elements" << endl;
	}
	deleteMatrix(a, rows);
	delete[] avg;
}