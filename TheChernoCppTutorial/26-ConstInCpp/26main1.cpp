#include <iostream>
#include <string>

int main (){

	const int MAX_AGE = 90;
	
	const int* a = new int;
	// int const* a = new int; // Equivalent writing

	// *a = 2; // I can't change the contents of the pointer
	std::cout << a << std::endl;
	a = (int*)&MAX_AGE;  // but I can change the pointer
	std::cout << a << std::endl;
	a = nullptr;
	std::cout << a << std::endl;

	std::cout << "---------" << std::endl;

	int* const b = new int;

	*b = 2; // I can change the contents of the pointer
	std::cout << b << std::endl;
	// b = (int*)&MAX_AGE;  // but I can't change the pointer
	std::cout << *b << std::endl;

	std::cout << "---------" << std::endl;

	const int* const c = new int; // Here I can't change enything
	// int const* const c = new int; // Equivalent writing

	return 0;
}

/*
For people having trouble remembering the order in which const keyword is to be used, here's a quick tip.
You have to read it backward, like the compiler does. For instance : 

-const int * A; -> "A is a pointer to an int that is constant."
*/