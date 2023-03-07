#include <iostream>

class Entity{

	public:

		// const int size = 5;
		// int example[size]; // This doesn't work because size should be known 
						   // already at compile time

		static constexpr int size = 5;
		int example[size]; 

		Entity(){
			for(int i=0; i<size; i++){
				example[i] = 2;
			}
		}
};

int main(){

	Entity e;

	std::cout << e.example[2] << std::endl;

	return 0;
}