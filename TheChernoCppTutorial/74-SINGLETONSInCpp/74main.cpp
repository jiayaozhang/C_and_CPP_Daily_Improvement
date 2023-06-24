/*
SINGLETONS in C++
it's not a language feaute but its more a design pattern.
It is a class or a struct that have just one instance, just one object from that class.
In JAVA you need to create a class every time and if you want a singleton you can use the
word "static".
In C++ you don't need to create a class every time, so if you want istantiate a class just one time, 
maybe you don't need a class.
An example of SINGLETON: a random number generator class.
In C++ a singleton is an organization of global variables with static functions that you could
use in your code. Singleton is just like a namespace.

7.32
*/

#include <iostream>

class Singleton{ // we can't create a public constructor otherwise 
					// we can instatiate the class multiple times
public:

	Singleton(const Singleton&) = delete; // I detele the copy constructor so no new
											// instances can be created

	static Singleton& Get(){
		return s_Instance;
	}

	void Function() {}

private:
	Singleton(){}

	float Singleton m_Member = 0.0f;

	static Singleton s_Instance;
};

Singleton Singleton::s_Instance; 

int main(){
	Singleton::Get().Function();

	Singleton instance& = Singleton::Get(); // In this way I don't create a new instance!!
	instance.Function();

	Singleton instance1 = Singleton::Get(); // In this way I create a new instance!!
	// To avoid this I can delete the copy constructor and I can no longer have new instances


}