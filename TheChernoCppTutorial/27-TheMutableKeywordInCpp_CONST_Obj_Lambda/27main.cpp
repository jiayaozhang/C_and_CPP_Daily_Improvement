#include <iostream>
#include <string>

/*
In Cpp exist the concept of mutable and immutable.
Mutable refers to constants and lambdas.
A mutable const can change
*/

class Entity{
	private:
		std::string m_Name;
		mutable int m_DebugCount = 0;
		/* 
		Class members marked as mutable, means that const methods inside that class
		can actually modify that member. 
		*/

	public:
		const std::string& GetName() const {
			/*
			Because in main I declared a const object, const object cans only access to const 
			methods. For this reason if I want to use the GetName method from a const object of
			the class Entity I've to put the second const in the method declaration
			The second const indicates that the method can't modify the class Entity members. 
			So it can't modify m_Name
			*/

			// m_Name = "Hi!"; // It is prohibited becuause of the second const
			m_DebugCount++; // I can change it here because it's mutable
			return m_Name;
		}
};

int main (){

	const Entity e; 
	/*
	 I defined a const object e and it can call only const methods, that don't change the 
	 class members (they have the second const in the declaration: const std::string& GetName() const)
	*/
	std::string str = e.GetName(); 

	return 0;
}