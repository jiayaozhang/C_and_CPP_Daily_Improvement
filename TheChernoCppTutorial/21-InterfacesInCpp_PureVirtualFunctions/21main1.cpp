
#include <stdio.h>
#include <iostream>

class Printable { // This is an INTERFACE

public:
    virtual std::string GetClassName()=0;
};

class Entity : public Printable{

    public:
    	std::string GetClassName() override { return "Entity"; }

};

class Player : public Entity { 
    
 private:

 	std::string m_Name;

public:

	Player(const std::string& name) // Player Constructor
	: m_Name(name){}

	// std::string GetClassName() override {return m_Name;}
    /*
    If I don't declare GetClassName in Player, the counsole would print Entity instead
    */

};

void Print(Printable* obj){
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{

    Entity* e = new Entity();
    Print(e);

    Player* p = new Player("Cherno");
    Print(p);

    std::cin.get();
}
