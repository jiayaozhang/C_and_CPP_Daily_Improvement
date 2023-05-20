/*
MACROS

A further example of using MACROS with "\" on multiple lines
this because MACROS are usually on one line of code

IMPORTANT: be sure you don't have a space after \ otherwise the pre-processor
recognise the space as next line and discard actually the next line!

*/

#define MAIN int main(){ \
	return 0; \
	}

MAIN

