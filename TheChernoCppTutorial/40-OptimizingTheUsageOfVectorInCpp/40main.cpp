/*
OPTIMIZATION with DYNAMIC ARRAYS
if you push an object into a vector and the vector reaches its maximum size,
then the vector needs to be reallocated in memory to contain the new element you are pushing.
A vector allocates objects in a contiguous way: all the elements of the vector are in line in the memory
Reallocating a vector means to give another memory address to the vector and
also to copy that vector in another position in the memory and 
free the memory that the old vector occupied.
Continuosly reallocating memory slows down the program.
If we store a vector of objects how can we avoid copying object for reallocation?
We need to know when copying is happening and why is happening.
*/

#include <iostream>
#include <string>
#include <vector> // VECTOR

struct Vertex{
	float x, y, z;

	Vertex(float x, float y, float z) //First constructor
	: x(x), y(y), z(z) {}

	Vertex() //Second constructor
	: x(0.0f), y(0.0f), z(0.0f) {
		std::cout << "Void constructor used!" << std::endl;}

	// Declaring a Copy constructor of Vertex
	Vertex(const Vertex& vertex)
	: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main(){

	std::vector<Vertex> vertices;

	vertices.push_back(Vertex(1, 2, 3)); // Creates 1 copy (Problem1)
	vertices.push_back(Vertex(4, 5, 6)); // Creates 1 copy(Prb1) + 1 copy (Problem2)
	vertices.push_back(Vertex(7, 8, 9)); // Creates 1 copy(Prb1) + 2 copies(Prb2)
	// The console prints 6 times "Copied!", so 6 copies of the object Vertex are created 

	/*
		Here we have 2 optimizations to perform. In fact the problems are 2:
		1)when I push back a Vertex object, at first the Vertex object is created in the stack memory of main
		and then it is copyed in the vector vertices. This process already creates a copy for every pushed back object.
		2)every time a vector is created, its maximum size is 1. So when I push a second object
		the vector need to be resized and reallocated copying its content. At every push back hte vector size
		increases by one and every new elements reallocate the vector and copies it content in the new memory.
	*/

	std::vector<Vertex> vertices2;
	vertices2.reserve(3); // we set the size of vertices2 of 3 Vertex objects
	// std::vector<Vertex> vertices2(3); // doing this instead creates actually 3 Vertex objects
										// because it calls the Vertex constructor
	vertices2.emplace_back(1, 2, 3); // instead of passing a Vertex object to push
	vertices2.emplace_back(4, 5, 6); // we pass the parameters for the Vertex constructor
	vertices2.emplace_back(7, 8, 9); // in this way the Vertex objects are directly constructed in the vector

	return 0;
}