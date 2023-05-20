/*

NAMESPACE
In this case if I didn't have namespace I would have 2 identical funtions
and I would get a Linking error, (or a Compilation error if the functions are in the same file)
because I've two functions with the same name.

In C there are no namespace, so when you import a library, the library need to have function
named like: "LibName_print" in this way you can be sure about the library function you are using.

*/


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

// namespace apple {

	void print(const char* text){
		std::cout << text << std::endl;
	}
// }

// namespace orange {

	void print(const char* text){
		std::string temp = text; 
		std::reverse(temp.begin(),temp.end());
		std::cout << temp << std::endl;
	}
// }

// using namespace apple;
// using namespace orange;

int main(){

	print("Hello"); 

	return 0;
}

