/*
THIS keyword it's a pointer to the current instance
*/

#include <iostream>
#include <string>

class Entity;
void PrintEntity(Entity* e);// I need to declare it here if I want to use it in Entity
void PrintEntity2(const Entity& e);// constant reference

class Entity{
public:
	int x, y;

	Entity(int x, int y) 		{

			this -> x = x; 
			this -> y = y;
			PrintEntity(this);
			// this passes the current instance with the new parameters set in the constrctor
			PrintEntity2(*this); // dereferencing this

			// In a non const method we'll get an entity reference back like so
			Entity& e = *this;

			// this is a pointer to the current class and we can use
			delete this ;// this frees memory of a member function
			//So after this I can't call that member function anymore
	}

	int GetX() const{
		// In a const method we'll get an entity reference back like so
			const Entity& e = *this;
	}
};

void PrintEntity(Entity* e){}
void PrintEntity2(const Entity& e){}


int main(){
	return 0;
}




