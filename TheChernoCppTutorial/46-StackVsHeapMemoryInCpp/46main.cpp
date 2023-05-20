/*
A few notes:
- to be clear, each program/process on our computer has its own stack/heap
- each thread will create its own stack when it gets created, 
	whereas the heap is shared amongst all threads

STACK and HEAP are in the RAM

when we lauch the program, the program is loaded in the RAM, so both the STACk and the HEAP 
of the program are in the RAM.

STACK has usually 2 MBytes of RAM allocated
HEAP has a predefined allocation but its size can change during the run of the application.
 

The MEMORY ALLOCATION of an element in the HEAP and in the STACK are quite different.
*/

#include <iostream>
#include <string>

struct Vector3{
	float x, y, z;
	Vector3() : x(10), y(11), z(12){}
};

int main(){

	int value = 5; // allocated in the STACK

	int* hvalue = new int; // allocated in the HEAP (new allocates in the HEAP)
	*hvalue = 5;
	delete hvalue;

	int array[5]; // STACK
	array[0]=1;array[1]=2;array[2]=3;array[3]=4;array[4]=5;
	int* harray = new int[5]; // HEAP
	harray[0]=1;harray[1]=2;harray[2]=3;harray[3]=4;harray[4]=5;
	delete[] harray;

	Vector3 vector;
	Vector3* hvector = new Vector3();
	delete hvector;

	/*
		In the video is explained the MEMORY view of Visual Studio.

		In the STACK, data are allocated contiguously. For example array is composed by 5 integers
		and every integer is composed by 4 Bytes. Because the memory allocation of the STACk is contiguously
		then having the memory address of the first Byte, if I move of 4 Bytes I find the second element of array.
		In the STACK things are allocated one on the top of another one and the memory allocation is really fast:
		it is just one CPU instruction. We move the stack pointer of 4 Bytes and then we return the address 
		of the stack pointer.
		In the stack when the scope ends, the stack memory used for that scope is freed 

		For the HEAP, we use new, but make_unique or make_shared for smart pointers they call new for you.
		If we use new, we need to free memory manually.
		The new keyword just call the function malloc. To allocate memory malloc calls the operating system functions.
		Malloc has a list of memory available spots, for allocating memory and when you request a memeory allocation, malloc watches
		if there is a spot and then return the pointer to that spot. Then, malloc rewrites the free list memory allocations indicating 
		that the spot you used is not not free anymore. If the allocating size in memory that you request is more that the available one
		malloc asks to the operating system for more memory, and this takes more time.
		The performances of the HEAP allocation depends on the implementation of the malloc function, and always HEAP allocation is slower 
		than the STACK allocation. 

		The differences between STACK and HEAP are in the memory allocation. HEAP has a free lists of memory spots 
		that can be used, and searches in these spots to allocate new data. Usually these spots are not contiguously. 
		If you could allocate 4 GBytes of HEAP at the begin of the program then allocating in the HEAP or in the 
		STACK it would be almost the same thing. This is because of the free memory addresses list that the HEAP has.

		Better always to allcate in the STACK. If you need to allocate in the HEAP if you want a longer lifetime
		or you have a lot of space to allocate like 15 MBytes.
	*/

	return 0;
}