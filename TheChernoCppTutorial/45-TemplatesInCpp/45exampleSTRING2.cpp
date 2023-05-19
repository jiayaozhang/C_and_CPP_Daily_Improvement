/*
TEMPLATES in Cpp
in Java or CSharp they call it Generics

*/

#include <iostream>
#include <string>

void Print(int value){
	std::cout << value << std::endl;
}

void Print2(std::string& value){
	std::cout << value << std::endl;
	value[1] = 'A';
}

int main() {

	Print(5);

	std::string value = "Hello";
	std::cout << value << std::endl;
	Print2(value);
	std::cout << value << std::endl;

	return 0;
}