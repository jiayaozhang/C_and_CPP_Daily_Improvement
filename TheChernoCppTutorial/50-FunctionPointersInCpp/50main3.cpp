/*
FUNCTION POINTERs

we can also use a LAMBDA function. 
Lambda function is not a real function is a throwaway function, an anonymous function.

*/

#include <iostream>
#include <string>
#include <vector>

// void PrintValue(int value) {
// std::cout << "Value: " << value << std::endl;
// }

// I want to pas a function to a function
void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) 
		func(value);
}

int main(){

	std::vector<int> values = { 1, 5, 4, 2, 3 }; 

	// Here I'm using the LANBDA function
	ForEach(values, [](int value){std::cout << "Value: " << value << std::endl;} ); 

	// The Labda function is the declaration of a function without a name
	// [](int value){std::cout << "Value: " << value << std::endl;}


	return 0;
}

