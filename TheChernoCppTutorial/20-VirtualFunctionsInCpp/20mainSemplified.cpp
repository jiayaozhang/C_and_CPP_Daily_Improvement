#include <stdio.h>
#include <iostream>
using namespace std; 

class Entity {

    public:
    	string GetName(){return "Entity";}

};

class Player : public Entity {
    
private:

 	string m_Name;

public:

	Player(const string& name): // Player Constructor
	m_Name(name){}

	string GetName(){return m_Name;}

};

int main()
{

    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player* p = new Player("Cherno");
    std::cout << p->GetName() << std::endl;

    return 0;
}