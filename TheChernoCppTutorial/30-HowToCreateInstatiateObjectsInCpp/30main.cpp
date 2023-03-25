#include <iostream>
#include <string>


/*

INSTANTIATE A CLASS means to create an object from that class
If the class is STATIC then I can't create an object from 

When I create an object there are only 2 choises that depend in which part of the memory 
I want to create that object: HEAP or STACk
Even if the class has no members the minimum space occupied is 1 Byte

STACK OBJECTS: the life of these objects depends on their SCOPE.
A SCOPE frame is allocated in the STACK, when the scope frame is terminatedm the stack frame is freed
and with it all its content.

HEAP OBJECTS: when you create an object in the heap it stays there until the program ends 
or until a command says to free that part of the memory.
*/

using String = std::string;

class Entity{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown"){}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const {return m_Name;}
};

void Function(){
	const Entity entityF = Entity("Cherno"); 
	// entityF is created in the STACK and when this function Function is terminated:
	// (the scope of Function ends)
	// then the stack frame associated to the scope is freed
	// and also entityF is deleted and its memory allocation freed
};

int main(){

	// The best thing to do is always create an object in the STACK
	Entity entity; // created in the STACK
	// This is a valid instance because we declared the empty constructor in Entity
	std::cout << entity.GetName() << std::endl;

	const Entity entityC;
	std::cout << entityC.GetName() << std::endl;

	Entity entity1 = Entity("Cherno");
	std::cout << entity1.GetName() << std::endl;

	Entity entity2("Cherno");
	std::cout << entity2.GetName() << std::endl;

	
}

