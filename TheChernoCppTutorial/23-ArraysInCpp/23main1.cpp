
#include <iostream>

/*
HEAP is the memory upper allocated 
STACK is the memory downer allocated
*/

int main(){


	int example[5]; /* Allocation in the STACK and it wold be destroyed when 
						the code reaches the end of the scope: the curly bracets of int main(){}
					*/

	int* another = new int [5]; /* Alocation in the HEAP, it will be destroyed until the 
									program ends or we destroy it directly

									Everything allocated with "new" will be there until 
									we don't delete it

								*/
	delete[] another; /* I need the square brackets to delete it becase it was declared with 
						square brackets
						*/

	/*
		BUT BE AWARE that :
		int count = sizeof(example);
		is DIFFERENT from 
		int count1 = sizeof(another);

		example is an object allocated in the STACK memory
		another is a pointer to the array object allocated in the HEAP memory
	*/

	return 0;
}
