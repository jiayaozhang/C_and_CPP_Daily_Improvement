/*
FUNCTION POINTERs

*/

#include <iostream>
#include <string>

void HelloWorld(int a){
	std::cout << "Hello World! Value: " << a << std::endl;
}

int main(){

	typedef void(*HelloWorldFunction)(int); 
	HelloWorldFunction functionVar3 = HelloWorld;
	functionVar3(8);
	functionVar3(99);
	functionVar3(10);

	return 0;
}