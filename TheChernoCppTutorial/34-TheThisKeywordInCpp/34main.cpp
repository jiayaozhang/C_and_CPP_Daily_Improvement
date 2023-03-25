/*
THIS keyword it's a pointer to the current instance
*/


#include <iostream>
#include <string>

class Entity{

public:

	int x, y;

	Entity(int x, int y) 
		// : x(x)m y(y); // I can do this
		{
			// x = x; // i can't do this

			Entity* e = this; // This is the type of this: a pointer to the current instance
			Entity* const e1 = this; // properly this is Entity* const type 
									// because we can't reassign this to something else.
									// I can't write this = nullptr;

			// Entity*& const e = this; // I can't do this
			Entity* const & e2 = this; // I need to declare like this. See 34note.cpp!!


			// I can do:
			this -> x = x; 
			this -> y = y;
			// (*this)x = x; // Equivalent writing
			// (*this)y = y; // Equivalent writing
	}

	int GetX() const{
		const Entity* e3 = this;
		// e3->x = 5.0f; // I can't do that

		// Entity* e4 = this; // this is not possible because GetX has const
		// e4->x = 5.0f; // it would be possible

	}

};

int main(){

	return 0;
}




