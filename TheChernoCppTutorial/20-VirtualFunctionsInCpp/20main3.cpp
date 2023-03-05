
/*
	Virtual functions help override methods in subclasses
*/

#include <stdio.h>
#include <iostream>

class Entity {

    public:
    	virtual std::string GetName(){return "Entity";}
        // I just added "virtual"
};

class Player : public Entity {
    
 private:

 	std::string m_Name;

public:

	Player(const std::string& name) // Player Constructor
	: m_Name(name){}

	std::string GetName() override {return m_Name;}
    /* 

        It' not mandatory but I can also specify that this function
        in Player overrides the one in Entity. 

        If virtual was not specified, but it was specified only override
        I would get an error in this case.

        If in the code I did an error like writing "Getname" instead of "GetName" in Player
        with override I would get an error because there was no function called "Getname" to override

    */
};

/*

Virtual functions are not freem they cost in runtime:
1-additional memory required for the V table allocation. 
2-Every time we call the virtual function we should go through the V table to get to the function
In the end Cherno didn't find it so costly and he uses them very frequently.

*/

void PrintName(Entity* entity){
    std::cout << entity->GetName() << std::endl;
}

int main()
{

    Entity* e = new Entity();
    PrintName(e);

    Player* p = new Player("Cherno");
    PrintName(p);

    std::cin.get();
}
