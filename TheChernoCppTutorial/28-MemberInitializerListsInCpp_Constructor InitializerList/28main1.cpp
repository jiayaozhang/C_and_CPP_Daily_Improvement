#include <iostream>
#include <string>

/*
This code does the same thing the previous code did, but we implemented the 
CONSTRUCTORS INITIALIZER LISTS
*/

class Entity{
	private:
		std::string m_Name;
		int m_Sore;

	public:
		Entity()
			: m_Name("Unknown"), m_Sore(0) // MEMBER INITIALIZER LIST
			/*
			This is the initializer list and the orther you initialize theclass memebers is important
			If you don't initialize them as they are defined you'll get a dependency problem
			*/
		{
		}
		Entity(const std::string& name)
			: m_Name(name)
		{
		}
		const std::string& GetName() const {

			return m_Name;
		}
};

int main (){

	const Entity e1;  
	std::string str = e1.GetName();

	std::string str0 = "Mary"; 
	const Entity e2(str0);  
	std::string str1 = e2.GetName();
	std::cout << str1 << std::endl;

	return 0;
}