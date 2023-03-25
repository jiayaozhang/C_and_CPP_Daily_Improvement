/*
EXPLICIT KEYWORD: is something that you put in fornt of a constructor
and does't allowe implicit conversion. It forces to explicitely call that constructor
*/


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
	explicit Entity(int age) : m_Name("Unknown"), m_Age(age){}

};

void PrintEntity(const Entity& entity){
	// Printing
};

int main(){

	// Entity a("Cherno"); // OR Entity a= Entity("Cherno");

	Entity a = "Cherno"; 
						
	// Entity b = 22; // Doesn't work anymore
	// PrintEntity(22); // Doesn't work anymore

	// Entity b(22); // It works
	// Entity b = Entity(22); // It works calling directly the constructor
	// Entity b = (Entity)22; // Works with casting


	return 0;
}


