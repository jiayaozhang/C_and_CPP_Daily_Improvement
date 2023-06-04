/*
How to make your STRINGS FASTER in C++!

string_view in C++ 17
*/

#include <iostream>
#include <string>

static uint32_t s_AllocCount = 0;

void* operator new(size_t size){ 
// I'm overloading the new operator to know the allocation I perform

	s_AllocCount++;
	std::cout << "Allocating " << size << "bytes\n";
	return malloc(size);
}

#if STRING_VIEW

void PrintName(const std::string& name){ 
	std::cout << name << std::endl;
}

#else

void PrintName(std::string_view name){
	std::cout << name << std::endl;
}

#endif

int main(){

	std::string name = "Yan Chernikov"; // HEAP allocation 

	const char* name1 = "Yan Chernikov"; // I've no allocation with this

#define STRING_VIEW 1
#if STRING_VIEW

	std::string firstName = name.substr(0, 3); // I've allocation with this
	std::string lastName = name.substr(4, 9); // I've allocation with this

#else

	std::string_view firstName(name.c_str(), 3); // I've no allocation with this
	std::string_view lastName(name.c_str() + 4, 9); // I've no allocation with this

#endif

	std::string_view firstName1(name, 3); // I've no allocation with this
	std::string_view lastName1(name + 4, 9); // I've no allocation with this

	PrintName(firstName);
	PrintName(last Name);

	PrintName(firstName1);
	PrintName(last Name1);

	PrintName("Cherno"); // I've no allocation with this

	std::cout << s_AllocCount << " allocations" << std::endl;
	return 0;
}