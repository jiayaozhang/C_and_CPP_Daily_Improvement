/*

NAMESPACE

In C++ namespaces are confined to the scope they are declared and can't be accessed by outside
Tries to use namespace in the little scopes and never do it in the header files

*/


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

namespace apple { namespace functions {
// namespace apple::functions { // alternative

		void print(const char* text){
			std::cout << text << std::endl;
		}
	}

}


int main(){


// Alternative 1
	using namespace apple::functions;
	// using namespace apple; using namespace functions; //equivalent
	print("Hello"); // I'll take this from apple


// Alternative 2
	apple::functions::print("Hello"); // I'll take this from apple


// Alternative 3 - Using namespace alias
	namespace a = apple::functions;
	a::print("Hello"); // I'll take this from apple

	return 0;
}

