/*

2) FOURTH SOLUTION
I can use STRUCT and the struct are constructed in the stack and not in the HEAP

*/

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <tuple>
// #include <utility>
// #include <functional>


struct returnValues{
	std::string Vertex;
	std::string Fragment;
};

returnValues Function(){

	return {"Ciao", "Remo"}; 
}

int main (){

	returnValues sources = Function(); // I return a pointer to a vector created in the HEAP by the Function

	std::cout << sources.Vertex << ", " << sources.Fragment << std::endl;

	return 0;
}