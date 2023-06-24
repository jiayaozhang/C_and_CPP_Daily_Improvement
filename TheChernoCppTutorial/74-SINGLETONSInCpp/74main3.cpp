/*
SINGLETON in C++

*/

#include <iostream>

class Random{ // we can't create a public constructor otherwise 
					// we can instatiate the class multiple times
public:

	Random(const Random&) = delete; // I detele the copy constructor so no new
											// instances can be created

	static Random& Get(){ // this is the core of the SINGLETON

		static Random instance;
		return s_Instance;
	}

	static float Float() { return Get().IFloat();}

private:

	float Float_Implementation() { return m_RandomGenerator;}

	Random(){}

	float m_RandomGenerator = 0.5f;

};

// I can also create a namespace instead of a singleton
namespace RandomClass {
	static float s_RandomGenerator = 0.5f;

	static float Float() {return s_RandomGenerator;}
}

int main(){

	float number = Random::Float();
	std::cout << number << std::endl;

	float number1 = RandomClass::Float();
	std::cout << number1 << std::endl;

	retunr 0;


}