/* 

STRING LIERALS are a series of character between the double quotes

*/

#include <iostream>
#include <string>
#include <stdlib.h>


int main(){

	// "Cherno";
	 /* is a const char array of size 7
	but "Cherno" is 6 character but there is one extra character at the end of the string that is the 
	null termination character. We can otherwise explicitly write:
	"Cherno\0";
	"Cherno"; 0
	*/

	const char name[8] = "Che\0rno"; // The "\0" break the string
	std::cout << strlen(name) << std::endl; // It says length 3

	const char name1[8] = "Cherno\0"; // The "\0" break the string
	std::cout << strlen(name1) << std::endl; // It says length 6

	const char name2[8] = "Cherno"; // I define literal string NOT a pointer
	// name2[2] = 'a'; // Not allowed because I defined a const

	const char* name3 = "Cherno"; // I define literal string with a pointer
	// name3[2] = 'a'; /* Usually this is not possible because literal string are stored in read-only section of memory */

	char* name7 = (char*)"Cherno"; /* Some compilers will only let you create const char pointers
	like this const char*m if you just want to create a char pointer from a string literal ("Cherno")
	you need to cast manually like this.
	*/

	char name4[8] = "Cherno"; // I define literal string NOT a pointer
	name4[2] = 'a'; // I can do this because it's not a pointer.
	/* However literal strings are always written in the read-only memory so if I want to change like this 
	the content, the literal string is copied like a variable in the memory and changed
	*/
	std::cout << name4 << std::endl;


	return 0;
}