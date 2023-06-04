/*
STRUCTURED BINDINGS this feature is in C++ 17
(see previous video about how to return multiple values in Cpp)
*/

// How it was before:

#include <iostream>
#include <tuple>
#include <string>

std::tuple<std::string, int> CreatePerson(){ // I could also use pair insead of tuple

	return {"Cherno", 24}; 
}

struct Person{
	std::string name = "Cherno";
	int age = 24;
};

int main(){

	auto person = CreatePerson();
	std::string& name = std::get<0>(person);
	int age = std::get<1>(person);

	// Alternative solution
	std::string name1;
	int age1;
	std::tie(name1, age1) = CreatePerson();

	// Alternative solution
	Person person2;
	int age2 = person2.age;
	std::string& name2 = person2.name;


	return 0;
}
