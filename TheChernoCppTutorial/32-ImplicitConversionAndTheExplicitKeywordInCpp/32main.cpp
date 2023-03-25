
#include <iostream>
#include <string>

using String = std::string;

class Entity{
private:
	String m_Name;
	int m_Age;
public:
	Entity(const String& name) // const because I don't want to change the content of name
								// name is passed as address because I don't want to copy ti into the function
	 : m_Name(name), m_Age(-1){}
	Entity(int age) : m_Name("Unknown"), m_Age(age){}

};

void PrintEntity(const Entity& entity){
	// Printing
};

int main(){

	// Entity a("Cherno"); // OR Entity a= Entity("Cherno");
	// Entity b(22);

	// This is an implicit conversion
	Entity a = String("Cherno"); //converts "Cherno" into an entity because Entity has a constructor 
						// that takes a string	
	Entity b = 22; // this converts 22 into an Entity

	PrintEntity(22); // I'm allowed to do thatm even if PrintEntity doesn't have contrauctor
					// that takes int. In this case it is allowed because Entity does

	// PrintEntity("Cherno"); // I can't do this because "Cherno" is not a string but a characters array

	PrintEntity(String("Cherno"));
	PrintEntity(Entity("Cherno"));

	return 0;
}


