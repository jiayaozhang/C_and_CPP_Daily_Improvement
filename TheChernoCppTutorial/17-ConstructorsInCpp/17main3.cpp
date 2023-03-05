#include <iostream>

class Entity{

    public:
        float X, Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
    }
/*
The constructor is aparticular method that it gets called every time you construct an object. It doesn't have a return type and its name must match the name of the class. So I don't need the Init method anymore.
If you don't specify a constructor C does it for you, it creates a default constructor but this defaul constructor is equivalent to
    Entity(){} 
it does nothing.
In languages like Java primitive types like int or float are automatically initialized to 0, but this is not the case of C++; otherwise they will be set to whatever it was set in that memory.
*/
    void Print(){
        std::cout << X << ", " << Y << std::endl; 
    }
};

int main()
{
    Entity e;
    std::cout << e.X << std::endl;
    e.Print();

    return 0;
}