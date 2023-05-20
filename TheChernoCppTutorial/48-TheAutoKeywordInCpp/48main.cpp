/*
AUTO KEYWORD

when the return types are known because the variables have already been declared,
instead of specify them, it is possible to use "auto" 

*/ 

#include <iostream>
#include <string>

int main(){

	auto a = 5; // int
	auto a1 = 5L; // long
	auto a2 = 5.0f; // float
	auto a3 = "Cherno"; 
	auto a4 = 'a';

	int b = 3;

	auto c = b;

	return 0;
}