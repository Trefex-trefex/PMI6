#pragma once
class Circle {
protected:
	char type[10];
	double radius;
public:
	Circle(double r);
	double S();
	void setR(double r);
	double getR() const;
	void input();
	~Circle();
};
class Cone : public Circle {
protected:
	double height;
public:
	Cone(double r, double h);
	~Cone();
	void setH(double h);
	double getH() const;
	void input();
	double S();
	double V();
};
class Sphere : public Circle {
public:
	Sphere(double r);
	~Sphere();
	void input();
	double S();
	double V();
};
class Cylinder : public Cone {
	// цилиндр - реализовать самостоятельно
};