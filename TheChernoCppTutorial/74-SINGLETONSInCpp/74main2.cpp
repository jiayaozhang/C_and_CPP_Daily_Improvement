/*
SINGLETON in C++

*/

#include <iostream>

class Random{ // we can't create a public constructor otherwise 
					// we can instatiate the class multiple times
public:

	Random(const Random&) = delete; // I detele the copy constructor so no new
											// instances can be created

	static Random& Get(){
		return s_Instance;
	}

	static float Float() { return Get().IFloat();}

private:

	float Float_Implementation() { return m_RandomGenerator;}

	Random(){}

	float m_RandomGenerator = 0.5f;

	static Random s_Instance;
};

Random Random::s_Instance; 

int main(){

	float number = Random::Float();

	std::cout << number << std::endl;

	retunr 0;


}