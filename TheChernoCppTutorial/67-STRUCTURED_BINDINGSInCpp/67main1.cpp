/*
STRUCTURED BINDINGS
this feature is in C++ 17.
In Visual Studio go to Project Properties/Language/C++ Language Standard/C++ 17 
*/

// How it is with STRUCTURED BINDINGS:

#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string, int> CreatePerson(){ // I could also use pair insead of tuple

	return {"Cherno", 24}; 
}

int main(){

	auto[name, age] = CreatePerson(); //STRUCTURED BINDINGS

	std::cout << name;

	return 0;
}
