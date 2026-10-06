#pragma once
#include <iostream>


class Parallelogram {
private:
	double x1, y1;
	double x2, y2;
	double x3, y3;

public:
	Parallelogram();
	Parallelogram(double x1, double y1,
		double x2, double y2,
		double x3, double y3);

	~Parallelogram();

	Parallelogram operator-() const; // унарный оператор
	// бинарный
	Parallelogram operator+(const Parallelogram& other) const;
	
	// доп методы3



	// геттеры
	double getX1() const { return x1; }
	double getY1() const { return y1; }
	double getX2() const { return x2; }
	double getY2() const { return y2; }
	double getX3() const { return x3; }
	double getY3() const { return y3; }


	// выч D
	double getX4() const { return x1 + x3 - x2; }
	double getY4() const { return y1 + y3 - y3; }



};