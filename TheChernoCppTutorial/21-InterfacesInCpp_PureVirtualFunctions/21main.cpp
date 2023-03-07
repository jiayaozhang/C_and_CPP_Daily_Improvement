
/* 

PURE Virtual Fuctions: allows
us to define a function in a base class
that does not have an implementation and
then forces subclasses to actually
implement that function

INTERFACE: is a class that consists of un-implemented methods.
Because interfaces contains only un-implemented methods we can't instantiate
an interface class: we cannot create objects from it.

*/

#include <stdio.h>
#include <iostream>

class Entity {

    public:
    	virtual std::string GetName() = 0;
        /*
		I've no need to implement GetName in Entity but I do want 
		that the Entity subclasses implement the GetName method.
		"=0;" makes the method a pure virtual function

		pay attention that virtual shoul still be present!
		NOW Entity is an INTERFACE and we can't instantiate Entity
        */
};

class Player : public Entity {
    
 private:

 	std::string m_Name;

public:

	Player(const std::string& name) // Player Constructor
	: m_Name(name){}

	std::string GetName() override {return m_Name;}
	/* 
	Here I need to implement GetName otherwise I get an error.
	the pure virtual function forces me to implement the function in the subclass
	*/

};

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

int main()
{

    // Entity* e = new Entity();
    /* Now we can' instantiate Entity anymore because it contains 
    a pure virtual function, in this case Entity is an INTERFACE
    */
    // PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    std::cin.get();
}
