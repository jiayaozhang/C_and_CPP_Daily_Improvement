
/* 
	The destructor get called when you destroy an object.
	It applies to the heap and to the stack

*/


#include <stdio.h>
#include <iostream>

class Entity{

    public:
        float X, Y;

    Entity(){

    	X = 0.0f;
    	Y = 0.0f;
        std::cout << "Created Entity! " << std::endl;
    }

	~Entity(){ /* DESTRUCTOR */
        std::cout << "Destroyed Entity! " << std::endl;
    }

    void Print(){
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function(){

	Entity e;
    e.Print();
    e.~Entity();

    /*
    	The object is created in the function and it get automatically
    	deleted when it exits the scope
    */
}

int main()
{
    Function();
    std::cin.get();
}
