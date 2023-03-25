#include <iostream>
#include <string>

class Entity{
	private:
		int m_X, m_Y;
		
	public:
		int GetX() const { 
			return m_X;
		}

		void SetX(int x){
			m_X = x;
		}
};

void PrintEntity1(const Entity& e){ /* 
									I don't want to copy the Entity class in PrintEntity, 
									I just want to pass its reference to PrintEntity class. 
									In this way I'm getting the object e
									*/

	// e = Entity(); // Because of "const" I can't modify the content of e
	std::cout << e.GetX() << std::endl;
};

void PrintEntity2(const Entity* e){ /* I don't want to copy the Entity class in PrintEntity, 
									I just want to pass its reference to PrintEntity class.
									In this way I'm getting the pointer of e: the momory address of e 
									*/
	e = nullptr; // I can do this, I can change the pointer
	std::cout << e << std::endl;

};

class EntityA{
	private:
		int m_X, m_Y;
		
	public:
		int GetX() { 	// I removed const here
			m_X = 2;    // I added this line where I modify m_X (without const I can now!)
			return m_X;
		}

		void SetX(int x){
			m_X = x;
		}
};

void PrintEntityA1(const EntityA& e){ /* I don't want to copy the Entity class in PrintEntity, 
									I just want to pass its reference to PrintEntity class */

	// std::cout << e.GetX() << std::endl; 
	/* 
	Because in EntityA I deleted const in GetX
	I can't use e.GetX() because I've no garantee that 
	GetX doesn't modify the content of e
	*/

	/* 
	If I have const in the method input I can only call const functions.
	For this reason sometimes in the class I've the declaration of 2 identical methods: one with const
	and another without constm so to be able to use the same class as I want with const or no cosnst methods
	See PrintEntityB! 
	*/
};

class EntityB{
	private:
		int m_X, m_Y;
		
	public:
		int GetX() const { 
			/*
			Remember always mark a method as const if it is not supposed to modify a class
			*/
			return m_X;
		}
		int GetX() { 
			m_X = 5;
			return m_X;
		}

};

void PrintEntityB1(const EntityB& e){ 

	std::cout << e.GetX() << std::endl;
};

void PrintEntityB2(EntityB& e){ 

	std::cout << e.GetX() << std::endl;
};

int main (){

	Entity e1, e2;
	EntityA eA;
	EntityB eB1, eB2;

	e1.SetX(16);
	PrintEntity1(e1); /*
						 I pass e1 directly without copying it into the method
					     In this way, if I want I can change directly e1
					  */
	PrintEntity2(&e2); // I pass the memory address of e2

std::cout << "------------" << std::endl;

	PrintEntityB1(eB1);
	PrintEntityB2(eB2);

	return 0;
}