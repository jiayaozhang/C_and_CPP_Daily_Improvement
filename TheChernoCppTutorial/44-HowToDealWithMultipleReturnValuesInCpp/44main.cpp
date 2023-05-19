/*
Usualli in C++ a functiona can return one Type, one variable.
In fact we can't return an integer and a string, just only one of them.

To solve this we can adopt different solutions:

1) FIRST SOLUTION
We pass in input the memory address of the parameters we want the fuction to return
In this way in the fuction, we can access that variable dereferencint it and chage its value
Is better that the input used as output has in its name "out" 

*/

#include <iostream>
#include <string>

void Function(int* outVar1, int* outVar2){
	
	if(outVar1){
		*outVar1 = 10; 
	}

	if(outVar2){
		*outVar2 = 10; 
	}

	return;
}

int main (){

	int outVar1, outVar2;

	Function(&outVar1, &outVar2);

	Function(nullptr, nullptr);

	std::cout << outVar1 << ", " << outVar2 << std::endl;

	return 0;
}