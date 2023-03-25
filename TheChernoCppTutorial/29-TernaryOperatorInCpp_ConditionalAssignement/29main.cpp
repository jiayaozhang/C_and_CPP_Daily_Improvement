#include <iostream>
#include <string>

/*
TERNARY OPERATORS
*/

static int s_Level = 1;
static int s_Speed = 2;

int main (){
	if (s_Level > 5)
		s_Speed = 10;
	else
		s_Speed = 5;

	// Or I can also write
	s_Speed = s_Level > 5 ? 10 : 5;

	// Ternary operators cna also be nested
	s_Speed = (s_Level > 5 && s_Level < 100) ? s_Level > 10 ? 15 : 10 : 5;
	// same as:
	s_Speed = (s_Level > 5 && s_Level < 100) ? s_Level > 10 ? 15 : 10 : 5;

	// using this method below I'm constructing an intermaediate string
	std::string otherRank; // Here I'm constructing a string 
	if (s_Level > 5)
		otherRank = "Master" ; // Then I'm deleting the previous string and creating the new one
	else
		otherRank = "Beginner";

	std::string rank = s_Level > 10 ? "Master" : "Beginner"; 
	/* This way doesn't construct an intermediate string and 
		 it has to do with return value optimization
	*/ 

	std::cout << s_Speed << std::endl;
	std::cout << rank << std::endl;
	
	return 0;
}