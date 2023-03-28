/*
SHARED  work with reference counting: it keeps track 
of how many references you have to your pointer and when that reference get to 0, then the 
pointer gets deleted.

See Notes 66, on the Video BenchMarking to see the difference 
in performance, between shared and unique pointers.

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
	{
		std::shared_ptr<Entity> e0;
		{ 
			// Not suggested to use this
			// std::shared_ptr<Entity> sharedEntity(new Entity());
			// sharedEntity->Print();

			/* This form is preferable. Shered pointers have to allocate another block of memory called 
			 CONTROL BLOCK where it store the reference counter. If you create a new Entity 
			 and then you pass it into the shared pointer constructor you perform two allocations: the Entity and the control block
			 Instead, if you use make_shared you allocate Entity and control block together and this is more efficient
			 Then std::make_shared get ridd off of the use of new 
			*/
			std::shared_ptr<Entity> sharedEntity1 = std::make_shared<Entity>();
			sharedEntity1->Print();

			e0 = sharedEntity1;

		}
		// You will see that sharedEntity gets distroyed when this scope ends and not the inner scope.
	}
}


