#pragma once

class Shape
{
public:
	virtual double area() const =0;
};

void printArea(const Shape& shape);
