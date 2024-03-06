#pragma once
#include <iostream>

using namespace std;

class Array {
private:
	int n;
	int* values;
public:
	Array(); //����������� �� ���������
	Array(int _n, int x = 0); //����������� � �����������
	Array(const Array& other); //����������� �����
	~Array(); // ����������
	// ������
	int size() const;
	void resize(int nsize);
	void add(int x);
	void insert(int x, int ind);
	void del(int ind);
	Array operator + (const Array& arr);
	Array operator += (const Array& arr);
	Array operator + (const int x);
	Array& operator = (const Array& arr);
	bool operator == (const Array& arr);
	int& operator [] (int i);
	int operator [] (int i) const;
	// ������������� �������
	friend ostream& operator << (ostream& out, const Array& arr);
	friend istream& operator >> (istream& in, Array& arr);
};
