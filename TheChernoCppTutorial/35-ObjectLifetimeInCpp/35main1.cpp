
#include <iostream>
#include <string>

int* CreateArray(){
	int array[50];
	return array;
	/* it creates an array and then it returns a pointer to that array
		but the array is created in the stack and the function return a pointer to the stack
		array memory. That stack memory gets cleared as soon as we go out of scope
	*/
}

int* CreateArray1(){
	int* array = new int[50];
	return array;
	/* it creates an array in the HEAP and then it returns a pointer to that array
		THIS METHOS WORKS
	*/
}

void CreateArray2(int* array){ //this function gets apointer to that array
	// fill array
}

void CopyArrayInFunction(int array[]){
	//nothing
}

int main(){

	{
		
		int* a = CreateArray(); // this code fails

		int* a1 = CreateArray1(); // this code works

		// other working method
		int array[50]; // allocated in the stack
		CreateArray2(array);
		CopyArrayInFunction(array);
	}

}

