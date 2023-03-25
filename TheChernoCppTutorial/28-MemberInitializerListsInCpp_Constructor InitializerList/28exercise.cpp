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
		Entity(std::string& name){

			name = "Ouch!"; 
			m_Name = name;

		}
		const std::string& GetName() const {

			return m_Name;
		}
};

int main (){

	std::string str2 = "Mary"; 
	const Entity e(str2);  

	std::string str = e.GetName();
	std::cout << str << std::endl;

	std::cout << str2 << std::endl;

	return 0;
}

