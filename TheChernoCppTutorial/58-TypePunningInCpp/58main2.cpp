/*
TYPE PUNNING

*/

#include <iostream>


struct Entity {
	int x, y;

	int* GetPositions(){
		return &x;
	}

};

int main(){

	Entity e = {5, 8};

	std::cout << e.x << ", " << e.y << std::endl;
 
	int* position = e.GetPositions();
	position[0] = 2;
	position[1] = 3;

	std::cout << e.x << ", " << e.y << std::endl;

	return 0;
}