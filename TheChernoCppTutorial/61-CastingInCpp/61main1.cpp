/*
CASTING in Cpp
CAST C++ Style
*/

#include <iostream>

class Base{
public:
	Base() {}
	virtual ~Base() {}
};

class Derived : public Base {
public:
	Derived() {}
	virtual ~Derived() {}
};

class AnotherClass : public Base {
public:
	AnotherClass() {}
	virtual ~AnotherClass() {}
};

int main (){

	double value = 5.25;
	double a = (int)value + 5.3;

	// double s = static_cast<AnotherClass*>(&value) + 5.1;
	// this does not work because the conversion of these dufferent types is not compatible
	// sto the C++ static cast warns us.
	AnotherClass* s1 = reinterpret_cast<AnotherClass*>(&value); // This instead is possible


	Derived* derived = new Derived();

	Base* base = derived;
	// we know that Derived is an extention of Base class

	AnotherClass* ac0 = dynamic_cast<AnotherClass*>(base);
	if (ac0)
		std::cout << "Success0\n";
	else
		std::cout << "Not-Success0\n";
	// NOT Successful because base is not an instance of AnotherClass
	// Dynamic cast will do runtime checking

	AnotherClass* ac1 = static_cast<AnotherClass*>(base);
	if (ac1)
		std::cout << "Success1\n";
	else
		std::cout << "Not-Success1\n";
	// Successful but then I'll have a memory conflict because 
	// base is not an instance of AnotherClass

	Derived* ac2 = dynamic_cast<Derived*>(base);
	if (ac2)
		std::cout << "Success2\n";
	else
		std::cout << "Not-Success2\n";
	// Successful

	// const_cast is mostly to add or remove const

	// reinterpret_cast is to use that pointer memory to do something else.
	// reinterpret_cast does what type puning does

	return 0;
}