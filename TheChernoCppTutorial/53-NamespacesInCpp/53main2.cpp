/*

NAMESPACE

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

	void print_again(const char* text){	}
}


int main(){

	using apple::print;

	print("Hello"); // I'll take this from apple

	apple::print_again("Hello"); // but I need to specify apple:: for print_again

	return 0;
}

