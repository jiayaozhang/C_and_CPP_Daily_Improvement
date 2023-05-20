/*
LANBDAS are anonymous functions.
 wherever we would normally set a function pointer to a function 
 we can set it to a lambdainstead

WEBSITE: cppreference.com
*/

#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>


void ForEach(const std::vector<int>& values, const std::function<void(int)>& func) {
	for (int value : values) 
		func(value);
}

int main(){

	std::vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = std::find_if(values.begin(), values.end(), [](int value){return value >3;});
	// this will return an iterator over the vector values when the lambda function finds the 
	// first element >3

	std::cout << *it << std::endl; // I'm deferencing the iterator to show the content of the element
	// at the iterator position. In this cas it is 5.

	int a = 10;
	auto lambda = [=](int value){std::cout << "Value: " << value << ", " << a << std::endl;};
	ForEach(values, lambda);

	return 0;
}

