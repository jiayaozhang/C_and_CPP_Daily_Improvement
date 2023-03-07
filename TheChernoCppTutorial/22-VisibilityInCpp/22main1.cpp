
#include <stdio.h>
#include <iostream>

class Entity {
protected:      // <<-- I did a change here
/* 
    If I put "public" there instead of protected, then all the variables would be public
*/
	int X, Y;

	void Print(){};

public:
    Entity(){
    	X = 0; // I can have access to X here, it's fine
    	Print(); // I can call Print here, it's fine
    }

};

class Player : public Entity {

public:
	Player(){
		X = 2; // I can access X here
		Print(); // I can call Print here
	}
};

int main()
{

    Entity e;
    e.X=2; // I can't access X here, because X is protected
    e.Print(); // I can't call Print here, because Print is protected

    // std::cin.get();

    return 0;
}
