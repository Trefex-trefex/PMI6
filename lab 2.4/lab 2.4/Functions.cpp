#include "Header.h"
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

Circle::Circle(double r):type("Circle") {
	cout << "circle is created" << endl;
	radius = r;
}

Circle::~Circle() {
	cout << "circle is deleted" << endl;
}

void Circle::setR(double r) {
	radius = r;
}

double Circle::getR() const {
	return radius;
}

double Circle::S() {
	return acos(-1) * radius * radius;
}

void Circle::input() {
	cout << type << " => ";
	cout << "radius: " << radius << endl;
}

Cone::Cone(double r, double h): Circle(r){
	cout << "Cone is created" << endl;
	strcpy_s(type, "Cone");
	height = h;
}

Cone::~Cone() {
	cout << "Cone is deleted" << endl;
}

void Cone::setH(double h) {
	height = h;
}

double Cone::getH() const {
	return height;
}

void Cone::input() {
	cout << type << " => ";
	cout << "radius: " << radius << "; height: " << height << endl;
}

double Cone::S() {
	double l = sqrt(radius * radius + height * height);
	return acos(-1) * radius * radius + acos(-1) * radius * l;
}

double Cone::V() {
	return acos(-1) * radius * radius * height/3;
}

Sphere::Sphere(double r):Circle(r) {
	strcpy_s(type, "Sphere");
	cout << "Sphere is created" << endl;
}
Sphere::~Sphere() {
	cout << "Sphere is deleted" << endl;
}
void Sphere::input() {
	cout << type << " => ";
	cout << "radius: " << radius << endl;
}
double Sphere::S() {
	return 4 * Circle::S();
}
double Sphere::V() {
	return 4 * Circle::S() * radius / 3;
}