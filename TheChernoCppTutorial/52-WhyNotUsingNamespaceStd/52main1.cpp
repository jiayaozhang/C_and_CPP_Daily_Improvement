/*

Moreover if different libraries implement the same functions, then how can you know which namespace 
you are using? You need to search for it. But if two libraries have the same function
then you can't put the namespace for both, otherwise you have a compiler error

+++ Moreover NEVER use namespace in a header file +++

Never to do namespace for std::

*/


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

namespace apple {

	void print(const std::string& text){
		std::cout << text << std::endl;
	}
}

namespace orange {

	void print(const char* text){
		std::string temp = text; 
		// here the implicit conversion from const char pointer to string
		// string has a constructor for this
		std::reverse(temp.begin(),temp.end());
		std::cout << temp << std::endl;
	}
}

using namespace apple;
using namespace orange;

int main(){

	print("Hello"); // for apple needs to be done an implicit conversion
	// because "Hello" is a const char. So this is a better match for orange than for apple
	// For this reason the compiler compiles namespace orange for print("Hello")

	return 0;
}

