/*
TEMPLATES in Cpp
in Java or CSharp they call it Generics



*/

/*
NOTES:
Passing by Value
When an object is passed by value to a function, 
the underlying object is copied using its copy constructor. 
double Function(vector<double> my_vector);


Passing by Reference
When an object is passed by reference to a function, the underlying object is not copied.
double Function(vector<double>& my_vector);

Passing by Reference to Const
To solve the problem of not copying AND not modifying the underlying data 
double Function(const vector<double>& my_vector);

*/

#include <iostream>
#include <string>

void Print(int value){
	std::cout << value << std::endl;
}
void Print(std::string value){
	std::cout << value << std::endl;
}
void Print(float value){
	std::cout << value << std::endl;
}

template<typename T> // this will be evaluated at compile time
// template<class T> // this is an alterative way
void PrintT(T value){
	std::cout << value << std::endl;
}

int main() {

	Print(5);
	Print("Hello");
	Print(1.2f);
	// For this we defined three different overload for the Print function

	PrintT(5);
	PrintT<int>(7); //PrintT(T value) = PrintT(typename value) = PrintT<type>(value )
	PrintT("Hello");
	PrintT<std::string>("Ciao");
	PrintT(1.2f);

	/*
	The PrintT function is a template and gets created when we use the PrintT function.
	In this case it is the compiler that creates the code for us. In fact, when I use the function
	with an integer, the compiler creates the function:

	void PrintT(int value){
		std::cout << value << std::endl;
	}
	
	when I use PrintT with a float, the compiler creates the function:

	void PrintT(float value){
		std::cout << value << std::endl;
	}

	*/

	return 0;
}