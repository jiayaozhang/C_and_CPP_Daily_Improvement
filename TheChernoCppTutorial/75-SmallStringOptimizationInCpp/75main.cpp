/*
Small String Optimization in C++ (SSO)

A string is defined SMALL if it has 15 characters or less.
If it is so, C++ won't allocate memory on the HEAP,
it would just allocate a buffer in the STACK

If you have a string that is less than 15 characters,
no problem in using const char*

*/

#include <iostream>
#include <string>

void* operator new(size_t size){
	std::cout << "Allocating " << size << " bytes\n";
	return malloc(size);
} 

int main (){

	std::string name = "Cherno"; // Usually is allocatd in the HEAP 
								// but if it's a small string it is allocated 
								// in a buffer in the stack

	const char* name1 = "Cherno"; // Simple static string
}
