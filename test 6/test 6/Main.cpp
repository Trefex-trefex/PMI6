#include "Header.h"
#include <iostream>

using namespace std;

int main() {
	int rows;
	double** a;
	cout << "n: ";
	cin >> rows;
	a = new double* [rows];
	new_(a, rows, rows);
	cout << "matrix" << endl;
	print(a, rows, rows);


	/*
	�������:

	1
	����:
	�������: {-1, 2, 3,
			  4, -5, 6,
			  7, 8, -9}

	�������������� �����: 19
	--------------------------------------
	2
	����:
	�������: {3, 3, 3,
			  3, 3, 3,
			  3, 3, 3}

	�������������� �����: 9
	--------------------------------------
	3
	����:
	�������: {3, 3, 3,
			  3, -3, 3,
			  0, 3, 3}

	�������������� �����: 6
	*/


	cout << "sum: " << sumElem(a, rows) << endl;
	delete_matrix(a, rows);
}