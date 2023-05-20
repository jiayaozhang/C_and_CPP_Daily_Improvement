/*
MACROS

*/

#include <iostream>
#include <string>

// In Visual Studio, I define in Project/Properties/PreProcessor/PreProcessor Definition two modes
// PR_DEBUG for debug mode and PR_RELEASE for release mode. (see video how to define them)

#ifdef PR_DEBUG // if I'm in the debug mode LOG(x) is replaced by "std::cout << x << std::endl;"
#define LOG(x) std::cout << x << std::endl
#else // if I'm in the release LOG(x) is replaced by nothing: it is removed
#define LOG(x)
#endif

int main(){

	LOG("Hello");

	return 0;
}