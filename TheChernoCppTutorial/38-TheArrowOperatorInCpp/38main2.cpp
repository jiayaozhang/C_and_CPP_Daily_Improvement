/*
ARROW OPERATOR in struct and classes
*/

#include <iostream>
#include <string>

struct vector3
{
  float x,y,z;  
  // I want to know the memory offset among x, y and z
  // x is in position 0, y in 4 and z in 8 because each float is 4 MegaBytes
};

int main()
{
	// in this case nullptr or 0 indicates the first position in memoery of struct
	// and in C++ the first position has the index 0
    int offset = (long)&((vector3*)nullptr)->x;
    // int offset = (long)&((vector3*)0)->x; // alternative working way!! ++
    std::cout<<offset<<std::endl;

    // this is the same and more simple to understand:
	vector3* v3 = new vector3();
	offset = ((long)&(v3->x)) - (long)v3;
	std::cout << offset << std::endl;

    offset = (long)&((vector3*)nullptr)->y;
    std::cout<<offset<<std::endl;

    offset = (long)&((vector3*)nullptr)->z;
    std::cout<<offset<<std::endl;
    return 0;
}