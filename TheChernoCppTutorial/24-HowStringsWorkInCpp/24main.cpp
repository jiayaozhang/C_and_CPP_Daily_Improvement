#include <iostream>
#include <string>

/*

A STRING is a group of characters. 
A CHARACETR, CHAR data typeis 1 byte of memory. 
In ASCII one character is coded with one byte

A String is an array of characters

*/


int main(){

	const char* name = "Cherno"; // String This is allocated in the Stack
	// because we didn't use the "new" wordm then we can't use delete to "delete" the string

	char* name2 = "Cherno"; // String

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;

/*
	STRING is a pointer and has a termination character that tells when the string terminates.
	The termination character is the null character
*/

	char name3[6] = {'C','h','e','r','n','o'};
	/* Characters are defined by single quotes '', 
	   if I write double quotes it becomes by default a char pointer, not a String
	   name3 is an array of characters with no termination character
	*/
	std::cout << name3 << std::endl;
	/* When I print name3 to the console I get Cherno and a bunch of charatcters that is the ASCII
	interpretation of whatever it is after Cherno
	*/

	/* We can add a termination character like this:
	*/

	char name4[6] = {'C','h','e','r','n','o', 0};
	char name4[6] = {'C','h','e','r','n','o', '\0'}; // '\0' = 'NULL' ASCII Character
	std::cout << name4 << std::endl;

	return 0;
}