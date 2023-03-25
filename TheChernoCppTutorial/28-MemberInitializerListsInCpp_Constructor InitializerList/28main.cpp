/*
Initialize our class member funcitions in the Constructors
*/

#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name;

	public:
		Entity(){
			m_Name = "Unknown";
		}
		Entity(const std::string& name){
			/*
			 Here I'm passing the string name, I'm not copying it by passing it to the function
			Moreover I don't want to change the contents of name so I put const
			*/
			// name = "fuck"; // If I do this I change directly the string I pass.
			// But I can't do this because I put const in the constructor declaration.

			m_Name = name;

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