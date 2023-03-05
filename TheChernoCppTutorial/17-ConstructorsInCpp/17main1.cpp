#include <iostream>

class Entity{

    public:
        float X, Y;

    void Print(){
        std::cout << X << ", " << Y << std::endl; 
    }

};

int main()
{
    Entity e;
    std::cout << e.X << std::endl;
    /* 
    Here I get an error message because the X in e has not been initialized
    */
    e.Print();

    return 0;
}