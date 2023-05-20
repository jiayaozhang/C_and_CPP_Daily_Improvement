/*
MACROS

A better imlpmentation of the prevoius code would be
*/

#include <iostream>
#include <string>

#define PR_DEBUG 1 // I can assign a value to this parameter definition

// Or I can define this in DEBUG MODE, in Project/Properties/PreProcessor/PreProcessor Definition
// like this: "PR_DEBUG=1" without spaces.

// I can define RELEASE MODE, in Project/Properties/PreProcessor/PreProcessor Definition
// like this: "PR_RELEASE".

#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif

int main(){

	LOG("Hello");

	return 0;
}