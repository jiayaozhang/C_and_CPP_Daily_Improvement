/*
TYPE PUNNING
2.45
*/

#include <iostream>

int main(){

	int a = 50;
	double value = a; //implicit conversion
	double value1 = (double)a; //explicit conversion
	std::cout << value << std::endl;
	std::cout << value1 << std::endl;

	/* Let's see what's in the memory
		In Visual Studio go to: /Debug/Windows/Memory/Memory 1
	*/

	// Here we are type puning an integer to a double
	double value2 = *(double*)&a; 
	// &a returns the address of a, as an integer pointer
	// (double*) is a double pointer type, 
	// (double*)&a I'm converting an int pointer to a double pointer
	// *(double*)&a derefencing the double pointer we get the double value
	std::cout << value2 << std::endl;
	// Here the console prints out a strange number that is the memory representation of an int 
	// inside the memory of a double. In fact a is value2 is a double (8 Bytes) and in that memory we past
	// the memory of an int that is of 8 Bytes. In this way the last part of the value2 memory is not allocated.
	// For this reason when the program reads the value2 memory (8 Bytes) reads a strange value. If the program
	// was reading only the first 4 Bytes of the value2 memory then it would read the vauel of a.
	// You can check it out if you look inside the memory.

	/*
		If we look at the memory, we put a 4 Bytes memory of an integer 
		into a 8 Bytes memory of a double.
	*/

	double& value3 = *(double*)&a; // I'm referencing here and not copying inside a new variable
	value3 = 0.0; // I'm writing 8 Bytes instead of 4B; because in a I've 4 Bytes
	
	return 0;
}