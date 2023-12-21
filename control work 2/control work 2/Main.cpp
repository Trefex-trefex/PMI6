#include <iostream>
#include "Header.h"

using namespace std;

int main() {
	int a[8] = { 1,2,0,3,4,5,-11,12 };
	int count = task1(a, 8);
	cout << "count in task1: " << count << endl; // должно быть 3 
	cout << endl;


	int rows;
	int cols;
	double** b;
	cout << "rows: ";
	cin >> rows;
	cout << "cols: ";
	cin >> cols;
	b = new double* [rows];
	newMatrix(b, rows, cols);
	cout << "matrix" << endl;
	printMatrix(b, rows, cols);
	/*Пример:
		Ввод :
		Матрица:{-1, 2, 3,
				 4, -5, 6,
				 7, 8, -9}

	Предполагаемый вывод : 0*/
	cout << "min in task2: " << task2(b, rows, cols) << endl;
	cout << endl;
	deleteMatrix(b, rows);

	int len = 7;
	int* c = new int[len] {22, 11, 3, 4, 22, 22, 5};
	cout << "array: " << endl;
	printArray(c, len);
	task3(c, len);
	cout << "new array: " << endl;
	for (int i = 0; i < len; i++) {
		cout << c[i] << " ";
	}
	delete[] c;
}