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

	
	Entity* e; // e its a variable that points to an entity object

	{ // this is a SCOPE created by curly brackets
		Entity entity("Cherno"); // created in the STACK
		e = &entity; // I assign e to the memory address of entity
		std::cout << entity.GetName() << std::endl;
		std::cout << e->GetName() << std::endl;
	}
	// Out of the SCOPE (curly brackets) entity doesn't exist anymore and its memeory allocation
	// is freedm so e doesn't point to entity anymore
	
	std::cout << e->GetName() << std::endl;
	// std::cout << entity.GetName() << std::endl; // I get an error: entity was not declared in this scope

}

