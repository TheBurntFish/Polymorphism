#pragma once
#include "Shape.h"
class Square : 
	public Shape
{
public:
	Square(double s);
	double area() const;
	
private:
	double side;
	
};

