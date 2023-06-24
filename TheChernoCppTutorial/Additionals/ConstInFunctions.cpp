/*

If you want to know more see folders 26 (Const in Cpp) and 27 (Tye Mutable keyword in Cpp)

*/

#include <iostream>
#include <string>

void PrintString(const std::string& parola){ 

	/* I use & so I pass the string by reference
		Because there is const the method won't be able to modify parola
	*/
	// parola[1]='O'; // Se non ci fosse const avrei potuto modificare parola
	std::cout<< parola << std::endl;
};

const int* const GetP1() { 
			/* 1st const means that the pointer contents can't be modified
				2nd const means that the pointer can't be modified
			*/
	int* P = new int(0);
	return P;
}
		
int* const GetP2() { 
			// const means that the pointer can't be modified

	int* P = new int(0);
	return P;
}
		
const int* GetP3() { 
			// const means that the pointer contents can't be modified
	int* P = new int(0);
	return P;
}


int main(){

	std::string parola = "Ciao Remo";
	PrintString(parola);

	// "new" keyword need always a pointer to the variable is allocating memory for teh object
	
	int* a = new int(5);
	std::cout << a << std::endl;
	std::cout << *a << std::endl;
	std::cout << "----------------" << std::endl;
	
	const int* const b1 = GetP1();
// 	*b1 = 7; std::cout << *b1 << std::endl; // I can't this
// 	b1 = a; std::cout << b1 << std::endl; // I can't this
	std::cout << "----------------" << std::endl;
	
	int* const b2 = GetP2();
	*b2 = 7; std::cout << *b2 << std::endl;
// 	b2 = a; std::cout << b2 << std::endl; // I can't this
	std::cout << "----------------" << std::endl;
	
	const int* b3 = GetP3();
// 	*b3 = 7; std::cout << *b3 << std::endl; // I can't this
	b3 = a; std::cout << b3 << std::endl;
	std::cout << "----------------" << std::endl;

	return 0;
}