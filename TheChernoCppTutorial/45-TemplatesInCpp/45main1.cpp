/*
TEMPLATES in Cpp
using classes

*/

#include <iostream>
#include <string>

template<typename T, int N>
class Array{
private: 
	T m_Array[N]; // the size and the type of the arrar are determined at compile time 
					// because templates are evaluated at compile time
public:
	int GetSize() const {
		return N;
	}
};

int main() {

	Array<std::string, 5> array; // I want an Array stack to be created on teh stack
	std::cout << array.GetSize() << std::endl;

	return 0;
}

/*
with templates you can get the compiler to write code for you based on:
- a set of rules that you've given it and 
- based on the usage of that function or class.
If you don't use the template, the template is not compiled 

Templates are good but if you go too far with them then its difficut to understand what is compiled
*/