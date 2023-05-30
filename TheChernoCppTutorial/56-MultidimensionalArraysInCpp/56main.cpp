/*

A 2D array is an array of array. usually we deal with arrays using pointers.
So a 2D array is a collection of pointers where each pointers points towards other arrays.

*/

#include <iostream>

int main(){

	/*
	NOTE: normal use and costruction of array is 
			int* array = new int[50]; // with pointer
			// I can't defina an array without pointer like: int array = new int[50]; WRONG!!
			array[0] = 2;
			std::cout << array[0]; << std::endl;
	*/

	int* array = new int[50]; // 1D array
	int** a2d = new int*[50]; // 2D array a pointer of pointers (int**)
							  // Here I'm storing 50 integer pointers

	// In these two lines I'm allocating in both cases 200Bytes of memory
	// because each integer is 4 Bytes

	array[0] = nullptr; // the address is towards an integer
	a2d[0] = nullptr; // the address is towards an integer pointer

	// With a2d we have an array that contains the memory allocations of 50 arrays
	for (int i = 0; i < 50; i++){
		a2d[i] = new int[50]; // here we allocate 50 arrays for every element of a2d
	}

	// a2d[0] // gives an array of pointers
	// a2d[0][0] // gives an array of integers
	a2d[0][0] = 0;
	a2d[0][1] = 1;
	a2d[0][2] = 2;

	// Becasue we allocated a2d in the HEAP now we need to delete it
	// doing delete[] a2d; just deletes the array that contains the pointers to the 50 arrays
	// the 50 arrays that we created will still be in the memory
	// there is no delete[][] a2d; operator so we need to do it manually

	for (int i = 0; i < 50; i++){
		delete[] a2d[i] // I delete each array
	}
	delete[] a2d; // I delete the array that contains the pointers to the deleted arrays

	// 3D case

	int*** a3d = new int***[50];
	for (int i = 0; i < 50; i++){

		a3d[i] = new int*[50]; // here I'm allocating an array of pointer
		for (int j = 0; j < 50; j++){

			int** ptr = a3d[i]; // here I'; actually allocating an array
			ptr[j] = new int[50];
		}
	}

	// a3d[0] // gives an array of pointers
	// a3d[0][0] // gives an array of pointers
	// a3d[0][0][0] // gives an array of integers


	return 0;
}