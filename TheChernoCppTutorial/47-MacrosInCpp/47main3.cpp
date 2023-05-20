/*
MACROS

*/

#include <iostream>
#include <string>

#define PR_DEBUG 1 

/*
With "#if" you can also disable entire blocks code as well.

MACROS are most used for debugging purpose
*/

#if 0

#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#elif defined(PR_RELEASE)
#define LOG(x)
#endif

#endif

int main(){

	LOG("Hello");

	return 0;
}