/*

In Cpp 11 there is a INBUILT DATA STRUCTURE
called STANDARD ARRAY. 
It includes size chacking and keep tracks of the size of our array.

Usually with normal arrays there is no sizeOf() function that can return the array size
we can;t write array->sizeOf() (NB: I used -> instead of . because array is a pointer and
pointers access their function with ->)

An Escamotagle to know the normal array size can be:

int a[5];
int count = sizeof(a)/sizeof(int);

This can work only if the array is allocated in the STACK otherwise it would not be possible
because in 

int* a = new int [5];

a is just a pointer in the HEAP

*/

#include <iostream>
#include <array>

int main(){

	int a[5];
	int count = sizeof(a)/sizeof(int);

	std::cout << count << std::endl;

	std::array<int,5> another;
	int sizeAnother = another.size(); 

	std::cout << sizeAnother << std::endl;

	return 0;
}

/* 
	BETTER TO USE STANDARS ARRAY because they keep track of the boudaries and the length
*/