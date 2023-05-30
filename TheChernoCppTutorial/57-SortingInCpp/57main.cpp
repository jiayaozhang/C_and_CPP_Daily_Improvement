/*
SORTING
using std::sort 
We need to provide to that function a begin iterator, a start iterator and optionally a function
to sort the data like lambdas or other std library functions.

See: cppreference.com for more details on std::sort
*/

#include <iostream>
#include <vector>
#include <algorithm> // for sorting
#include <functional> 

int main(){

	std::vector<int> values = {3, 5, 1, 4, 2};

	std::sort(values.begin(), values.end());

	for(int value : values)
		std::cout << value;
	std::cout << std::endl;

	std::sort(values.begin(), values.end(), std::greater<int>());
	// I passeed a std function to sort

	for(int value : values)
		std::cout << value;
	std::cout << std::endl;

	std::sort(values.begin(), values.end(), 
		// I pass a lambda function to sort

		[](int a, int b){
			return a<b;
		}
		);

	for(int value : values)
		std::cout << value;
	std::cout << std::endl;

	return 0;
}