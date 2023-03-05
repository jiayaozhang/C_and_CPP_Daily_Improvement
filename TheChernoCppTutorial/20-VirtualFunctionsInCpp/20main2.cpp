
/*
	Virtual functions help override methods in subclasses
*/

#include <stdio.h>
#include <iostream>

class Entity {

    public:
    	std::string GetName(){return "Entity";}

};

class Player : public Entity {
    
 private:

 	std::string m_Name;

public:

	Player(const std::string& name) // Player Constructor
	: m_Name(name){}

	std::string GetName(){return m_Name;}

};

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

int main()
{

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    /*

    Here I should expect to get in the console "Entity" and "Cherno"
    instead I get "Entity" and "Entity".

    If we want to override a function you have to mark 
    the base function in the base class as virtual

    Virtual functions do something called Dynamic Dispatch which compiles a V table.
    A V table is a table that contains a mapping for all the virtual functions
    of our base class so that we can map them to the correct overwrite function at runtime.

    */

    std::cin.get();
}
