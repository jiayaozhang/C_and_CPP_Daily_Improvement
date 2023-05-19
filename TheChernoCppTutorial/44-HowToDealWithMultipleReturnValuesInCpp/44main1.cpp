/*

2) SECOND SOLUTION
I can return a pointer to a vector that the function creates in the HEAP
Or I can just return a vector by copying it

NOTE: arrays are created in the stack, so they are faster. 
	vectors are created in teh HEAP and are contiguous. 
*/

#include <iostream>
#include <string>
#include <vector>
#include <array>


std::string* Function(){

	return (new std::string[2]{"Hi", "Remo"}); // HEAP allocation happening 
	// Recall: a string is passed by its memory address and not by copying it
	// primitive types like int or char are copied instead and not passed with memory address
}

std::array<std::string,2> Function1(){

	std::array<std::string,2> results;
    results[0]= "X";
    results[1] = "K"; 

	return results;
}

std::vector<std::string> Function2(){

	std::vector<std::string> results;
    results.push_back("H");
    results.push_back("O"); 

	return results;
}

int main (){

	int outVar1, outVar2;

	std::string* sources = Function(); // I return the vector created in the HEAP, by the Function
	std::cout << sources[0] << ", " << sources[1] << std::endl;

	std::array<std::string,2> sources1 = Function1(); // I directly return a Vector
	std::cout << sources1[0] << ", " << sources1[1] << std::endl;

	std::vector<std::string> sources2 = Function2(); // I directly return a Vector
	std::cout << sources2[0] << ", " << sources2[1] << std::endl;
	
	return 0;
}