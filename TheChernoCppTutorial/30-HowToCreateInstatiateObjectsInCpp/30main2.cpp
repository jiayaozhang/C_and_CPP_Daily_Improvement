#include <iostream>
#include <string>

using String = std::string;

class Entity{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown"){}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const {return m_Name;}
};



int main(){

	/*
		STACK ususally is small: 1 or 2 MBytes depending on the compiler. 
		So if I have a very big class or I need to allocate many classes
		Is prefereable to do it in the HEAP
	*/

	Entity* e;

	{ // this is a SCOPE created by curly brackets

		Entity* entity = new Entity("Cherno"); // created in the HEAP
		/* the main dufference here is the NEW keyword that returns the memory address on the heap
		 where the new object Entity has been allocated: for this reason we use as type 
		 of entity, a pointer (Entity*)
		 In Java and in Csharp all the classes (almost everything) are allocated in the HEAP
		*/
		e = entity;
		std::cout << (*entity).GetName() << std::endl; 
		std::cout << e->GetName() << std::endl;

	}
	 /*
		WHY is better to allocate in the STACK than allocating in the HEAP?
		-PERFORMANCES: allocating in the HEAP takes longer
		-when you allocate in the HEAP then you have to free manually that memory you allocated
			and for doing that you need to use "delete": so every time you use "new"m you then may need to 
			use "detele" too
	 */
	

	/*
		SMART POINTERS can allocate in the HEAP and when their scope is reached the memory is freed automatically
	*/
}

