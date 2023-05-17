/*
ARROW OPERATOR in struct and classes
*/

#include <iostream>
#include <string>

class Entity{
public:
	int x;
public:
	void Print() const {
		std::cout << "Hello!" << std::endl;
	}

};

//Smart Pointer class that deletes entity when it goes out of scope
class ScopedPtr{
private:
	Entity* m_Obj;
public:
	ScopedPtr(Entity* entity)
	: m_Obj(entity){

	}

	~ScopedPtr(){
		delete m_Obj;
	}

	Entity* GetObject() { return m_Obj;}

	Entity* operator->(){ return m_Obj;}

	const Entity* operator->() const { return m_Obj;} // const operator

};

int main(){

	ScopedPtr entity = new Entity();
	entity.GetObject()->Print(); // I don't like to write code like this Id like to change

	// //Id like to have a code similar to:
	// Entity* entity = new Entity();
	// entity->Print();
	// // To get this I need to overload the -> operator

	entity->Print();

	// //Id like to have a code similar to:
	// const Entity* entity = new Entity(); // const pointer
	const ScopedPtr c_entity = new Entity();
	c_entity->Print(); // c_entity is const so it can use const methods and Print is a const method

	return 0;
}