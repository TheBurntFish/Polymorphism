#pragma once
#include "Shape.h"


class Circle : 
	public Shape
{
public:
	Circle(double r);

	double area() const;
	
private:
	double radius;
};

