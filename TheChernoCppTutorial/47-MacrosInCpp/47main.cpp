/*
MACROS

before compiling a preprocessor evaluates all the lines that start with "#" and then the code
is passed to the compiler. The preprocessor performs a sort of text editing. The preprocessor
copies all the include of header.h and past then in the code for the compiler to compile the program.
So we can use macros to tell the preprocessor what to pass to the compiler. A MACRO can be for example
a search and replace with arguments and parameters.

What is the difference between MACROS and TEMPLATES?
Templates are evaluated during the compilation.
Macro is a text editing performed before teh compilation.

*/

#include <iostream>
#include <string>

#define WAIT std::cin.get()
// Im saying that during the pre-processing the pre-processor have to replace the word
 // "WAIT" with "std::cin.get()" 

#define LOG(x) std::cout << x << std::endl

int main(){

	LOG("Hello");

	WAIT; // I didn't put the semicolon in the dfinition of WAIT so I'm putting it here 
}