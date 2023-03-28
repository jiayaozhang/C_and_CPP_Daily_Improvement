/*
WEAK POINTER
*/

#include <iostream>
#include <string>
#include <memory> 

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
	{
		std::weak_ptr<Entity> e0;
		{ 

			std::shared_ptr<Entity> sharedEntity1 = std::make_shared<Entity>();
			
			std::weak_ptr<Entity> weakEntity = sharedEntity1;
			// the weak pointer copies the smart shared pointer sharedEntity,
			// but doesn't increase the reference counter

			sharedEntity1->Print();

			e0 = sharedEntity1;

			// In this case sharedEntity is destroyed in this inner scope and not in the first outer
			// because the reference counter of sharedEntity gets at 0 here, in this scope.
		}

		// here e0 is pointing to an invalid.
		// Anyway you can ask to smart pointers if they are VALID or they are expired
	}
}

// +++ The use of unique pointers is better than shared pointers because they have less overhead.+++

