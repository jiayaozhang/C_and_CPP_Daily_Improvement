/*
Track MEMORY ALLOCATIONS the Easy Way in C++

Valgrind is a great tool for checking for memory leaks or any memory related errors. (C & C++)

*/

#include <iostream>
#include <memory>

// Overloading the new operator globally
void* operator new(size_t size){

	std::cout << "Allocating " << size << " bythes\n";

	return malloc(size); 
}

// Overloading the delete operator globally
void operator delete(void* memory, size_t size)
{
	std::cout << "Freeing " << size << " bythes\n";
	free(memory);
}

struct Object{
int x, y, z;
};

int main(){

	std::string string = "Cherno";

	Object* obj = new Object; // creating on the HEAP

	{
		std::unique_ptr<Object> obj1 = std::make_unique<Object>();
	}

	return 0;
} 