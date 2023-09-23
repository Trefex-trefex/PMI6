#include <cmath>
#include <iostream>

using namespace std;

double Distance(double x1, double y1, double x2, double y2) {
	double dist = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	return dist;
}

double DistanceToLine(double xa, double ya, double x1, double y1, double x2, double y2) {
	double dist = 0;
	// координаты направляющего вектора
	double xv = x2 - x1;
	double yv = y2 - y1;
	
	if ((y2 - y1) == 0)
		dist = abs(ya - y1);
	else
		if ((x2 - x1) == 0)
			dist = abs(xa - x1);
		else {
			double a = (y1 - y2) / (x1 - x2);
			double c = y1 - a * x1;
			dist = abs(a * xa - ya + c) / sqrt(a * a + 1);
		}
	return dist;
}

double Square(double xa, double ya, double xb, double yb, double xc, double yc) {
	double h = DistanceToLine(xa, ya, xb, yb, xc, yc);
	double a = Distance(xb, yb, xc, yc);
	return a * h / 2;
}