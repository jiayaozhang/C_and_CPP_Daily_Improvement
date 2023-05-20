/*
AUTO KEYWORD

when the return types are known because the variables have already been declared,
instead of specify them, it is possible to use "auto" 

*/ 

#include <iostream>
#include <string>

std::string Getname(){ 
	return "Cherno";
}

char* Getname2(){
// auto Getname() { //alternative with auto
// auto Getname() -> char* { //alternative with auto and trailing return types
	return "Cherno";
}

int main(){

	std::string name = Getname();

	auto name1 = Getname();
	int size = name1.size();

	auto name2 = Getname2(); // I changed the retun type but nothing changed in the code because I'm using auto
	// int size2 = name2.size(); // but I can't use this anymore because ".size()" belongs to string 

	return 0;
}