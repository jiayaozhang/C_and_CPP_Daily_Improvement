/*
Virtual Destructors in Cpp
*/

#include <iostream>

class Base{
public:
	Base() {std::cout << "B Constructor\n";}
	~Base() {std::cout << "B Destructor\n";}
};

class Derived : public Base {
private:
	int* m_Array;
public:
	Derived() {m_Array = new int[5]; std::cout << "D Constructor\n";}
	~Derived() {delete[] m_Array; std::cout << "D Destructor\n";}
};

class Base1{
public:
	Base1() {std::cout << "B1 Constructor\n";}
	virtual ~Base1() {std::cout << "B1 Destructor\n";} // I just added virtual
};

class Derived1 : public Base1 {
private:
	int* m_Array;
public:
	Derived1() {m_Array = new int[5]; std::cout << "D1 Constructor\n";}
	~Derived1() {delete[] m_Array; std::cout << "D1 Destructor\n";}
};

int main(){

	Base* base = new Base();
	delete base;

	std::cout << "--------------\n";

	Derived* derived = new Derived();
	delete derived;

	std::cout << "--------------\n";

	Base* poly = new Derived(); // case of Polymorphism
	delete poly;
	// In this case the Derived Destructor is not called!! 
	// This can cause memory leak: we never deleted "m_Array"

	std::cout << "--------------\n";

	Base1* poly1 = new Derived1(); // case of Polymorphism
	delete poly1;
	// In this case the Derived Destructor is called!! 
	// we also deleted "m_Array"

	return 0;
}