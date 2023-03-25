// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName(){
			m_Name = "Hi!";
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName(){
			m_Name = "Hi!";
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName() const{
			// m_Name = "Hi!"; // I can't this because of const
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName() const {
			// m_Name = "Hi!"; 
			return m_Name;
		}
};

int main (){

	Entity e;
	std::string str = e.GetName();
	str = "Bye";
	std::cout<< "---Starting Program---" << std::endl;
	std::cout<< str << std::endl;

	return 0;
}

// --------------------------------------------
// --------------------------------------------
// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string& GetName() { //GetName is not a constant method
			m_Name = "Hi!"; 
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // DOES NOT WORK
	/*
		const class objects can only explicitly call const member functions
	*/
	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName() { //GetName is not a constant method
			m_Name = "Hi!"; 
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // DOES NOT WORK
	/*
		const class objects can only explicitly call const member functions
	*/
	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		std::string GetName() const { //GetName is a constant method. This const makes a method constant!
			// m_Name = "Hi!"; // Because it's a const method I can't change the class variable
			return m_Name; 
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // WORKS
	/*
		const class objects can only explicitly call const member functions
	*/
	std::cout<< str << std::endl;
	return 0;
}

// --------------------------------------------
#include <iostream>
#include <string>

class Entity{
	private:
		std::string m_Name = "Hello!";
	public:
		const std::string& GetName() const { //GetName is a constant method
		// const std::string GetName() const { //GetName is a constant method // It works also without &
			// m_Name = "Hi!"; // Because it's a const method I can't change the class variable
			return m_Name;
		}
};

int main (){

	const Entity e;
	std::string str = e.GetName(); // WORKS
	/*
		const class objects can only explicitly call const member functions
	*/
	std::cout<< str << std::endl;
	return 0;
}

