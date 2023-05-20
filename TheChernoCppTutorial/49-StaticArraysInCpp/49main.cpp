/*
STATIC ARRAY: array that do not grow. When you create one of them you define
the size and the type of elements in it. Then you can't longer modify them.
*/

#include<iostream>
#include<array>

void PrintArray(const stdLLarray<int, 5>& data) {
	// & because I'; passing the array by reference
	// const because I don't have to modify the array data here
	for(int i = 0; i < data.size(); i++){}

}

int main(){

	// STATIC array
	std::array<int, 5> data;
	data[0] = 2;
	int len = data.size(); // this keeps track of the size
	data.begin();
	// We can also use std::sort
	// It has bounds checking: if you ask to access over the size of the array
	data[5] = 7; // In debug mode it will send an alert because it's forbidden to do so

	// Old standard array style 
	int dataOldStyle[5];
	dataOldStyle[0] = 0;
	// Here I need to track the size manually
	dataOldStyle[5] = 7; // No bounds checking, this won't dislay anty alert, 
						// it will just override data in that memory location

	/*
	Static array and the old style arrays are both allocated in the STACK.
	The memory accupied is the same. The static array doesn't have a memory allocated
	variable for size, there is just the number 5 allocated as in the old style C++ array.
	So the memory occupied by the two array version is the same.

	Over the two is better to use the Static array because it has the same performances of the old style
	array but then it keeps also track of the size.
	*/

	// To know more about it, in Visual Studio just go with right click on the
	// "#include<array>" and then you click on "Opend Documentation" and this will reveal the code

	return 0;
}