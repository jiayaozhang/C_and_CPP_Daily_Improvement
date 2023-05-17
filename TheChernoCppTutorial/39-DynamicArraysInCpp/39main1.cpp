/*
STANDARD TEMPLATE LIBRARY
*/

#include <iostream>
#include <string>
#include <vector> // VECTOR

struct Vertex{

	float x, y, z;
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex){

	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

void Function(const std::vector<Vertex>& vertices){
 	// I put const becasue in this case I don't want to modify the passed vertices
	// the vector vertices are passed by reference. In this way the vector is not copied into the function
}

int main(){

	std::vector<Vertex> vertices;

	vertices.push_back({1, 2, 3});
	vertices.push_back({4, 5, 6});

	for (int i = 0; i < vertices.size(); i++)
		std::cout << vertices[i] << std::endl;
		// Here the [] operator have been overloaded in vector, in Jva that operators overloading
		// is not possible we need to access as vertices.Get(i)

	// Alternative form for the for loop using iterators
	for (const Vertex v : vertices) // this is gonne copy each vertex in the scope of the for loop
		std::cout << v << std::endl; // I put const to not modify any object v in vertices

	// I want to erase a particular Vertex at specific index
	// I want ot erase the second element at index 1
	vertices.erase(vertices.begin()+1);

	// Alternative form for the for loop using iterators
	for (const Vertex& v : vertices) // this is not copying vertex in the scope of the for loop, because I'm passing the reference
		std::cout << v << std::endl;

	Function(vertices); // Make sure that you don't copy the vector when you pass it to a function

	vertices.clear(); // set the array size back to zero

	return 0;
}