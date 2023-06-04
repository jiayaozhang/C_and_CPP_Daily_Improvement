/*
Multiple TYPES of Data in a SINGLE VARIABLE in C++?
It's a C++ 17 new class: std::variant 

*/

#include <iostream>
#include <variant>

int main(){

	std::variant<std::string, int> data0("Remo");
	std::variant<std::string, int> data;
	data = "Antonello";
	data = 2;

	data = "Antonello";
	std::cout << std::get<std::string>(data) << "\n";
	data = 2;
	std::cout << std::get<int>(data) << "\n";

	// Now how do we get data from it, if we don't know the type? 
	// There are 2 ways 
	int i = data.index(); // returns the index 0 if the data type is string, or 1 if the type is int.
				// the index associated with the type depends from the variant declaration. 
				// In our case the declaration was: std::variant<std::string, int> data;

	// std::get_if<std::string>(&data) returns a pointer if data is of type string
	if (auto* value = std::get_if<std::string>(&data)){ 
		// equivalent: if (auto value = std::get_if<std::string>(&data)){ 
		std::string& v = *value; // *value we dereference value
	} else {
		std::cout << "Not string!\n";
	}

	// If we have a union like this:
	union{
		double a;
		float b;
	};
	// The size of union would be the biggest size that in this case if double

	// What is the size of a variant? The variant has the size 
	// that is the sum of the size of the types it contains. In fact:
	std::cout << sizeof(int) << "\n"; 
	std::cout << sizeof(std::string) << "\n"; 
	std::cout << sizeof(data) << "\n";

	// For this reason unions are more efficient, 
	// but they don't handle different types and you can incurr in undefined behaviours.
	// Better to use variant, is more safe.

	return 0;
}