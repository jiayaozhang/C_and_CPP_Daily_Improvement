/*
SMART POINTER
Here we need to allocate objects in the HEAP memory
new allocates memory in the HEAP and delete frees that memory
smart pointers makes new and delete automatic
*/

/* 
A SMART POINTER is a SCOPE pointer: when the pointer goes out of scope it is deleted
when a smart pointer is created, it calls new and when it is deleted it calls delete.

UNIQUE POITNERS are pointers are unique smart pointers: it means that you can create
only one pointer to that memory allocation and when you destroy it, that memory is freed. You can't copy unique pointers.
You usually use unique pointers when you want scope pointers 
*/


#include <iostream>
#include <string>
#include <memory> // this is to use smart pointers

class Entity{ 
	private:
		int x; 
	public:
		Entity(){ 
			std::cout<<"Created Entity!"<<std::endl;
		}
		~Entity(){ 
			std::cout<<"Destructed Entity!"<<std::endl;
		}	
		void Print() {}	
	};


int main(){

	{ // empty scope
		std::unique_ptr<Entity> entity(new Entity());
		// I can't use implicit construction like this std::unique_ptr<Entity> enitity = new Entity();
		// because in the definition of unique_ptr, the constructor is explicit, meaning you need to call the constructor directly, 
		// there is no implicit conversion or converting constructor

		// This is the way you access unique pointers
		entity->Print();

		//The preferred constructin of a unique pointer would be 
		std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();
		// the reason is that we do this for EXCEPTION SAFETY
		entity1->Print();
		// when the scope ends, both entity and entity1 are destroyed

		// std::unique_ptr<Entity> e0 = entity1; // I can't do this because I can't copy unique pointers
		// In factthe copy constructor and the copy operator of unique are delete


	}

}


