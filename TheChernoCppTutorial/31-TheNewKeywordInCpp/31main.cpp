/*
NEW finds a block of memory, in the HEAP specifically, that accomodates our need 
and then it returns a pointer to that memory address

int is 4 Bytes
when you use new int, the program looks for a CONTIGUOUS 4 Bytes memory space in the HEAP
to allocate the int variable and then it returns a pointer of the memory address

New takes time to perform all of thism is not so performant
*/

#include <iostream>
#include <string>

using String = std::string;

class Entity{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown"){}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const {return m_Name;}
};


int main(){

	int a = 2; // 4 Bytes of memeory

	int* b = new int; // pointer to 4 Bytes of memeory address
	delete b;

	int* array = new int[50]; // 200 Bytes of memeory
	delete[] array;

	Entity* e = new Entity;	
	Entity* e1 = new Entity(); // new allocates memory and also calls the constructor

	Entity* e3 = new Entity[50]; // array of Entity: 
								// new allocated 50 Entity in a row, contiguously in the memeory		

	/*
	NEW is an operator like + or - and is possible to overload an operator

	if I see the new declarationm new is an operator that takes in input the size of the object,
	allocates memory and return a void pointer
	*/

	Entity* e4 = new Entity();
	Entity* e5 = (Entity*)malloc(sizeof(Entity));
	/*
		These two are equivalent wrtitings, but new in addition also calls the Entity constructor
	*/

	// When you use the new keyword you also need to use delete
	delete e;
	// delete is an operator that take in input the memory size and frees the memory
	free(e);

	delete[] array; // I need to use [] after delete if I'm deleting arrays

	/* PLACEMENT NEW
		I can choose where new can allocate memry
	*/
	int* b = new int[50];
	Entity* e4 = new(b) Entity(); // This works because Entity is less tha 200 Bytes (size of b)


	return 0;
}


