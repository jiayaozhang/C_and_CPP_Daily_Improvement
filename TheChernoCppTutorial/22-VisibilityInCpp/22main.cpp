/* VISIBILITY has no effects on code performance
is just code organization.

There are 3 types of VISIBILITY MODIFIERS in C++
PRIVATE, PROTECTED, PUBLIC

the defaul visibility for struct is: public
the defaul visibility for a class is: private

*/

#include <stdio.h>
#include <iostream>

class Entity {
private:
	int X, Y;

	void Print(){};

	/* 
	Private variables can be set by public function that I can implement
	just to modify the X value. I nthis case I would use GETTERS and SETTERS.
	However if they are private they can't be accessed
	directly from outside the class.
	*/

public:
    Entity(){
    	X = 0; // I can have access to X here, it's fine
    	Print(); // I can call Print here, it's fine
    }

};

class Player : public Entity {

public:
	Player(){
		X = 2; // I can't access X here, only Entity class or friends can
		Print(); // I can call Print here, only Entity class or friends can
	}
};

int main()
{

    Entity e;
    e.X=2; // I can't access X here, because X is private
    e.Print(); // I can't call Print here, because Print is private

    // std::cin.get();

    return 0;
}
