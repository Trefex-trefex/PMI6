#include <iostream>

using namespace std;

int sumArr(const int* a, int size) {
	int s = 0;
	for (int i = 0; i < size; i++) {
		s += a[i];
	}
	return s;
}

void multArr(const int* a, const int* b, int* c, int size) {
	for (int i = 0; i < size; i++) {
		c[i] = a[i] * b[i];
	}
}

void printArr(const int* a, int size) {
	for (int i = 0; i < size; i++)
		cout << a[i] << " ";
	cout << endl;
}

void insertionSort(int arr[], int size)
{
    int i, r, j;
    for (i = 1; i < size; i++) {
        r = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > r) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = r;
    }
}