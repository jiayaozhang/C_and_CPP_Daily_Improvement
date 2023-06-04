/*
Multiple TYPES of Data in a SINGLE VARIABLE in C++?
It's a C++ 17 new class: std::variant 

We can use variant also to open a file and see if the reading was successfull
or we couldn't opend the file
*/

#include <iostream>
#include <variant>

enum class ErrorCode{
	None = 0, NotFound =1, NoAccess = 2
};

std::variant<std::string, ErrorCode> ReadFileAsString(){
	return {};
	// In this way we can return different values and be more specific about the error
	// With optional instead we could only return a boolean if it worked or not.
};

int main(){

	return 0;
}