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

// befaore we were using a row function pointer as type of our lambda: void(*func)(int))
// if we want to capture parameters with lambda (see below the use of []) 
// we need to change the type to: const std::function<void(int)>& func)
// by including the "#include <functional>" (not explained what is functional)

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func) {
	for (int value : values) 
		func(value);
}

int main(){

	std::vector<int> values = { 1, 5, 4, 2, 3 }; 

	int a = 10;

	// now the type of lambda is: const std::function<void(int)>& func)

	auto lambda = [=](int value){std::cout << "Value: " << value << ", " << a << std::endl;};
	// In the [] I can pass objects to the lambda
	// [=] I pass everything by value: I'm copying the value
	// [&] I pass everything by reference
	// [a] I directly pass a
	ForEach(values, lambda);

	auto lambda2 = [=](int value) mutable {a = 7; std::cout << "Value: " << value << ", " << a << std::endl;};
	// If I don't put "mutable" I can't reassign the value of a	 
	ForEach(values, lambda2); 

	return 0;
}

