
#include <iostream>
#include <string>
#include <stdlib.h>


int main(){

	using namespace std::string_literals; // C++ 14

	const char* example = R"(Line1
	Line2,
Line3
	Line4)";

	std::cout << example << std::endl;

	const char* ex = "Line\n"
	"Line2\n"
	"Line3\n";

	std::cout << ex << std::endl;

	return 0;
}