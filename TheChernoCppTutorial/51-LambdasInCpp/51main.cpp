/*
LANBDAS are anonymous functions.
 wherever we would normally set a function pointer to a function 
 we can set it to a lambdainstead

WEBSITE: cppreference.com
*/

#include <iostream>
#include <string>
#include <vector>

void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) 
		func(value);
}

int main(){

	std::vector<int> values = { 1, 5, 4, 2, 3 }; 

	// Here I'm using the LANBDA function
	auto lambda = [](int value){std::cout << "Value: " << value << std::endl;};
	// the Lambda is [](int value){std::cout << "Value: " << value << std::endl;}
	// and it is of type "void(*func)(int)" as expressed in the definition of the ForEach

	ForEach(values, lambda); 

	return 0;
}

