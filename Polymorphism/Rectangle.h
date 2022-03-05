#pragma once
#include "Shape.h"
class Rectangle : 
	public Shape
{
public:
	Rectangle(double w, double h);
	double area() const;

	
private:
	double width;
	double height;
};

