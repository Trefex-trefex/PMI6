#pragma once
#include <iostream>

using namespace std;

class Array {
private:
	int n;
	int* values;
public:
	Array(); //конструктор по умолчанию
	Array(int _n, int x = 0); //конструктор с параметрами
	Array(const Array& other); //конструктор копии
	~Array(); // деструктор
	// методы
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
	// дружественные функции
	friend ostream& operator << (ostream& out, const Array& arr);
	friend istream& operator >> (istream& in, Array& arr);
};
