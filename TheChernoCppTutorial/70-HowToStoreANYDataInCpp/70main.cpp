/*
How to store ANY kind of data, in a variable, in C++
You can do that with void pointers but C++ 17 introduced a new way.
std::any

*/

#include <iostream>
#include <any>

void* operator new(size_t size){ // void pointer
	return malloc(size);
}

struct CustomClass{

std::string s0, s1;

};

int main(){

	std::any data0 = std::any(5);
	std::any data; 

	data = CustomClass();
	data = 2;
	data = "Cherno"; // const char pointer
	data = std::string("Cherno");

	std::string str = std::any_cast<std::string>(data);
	// if it is  not the correct type it will return an exception

	std::string& str1 = std::any_cast<std::string&>(data); 
	// This pass the address and I don't have any new memory allocation

	/*
		What is the difference with std::variant? 
		std::variant makes you list all the different available types, while std::any not
	In this context std::variant is type safe and more efficient in memory and time of processing
	*/

	return 0;
}