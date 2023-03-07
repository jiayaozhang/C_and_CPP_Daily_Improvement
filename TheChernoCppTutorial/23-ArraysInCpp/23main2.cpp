/* CONSIDERATIONS

Is better to create arrays in the HEAP or in the STACK?

Example: Ive a function called Entity and I declare an array there.

If I declare the array like this: int example[5];
then the array will be in the STACKm so when I go to the memory allocated 
for the function then I see the array allocated just there at the beginning of the function

If I declare the array using rhe word "new" int* another = new int [5];
then this array will be allocated in the HEAP so when I go to the memory allocated 
for the function then I'll find the memory address of the array that now is not allocated
in the fuction memoery but it is allocated in the HEAP.

So to avoid jumping is better to create the array in the STACK.

*/

#include <iostream>

class Entity{

	public:
		int example[5];
		// int* another = new int [5];

		Entity(){
			for(int i=0; i<5; i++){
				example[i] = 2;
			}
		}
};

int main(){

	Entity e;

	std::cout << e.example[2] << std::endl;

	return 0;
}