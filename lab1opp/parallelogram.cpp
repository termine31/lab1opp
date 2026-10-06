#include "parallelogram.h"
#include <cmath>
#include <iostream>


Parallelogram::Parallelogram()
	: x1(0), y1(0), x2(1), y2(0), x3(1), y3(1) {
}


Parallelogram::Parallelogram(
	double x1,double y1,double x2,double y2,
	double x3,double y3){ }

Parallelogram::~Parallelogram() {};




//унарные операторы 


// методы
// 1.
double Parallelogram::sideAB() const {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
// 2.
double Parallelogram::sideBC() const {
	return sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
}

double Parallelogram::perimeter() const {
	return 2.0 * (sideAB() + sideBC());
}


// d = a +c-b ad = c-b
double Parallelogram::area() const {
    double abx = x2 - x1, aby = y2 - y1;
    double adx = (x1 + x3 - x2) - x1; // = x3 - x2
    double ady = (y1 + y3 - y2) - y1; // = y3 - y2
    return std::fabs(abx * ady - aby * adx);
}

void Parallelogram::print() const {
    std::cout << "A(" << x1 << ", " << y1 << ")  "
        << "B(" << x2 << ", " << y2 << ")  "
        << "C(" << x3 << ", " << y3 << ")  "
        << "D(" << getX4() << ", " << getY4() << ")\n";
}


























