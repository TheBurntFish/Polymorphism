#include "Circle.h"

Circle::Circle(double r) {
	radius = r;
}

double Circle::area() const {
	return radius * radius * 3.14;
}