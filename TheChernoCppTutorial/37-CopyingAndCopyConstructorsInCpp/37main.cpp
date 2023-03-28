#include <iostream>
#include <string>

struct Vector2{
	float x, y;
};

int main (){

	// In this example Ive two variable allocated in two different addresses of the memory
	// If I change b, a is not effected. I'm copying whats in a into b
	int a = 2;
	int b = a;
	b = 4;
	// In this example Ive two variable allocated in two different addresses of the memory
	// If I change v2, v is not effected. I'm copying whats in v into v2
	Vector2 v = {2, 3};
	Vector2 v2 = v;
	v2.x = 5;

	// In this case I change the w and w2 are two pointers, pointing at the same memory address
	Vector2* w = new Vector2();
	Vector2* w2 = w;	
	w2->x = 2; // This is affecting both w and w2 because 
	// Im changing the content of the memory address, w and w2 are both pointing to
	w2++; // I change the address w2 is pointing to

	return 0;
}