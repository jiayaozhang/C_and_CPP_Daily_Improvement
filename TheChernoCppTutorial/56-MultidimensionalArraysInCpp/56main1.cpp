
#include <iostream>

/*
Dealing with arrays will result in memory fragmentation
*/

int main(){

	
	int** a2d = new int*[5]; 

	for (int i = 0; i < 5; i++){
		a2d[i] = new int[5]; // the array in i and the array in the position i+1
							 // are allocated not contiguously: it depends on the
							 // malloc function for the hEAP memory
	}
	// We have 25 integers, contained in 5 integer arrays that are allocated in different
	// locations of the heap memory. Going through these elements will results in slowing down
	// the program performances. It would be betetr of having a 1D array of 25 elements.
	// In fact 1D array are stored in the way that each element of the array is contiguous to the previuos one
	// This avoids problems of chache missing.

	// Array initialization
	// the code wrote in the video at 16:47 should really be a2d[y][x] = 2; 
	for(int y = 0; y <5; y++){
		for(int x = 0; x <5; x++){
			a2d[y][x] = 2;
		}
	}

	for (int i = 0; i < 5; i++){
		delete[] a2d[i] // I delete each array
	}
	delete[] a2d; // I delete the array that contains the pointers to the deleted arrays

	// ALTERNATIVE VERSION of a 2D array 
	// This way is a lot faster because the memory addresses of the elements are always contiguous
	int* array = new int[ 5 * 5];

	for(int y = 0; y <5; y++){
		for(int x = 0; x <5; x++){

			array[y * 5 + x ] = 2;
		}
	}

	return 0;
}