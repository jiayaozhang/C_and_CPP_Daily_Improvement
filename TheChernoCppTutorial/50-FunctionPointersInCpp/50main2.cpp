/*
FUNCTION POINTERs

*/

#include <iostream>
#include <string>
#include <vector>

void PrintValue(int value) {
std::cout << "Value: " << value << std::endl;
}

// I want to pas a function to a function
void ForEach(const std::vector<int>& values, void(*func)(int)) {
	for (int value : values) 
		func(value);
}

int main(){

	std::vector<int> values = { 1, 5, 4, 2, 3 }; 
	ForEach(values, PrintValue);

	return 0;
}

