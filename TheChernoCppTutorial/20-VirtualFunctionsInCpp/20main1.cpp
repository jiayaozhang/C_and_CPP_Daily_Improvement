
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

int main()
{

    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    Entity* entity = p;
    std::cout << entity->GetName() << std::endl;

    /* Prblems come when we use POLYMORPHISM
    entity in this case should be a player and we should get Cherno as name 
    instead we get Entity in the console
    */

    std::cin.get();
}
