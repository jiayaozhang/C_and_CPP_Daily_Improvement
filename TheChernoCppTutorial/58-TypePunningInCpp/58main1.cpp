/*
TYPE PUNNING

*/

#include <iostream>

// If it's empty a struct has at least 1 Byte
struct Entity {
	int x, y;
	// In this case the struct has two integers and the memory allocated is just
	// the two integers
};

int main(){

	Entity e = {5, 8};

	int x0 = e.x;
	int y0 = e.y;

	int* position = (int*)&e;
	std::cout << position[0] << ", " <<position[1] << std::endl;
	// I converted it into an array: I gor the first position of the x integers
	// and then I told to move bt 4 Bytes position as if it was an array and then
	// I got y because struct contains just the x and y integers.

	int x = *(int*)((char*)&e + 4);
	int y = *(int*)((char*)&e + 4);
	// We performed a row memory operation
	// a char pointer "(char*)" is 1Byte in size
	//
	std::cout << x << ", " << y << std::endl; // We get 8;

	return 0;
}