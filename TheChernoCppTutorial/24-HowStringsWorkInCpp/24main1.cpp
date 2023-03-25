#include <iostream>
#include <string>

int main(){

	/* Strings again are a char pointerm an array of charactes 
		with some built-in functions
	*/

	std::string name = "Cherno";
	int nameSize = name.size();

	std::cout << name << std::endl; // we need to include #include <string> to rpint string in cout
	// << is the overload operator

	/* APPENDING STRINGS */

	// std::string name = "Cherno" + " Hello!";
	/* This is not working because I'; trying to add two const char array
	"Cherno" and " Hello!" are two const char array and we can't combine two pointers together
	*/

	// METHOD 1
	std::string name1 = "Cherno";
	name1 += " Hello!";
	std::cout << name1 << std::endl;

	// METHOD 2 calling the string constructor
	std::string name2 = std::string("Cherno") + " Hello!";
	std::cout << name2 << std::endl;

	bool contains = name.find("no") != std::string::npos; // npos is an illegal position for string

	return 0;
} 