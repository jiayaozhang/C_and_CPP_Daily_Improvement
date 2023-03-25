#include <iostream>
#include <string>

/* PASSING Strings to other functions

*/

void PrintString(std::string string){

	/* 
	In this case whan I pass a string to this function
	I'n creating a copy of the string in this function
	so I'm allocating other memory in the HEAP
	*/

	string += " hello!"; // This would not effect name that is the string that I passed to this function

	std::cout << string << std::endl;
}

void PrintString2(const std::string& string){

	/* 
	In this case I pass a reference to the string
	I put const because I promised to not modify the string
	*/

	string += " hello!"; // I can't do this because I put const

	std::cout << string << std::endl;
}

int main(){

	std::string name = "Cherno";

	PrintString(name);
	std::cout << name << std::endl; // we need to include #include <string> to rpint string in cout
	
	PrintString2(name);
	std::cout << name << std::endl; 

	return 0;
} 
