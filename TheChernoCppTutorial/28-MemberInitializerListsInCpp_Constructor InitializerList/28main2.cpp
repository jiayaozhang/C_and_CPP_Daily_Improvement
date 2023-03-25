#include <iostream>
#include <string>

class Example{
	public:
		Example(){
			std::cout << "Created Entity!" << std::endl;
		}
		Example(int x){
			std::cout << "Created Entity with " << x << "!" << std::endl;
		}

};

class Entity{
	private:
		std::string m_Name;
		Example m_Example;

	public:
		Entity()
			// : m_Name("Unknown"), m_Example(8) // or m_Example(Example(8))
		/* The above method allows not to duplicate class members objects
		*/
		{
			m_Name = std::string ("Unknown");
			m_Example = Example(8);
			/* In this normal way to initialize members in a class, we created two Example objects
			the first one when we declared it in private and the second one when we assigned it to m_Example
			In particular the second object Example override the first one
			In fact you can see that in the terminal I've two print lines of the class Example
			*/
		}
		Entity(const std::string& name, const int& number)
			: m_Name(name), m_Example(number)
			/* Using constructor Initializer lists, theclass members are created just one time 
			and they are not replicated
			*/
		{
		}
		const std::string& GetName() const {

			return m_Name;
		}
};

/*
	I should be using CLASS MEMBERS INITIALIZER LISTS everywherem always to improve performances
	It's not only a stylistic reason but only a functional reason.
	NB: primitive types members like integers, are not duplicated if I don't use memebers initializer lists
	the only types that are duplicated are class objects.
*/

int main (){

	const Entity e1; 
	std::cout << "------------" << std::endl;
	const Entity e2("Mary",9); 

	return 0;
}