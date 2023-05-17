/*
STANDARD TEMPLATE LIBRARY
*/

#include <iostream>
#include <string>
#include <vector> // VECTOR

// VECTOR IS A DYNAMIC ARRAY: it has not a fixed length. If you add more elements, the array changes its size
// What reallu happens it that if the array exceeds its size, Array allocates in the memory a new array 
// adding the new elements and then it deletes the old one array

struct Vertex{

	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){

	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main(){

	Vertex* vertices = new Vertex[5];
	// vertices[10] // Here we would have a problem!
	// DYNAMIC ARRAYS store the objects in the memory. in line, contiguously.

	std::vector<Vertex> v;
	// in the brackets < > I specified the type Vertex. In java you can't pass a primitive type there
	// but in C++, because vector is a C++, TEMPLATE you can pass a primitive type like int or char

	// What is better: a vector of pointers to Vertex objects or a vector of Vertex objects?
	std::vector<Vertex> v1; // vector of Vertex objects
	// This allocates vertex objects in a vector, in the stack. The memory allocation is contiguous.
	// It means that in the stack memeory the vector is composed by: vector[ Vertex1(x,y,z) Vertex2(x,y,z) Vertex3(x,y,z) ]
	// This countiguous memory allocation is good: in fact I can esily access the elements of vector because they are in sequence
	// but in case I need to exapnd the size of vector and so reallocating the memory in the stack, the wole vector needs to be copied in the memory
	// and this takes time
	std::vector<Vertex*> v2; // vector of pointers to Vertex objects
	// In this case I allocate Vertex objects in the Heap and I store pointers to those Vertex objects, in the vector.
	// In this case, to access the contents of the Vertex objects, takes a bit more time because they are not allocated contiguously in the memory
	// but if vector need to reallocate memory for a resize, the vector memory to reallocate is shorter because it contains just pointers

	return 0;
}