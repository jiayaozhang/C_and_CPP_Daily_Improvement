/*
ARROW OPERATOR in struct and classes
*/

#include <iostream>
#include <string>

class Entity{
public:
	int x;
public:
	void Print() const {
		std::cout << "Hello!" << std::endl;
	}

};

int main(){

	Entity e;
	e.Print();

	Entity* ptr = &e;
	// how can I access Print from the pointer?

	// 1)
	Entity& entity = *ptr; // dereferencing the pointer
	entity.Print();

	// 2)
	(*ptr).Print(); // I use parethesis because of the operators precedence
	// first C++ goes to the object of Print and then it dereference the result of Print

	// 3)
	ptr->Print();
	ptr->x = 2;

	return 0;
}