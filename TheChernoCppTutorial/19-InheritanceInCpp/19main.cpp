#include <stdio.h>
#include <iostream>

class Entity {

    public:
        float X, Y;

    void Move(float xa, float ya){

    	X += xa;
    	Y += ya;

    }

};

class Player : public Entity {
    /* 
    Now the Player class has the type Player and also the type Entity: so now Player is both of those types.

    ***POLYMORPHISM***: we can use Player whenever we want to use an Entity because Player has everything that Entity has.

    Also now Player has everything that Entity has too.
    */
public:

    const char* Name;

    void PrintName(){
        std::cout << Name << std::endl;
    }

};

class Person {
public:

    const char* Name;

    void PrintName(){
        std::cout << Name << std::endl;
    }

};

int main()
{

    std::cout << sizeof(Entity) << std::endl; // 8 Bites in 32 bit application
    std::cout << sizeof(Player) << std::endl; // 16 Bites in 32 bit application
    std::cout << sizeof(Person) << std::endl; // 8 Bites in 32 bit application

    Player player;
    player.Move(5,5);
    player.X = 2;

    std::cin.get();
}
