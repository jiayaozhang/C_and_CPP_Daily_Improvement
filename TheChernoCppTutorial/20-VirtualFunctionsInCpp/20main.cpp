
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

    std::cin.get();
}

 /* 
 Since strings is not a primitive type of C++ we need to import the header: #include <string>
To use string without namespace std is like this: std::string MyString("hello")
This is equivalent to: std::string MyString = "Hello"

Pointer instances:
new keyword returns a pointer
std::string* MyString = new std::string("Hello")
And if it is a pointer, you access their properties with -> instead of a dot (.)
   std::cout << MyString->length() << std::endl;


In the constructor of the player class, he uses a constant string "name", 
which he passes by reference (first, I don't understand why this has to be a constant or a reference) 
and then he goes on to add the colon and m_name(name). 

I think I have seen in some other tutorial series that this is the way to load a value into a constant but I am not sure now.

EXAMPLE CODE:

#include <iostream>

struct has_const_member
{
    const int x;

    has_const_member(int x_)
      : x(x_)
    { }

};

int main()
{
    int foo = 0;
    std::cin >> foo;
    has_const_member h(foo);
    std::cout << h.x << "\n";
    return 0;
}

*/
