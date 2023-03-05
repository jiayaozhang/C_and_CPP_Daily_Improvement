// Functions in C++

// Functions are not of a class
// Functinos that are part of a class are called Methods

// EXAMPLE of a function:
using namespace std;
int Multiply(int a, int b)
{
	return a * b;
}

int Multiply()
{
	return 2 * 5;
}

void Multiply(int a, int b)
{
	std::cout << 5 * 8 << std::endl;
}

//Call a function:
int result = Multiply (3,2);

// The COMPILER can INLINE the function or can just keep them in another part of the code and jump there when it needs. INLINING makes the program faster.

//  If a function has a retunr value, it has to return a value: only the main function can return nothing, it will assume you are returning 0

//  function DECLARATION: is the DEFINITION with only the HEADER of the function
//  DEFINITION contains the Header and the Body of the function
//  DECLARATIONS are in the Header file and when you include an header file, the compiler just copy/paste all the contenue of the file header at the include line.
