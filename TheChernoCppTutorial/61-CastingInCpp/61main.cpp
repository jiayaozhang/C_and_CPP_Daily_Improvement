/*
CASTING in Cpp

*/

#include <iostream>

int main (){

	int a = 5;
	double val = a; // Implicit conversion

	double val1 = 5.25; 
	int a1 = val1; // Implicit conversion
	int a2 = (int)val1; // Explicit conversion: C style cast!

	double val2 = (int)val1 + 5.1;
	std::cout << val2 << std::endl; // Explicit conversion: C style cast!
	std::cout << (int)(val1 + 5.1) << std::endl; // Explicit conversion: C style cast!

	// CAST C++ Style: it can do everything like the C cast style can do
	// there are 4 types: static_cast, reinterpret_cast, dynamic_cast, const_cast
	// these C++ casts perform also compile time checks and can return the null value 
	// if it's not possible to convert. So they do more respect C Style but also slow you down.
	// Another advantage of using C++ cast, is that you can find it in your code and recognise the
	// type of cast you are performing.

	double s = static_cast<int>(val1) + 5.1;

	return 0;
}