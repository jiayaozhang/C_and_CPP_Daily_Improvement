/*

NAMESPACE

In C++ namespaces exist to avoid naming conficts
*/


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

namespace apple {

	void print(const char* text){
		std::cout << text << std::endl;
	}
}

namespace orange {

	void print(const char* text){
		std::string temp = text; 
		std::reverse(temp.begin(),temp.end());
		std::cout << temp << std::endl;
	}
}

int main(){

	// using namespace apple; // Using these avoids to write "apple::" and "orange::" prefixes
	// using namespace orange;

	apple::print("Hello"); // "::" is a namespace operator

	// We use "::" operator also for classesm or static and non static functions
	// for example if we want to access a variable or function inside a static function
	// we use like: "static_func::var" or "static_func::func"

	orange::print("Hello"); 

	return 0;
}

