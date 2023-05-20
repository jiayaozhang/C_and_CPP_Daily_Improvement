/*
using NAMESPACE
if I use namespace it is harder to find out which elements really belong 
to the standars library for example. It is less explicit
*/


#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

// using namespace std; // I can define it here for the whole code

void ForEach(const std::vector<int>& values, const std::function<void(int)>& func) {
	for (int value : values) 
		func(value);
}

int main(){

	using namespace std; // I can define it here just for this scope

	vector<int> values = { 1, 5, 4, 2, 3 };
	auto it = find_if(values.begin(), values.end(), [](int value){return value >3;});
	// this will return an iterator over the vector values when the lambda function finds the 
	// first element >3

	cout << *it << endl; // I'm deferencing the iterator to show the content of the element
	// at the iterator position. In this cas it is 5.

	int a = 10;
	auto lambda = [=](int value){cout << "Value: " << value << ", " << a << endl;};
	ForEach(values, lambda);

	return 0;
}

