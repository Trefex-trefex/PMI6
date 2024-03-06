#include "Header.h"

Array::Array() {
	n = 10;
	values = new int[n];
	for (int i = 0; i < n; i++)
		values[i] = 0;
}

Array::Array(int _n, int x) {
	n = _n;
	values = new int[n];
	for (int i = 0; i < n; i++)
		values[i] = x;
}

Array::Array(const Array& other) {
	n = other.n;
	values = new int[n];
	for (int i = 0; i < n; i++)
		values[i] = other.values[i];
}

Array::~Array() {
	delete[] values;
}

int Array::size() const {
	return n;
}

int Array::operator [] (int i) const {
	return values[i];
}

int& Array::operator [] (int i) {
	return values[i];
}

ostream& operator << (ostream& out, const Array& arr) {
	for (int i = 0; i < arr.n; i++)
		out << arr.values[i] << ' ';
	out << endl;
	return out;
}

istream& operator >> (istream& in, Array& arr) {
	in >> arr.n;
	delete[] arr.values;
	arr.values = new int[arr.n];
	for (int i = 0; i < arr.n; i++) {
		in >> arr.values[i];
	}
	return in;
}

Array Array::operator + (const Array& arr) {
	if (n != arr.n)
		throw 5000;
	Array C(n); //можно: Array C(n,0);
	for (int i = 0; i < n; i++)
		C[i] = values[i] + arr.values[i];
	return C;
}

Array& Array::operator = (const Array& arr) {
	if (this != &arr) {
		delete[] values;
		n = arr.n;
		values = new int[n];
		for (int i = 0; i < n; i++)
			values[i] = arr.values[i];
	}
	return *this;
}

Array Array::operator += (const Array& arr) {
	if (n != arr.n)
		throw (1);
	for (int i = 0; i < n; i++)
		values[i] = values[i] + arr[i];
	return *this;
}
void Array::resize(int nsize) {
	int* ndata = new int[nsize];
	int sz = (n < nsize) ? n : nsize;
	for (int i = 0;i < sz;++i)
		ndata[i] = values[i];
	delete[] values;
	values = ndata;
	n = nsize;
}

void Array::add(int x) {
	resize(n + 1);
	values[n-1] = x;
}

Array Array::operator + (const int x) {
	Array C(n);
	for (int i = 0; i < n; i++)
		C[i] = values[i] + x;
	return C;
}

bool Array::operator == (const Array& arr) {
	if (n != arr.n)
		return false;
	for (int i = 0; i < n; i++) {
		if (values[i] != arr[i]) return false;
	}
	return true;
}

void Array::insert(int x, int ind) {
	int* t = new int[n + 1];
	for (int i = 0; i < ind; i++) {
		t[i] = values[i];
	}
	t[ind] = x;
	for (int i = ind + 1; i < n + 1; i++) {
		t[i] = values[i - 1];
	}
	delete[] values;
	values = t;
	n += 1;
}

void Array::del(int ind) {
	int* t = new int[n-1];
	for (int i = 0; i < ind; i++) {
		t[i] = values[i];
	}
	for (int i = ind; i < n - 1; i++) {
		t[i] = values[i + 1];
	}
	delete[] values;
	values = t;
	n -= 1;
}





