
#include <iostream>
#include <string>
#include <stdlib.h>


int main(){

	using namespace std::string_literals; / C++ 14

	std::string name0 = std::string("Cherno") + " Hello" ;
	std::cout << name0 << std::endl;

	std::string name1 = "Cherno"s + " Hello" ;
	std::cout << name1 << std::endl;

	std::string name2 = u8"Cherno"s + u8" Hello" ;
	std::cout << name2 << std::endl;

	std::wstring name3 = L"Cherno"s + L" Hello" ;
	std::cout << name3 << std::endl;

	std::u32string name4 = U"Cherno"s + U" Hello" ;
	std::cout << name4 << std::endl;


	return 0;
}