/* 
STACK MEMORY 
stack is a memory sector were object are in a stack (pile), [like a pile of books] 
so to have access to some of them at the bottom, you need to access
those who are at the top first.
Every scope opens a stack frame, and a stack frame is like a book in the pile.
Every variable in the scope is like writing the book.
When the scope ends is like to take that book off of the library
*/

#include <iostream>
#include <string>

class Entity{ // this is the class Entity scope allocated in the Stack
	private:
		int x; // this variable is also allocated in the stack frame of the Entity class
		// when the Entity class dies also the variable x dies
	public:
		Entity(){ //Constructor
			std::cout<<"Created Entity!"<<std::endl;
		}
		~Entity(){ //Destructor
			std::cout<<"Destructed Entity!"<<std::endl;
		}		
	};

int main(){

	if (true) {
		// this is the if-SCOPE
	}
	
	{
		//this is a void 

		Entity e; // I created e in the stack

		Entity* e1 = new Entity(); 
		// I create it on the HEAP and when the scope ends, the Entity is not destroyed yet.
		// it will be destroyed when the program ends.

	}
	// when I'm out of the scope I see that the destructor mesasge of the stack Entity appears

}

