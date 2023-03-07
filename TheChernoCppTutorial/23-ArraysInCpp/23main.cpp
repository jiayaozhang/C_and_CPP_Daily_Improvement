
#include <iostream>

int main(){


	int example[5]; // I eclared an array of 5 elements
	example[0] = 2; // The index tart with 0


	int* ptr = example; // Im alowed to write this and I get the pointer to the array
						// when I print an array I get its memory address +++

	/*
		BUT BE AWARE that :
		int count = sizeof(example);
		is DIFFERENT from 
		int count1 = sizeof(ptr);
	*/

	example[2] = 5;
	*(ptr + 2) = 5; // This is an equivalent writing
	/*
	Because ptr is an integer, if I add to it 2 integers, is lie to add to 
	ptr 8 bytes because every int is 8 bytes.

	If ptr was a char (1 bytes), to get to the second index position of the array
	I would add 8 like this:
	*/
	*(int*)((char*)ptr + 8) = 5; // I cast ptr to be char, then I cast ptr to int to assign 5

	for(int i=0; i<5; i++){
		example[i] = 2;
	}

	/*
		Moment 5:47 he visalizes the memory where the array is allocated
		Array allocated memory in adjacent way. In memory each integer is 4 bytes
		so for 5 elements 20 bytes are allocated.
		In the Debg the memory visualization is done by bytes. 
		Each byte is reresented by a couple of two numbers in exadecimal notation.
		1 bytes is 8 bits so each number of the couple reresent 4 bits and can be indeendently
		written in hexadecimal notation.
	*/

	std::cout << example[2] << std::endl;
	std::cout << example << std::endl; // It shows the memory address of the first byte of the array

	return 0;
}