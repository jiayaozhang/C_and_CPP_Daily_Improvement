/*
FUNCTION POINTERs
Its a way to assign a function to a variable

*/

#include <iostream>
#include <string>

void HelloWorld(){
	std::cout << "Hello World!" << std::endl;
}

int main(){

	HelloWorld();

	// auto functionVar = HelloWorld(); // this doesn't work because Im not assigning HelloWorld
								// function to functionVar but its return value that in this case is void
	auto functionVar = HelloWorld; // Here I'm assigning the memory address of HelloWorld function to
								// functionVar.
	auto functionVar1 = &HelloWorld; // equivalent writing

	// Now I can call
	functionVar(); // with this I'll call the functino HelloWorld
	functionVar1(); // with this I'll call the functino HelloWorld

	// functionVar and functionVar1 are variables but of which type?
	// The type is: void(*functionVar)(); where in the  second void (), I can input the parameters 
	// the function takes in this case the function HelloWorld doesn't take any parameter in input

	void(*functionVar2)() = HelloWorld; 
	functionVar2();

	// This type is quite confusing so it is possible to use 2 strategies:
	// - use auto
	// - use typedef

	typedef void(*HelloWorldFunction)(); // Here I set a type definition
	HelloWorldFunction functionVar3 = HelloWorld;
	functionVar3();

	return 0;
}