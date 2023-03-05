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

    e.Print();
    /*
    Here X and Y are not initialized, just their memory has been allocated. So when I print I can find whetever it was present in that memory cell.
    */

    return 0;
}