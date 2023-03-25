
#include <iostream>
#include <string>

/*
Can we use the auto-distruction of stack variables as advantage?
In fact we can create scoped classes
Here we present a SCOPED POINTER (in the standard library is called UNIQUE POINTER and is a SMART POINTER)
In this example I allocaet and Enity object e1 in the HEAP and I want to delete it when 
e1 goes out of the scope
*/

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
	};

class ScopedPtr{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr) : m_Ptr(ptr) {

	}
	~ScopedPtr() {
		delete m_Ptr;
	}
}; 	

int main(){

	{
		// ScopedPtr e(new Entity()); // Alternative working way
		ScopedPtr e1 = new Entity(); // This will get destroyed when we go out of scope
		// e1 is a UNIQUE POINTER that is a type of SMART POINTER

		Entity* e2 = new Entity(); // This won't be destroyed when out of scope

		/*
			We can get advantage of the fact that a stack based variable goes out of scope 
			and gets destroyed. For example we can build timers to compute the time spent in that function
		*/

	}

}

