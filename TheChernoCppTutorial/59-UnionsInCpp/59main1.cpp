/*
Unions in Cpp

*/

#include <iostream>

struct Vector2{
	float x,y;
};

struct Vector4{ 

	union{
		struct{
			float x, y, z, w;
		};
		struct{
			Vector2 a,b;
		};
		// These 2 struct inside the union have the same memory allocation space
		// Now Ive different ways to acces data in Vector4: or using x, y, z, w	or using a and b.
		// a will be the same memory of x and y, and b will be the same memory of z and w 	
		// because they are occupying the same memory.
	};

};

struct Vector4_Alternative{ // this vector is just 2 Vector2
	float x, y, z, w;

	Vector2& GetA(){
		return *(Vector2*)&x; // See Cpp puning
		// In this way I can return the x, y, z, w values.
	}
};

void PrintVector2(const Vector2& vector){

	std::cout << vector.x << ", " << vector.y << std::endl;
}

int main(){

	Vector4 vector = {1.0f, 2.0f, 3.0f, 4.0f};
	PrintVector2(vector.a);
	PrintVector2(vector.b);
	vector.z = 500.0f;
	std::cout << "---------------------\n";
	PrintVector2(vector.a);
	PrintVector2(vector.b);

	return 0;
}