#include <iostream>

using namespace std;

double* vector(int** a, int rows, int cols) {
	double* ans = new double[rows];
	for (int i = 0; i < rows; ++i) {
		double s = 0;
		int k = 0;
		for (int j = 0; j < cols; ++j) {
			if (a[i][j] < 0) {
				s += a[i][j];
				k++;
			}
		}
		if (k == 0) throw double{ 10. };
		ans[i] = s / k;
	}
	return ans;
}

void delete_(int**& a, int rows) {
	for (int i = 0; i < rows; i++)
		delete[] a[i];
	delete[] a;
}