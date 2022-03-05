#include <iostream>


#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"



using namespace std;

template <typename T>
void printArea(const T& shape){
	std::cout << shape.area() << "\n";
}

int main() {
	Rectangle r1{ 3.0, 5.0 };
	Square s1{ 4.0 };
	Circle c1{ 10.0 };

	printArea(r1);
	printArea(s1);
	printArea(c1);
}



/*
1. Which one of these do you think is easier 
to implement and use, dynamic or static
polymorphism?

I very much think static polymorphism is easier to use and implement.
Probably noticable based on the difference of time in my commits.



2. Modern C++ development highly encourages 
static polymorphism over dynamic
polymorphism, why do you think that is?

I think it is because templates are more compact and doesn't require you to add
files to the parent file and this would probably take a long time with extremely
large projects.

*/