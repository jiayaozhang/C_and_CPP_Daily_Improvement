#include <iostream>
#include <string>

int main (){

	int a = 5;
	a = 2;
	std::cout << a << std::endl;
	std::cout << "---------" << std::endl;

	const int MAX_AGE = 90;
	std::cout << MAX_AGE << std::endl;
	std::cout << "---------" << std::endl;

	int* b = new int; // I created the pointer in the HEAP part of memory because I used "new"
	*b = 2;
	std::cout << b << std::endl;	
	std::cout << *b << std::endl;
	std::cout << "---------" << std::endl;

	// b = &MAX_AGE; // I can't do this because MAX_AGE si a constant
	b = (int*)&MAX_AGE; /* to bypass I can cast with a normal int pointer. Here I'm breaking the
							the constant rule */ 
	std::cout << b << std::endl;
	std::cout << &MAX_AGE << std::endl;
	std::cout << *b << std::endl;
	std::cout << MAX_AGE << std::endl;
	std::cout << "........." << std::endl;
	*b = 2;	
	std::cout << *b << std::endl;
	std::cout << MAX_AGE << std::endl;
	std::cout << b << std::endl;
	std::cout << &MAX_AGE << std::endl;


	return 0;
}