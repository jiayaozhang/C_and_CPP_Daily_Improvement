#include <iostream>
#include <string>

class Entity{
	private:
		int m_X;
		
	public:
		int GetX() { 
			return m_X;
		}

		void SetX(int x){
			m_X = x;
		}
};

void PrintEntity1(Entity& e){ // passing the object Entity: e is the same object I passed, not copied!
    std::cout << &e << std::endl; // printing the memory address of e
	std::cout << e.GetX() << std::endl;
};

void PrintEntity2(Entity e){ // copying the object Entity e: e is an object
    e.SetX(77);
    std::cout << &e << std::endl; // printing the memory address of e
	std::cout << e.GetX() << std::endl;
};

void PrintEntity3(Entity* e){ // passing the memory address of object Entity: e is a pointer
    std::cout << e << std::endl;
    std::cout << e->GetX() << std::endl;
    /*
    because e is a pointer (memory address)m to access to the method 
    of the obect pointed by e I need to use the "->" operator
    */
};

int main (){

	Entity e1, e2, e3;
	e1.SetX(11);e2.SetX(22);e3.SetX(33);
	
	PrintEntity1(e1);
	std::cout << "--------" << std::endl;
	
	PrintEntity1(e2);
	PrintEntity2(e2);
	PrintEntity1(e2);
	std::cout << "--------" << std::endl;
	
	PrintEntity3(&e3);

	return 0;
}