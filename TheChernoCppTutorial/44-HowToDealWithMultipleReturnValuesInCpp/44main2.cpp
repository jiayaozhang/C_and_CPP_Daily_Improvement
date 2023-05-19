/*

2) THIRD SOLUTION
we can use TUPLES that is class that contains different varaibles and doesn't care about the type of the
variables it contains.

*/

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <tuple>
// #include <utility>
// #include <functional>


std::tuple<std::string, int> Function(){

	return std::make_pair("Remo", 1);
}

std::pair<std::string, int> Function2(){ // instead of tuple I can use pair

	return std::make_pair("Maria", 2);
}

int main (){

	std::tuple<std::string, int> sources = Function(); // I return a pointer to a vector created in the HEAP by the Function

	auto sources2 = Function(); // I can use auto type for tuples
	auto sources3 = Function2(); // I can use auto type for tuples

	std::string parola = std::get<0>(sources);

	std::cout << std::get<0>(sources) << ", " << std::get<1>(sources) << std::endl;

	// Function2 uses pair instead of tuples so i can write
	std::cout << sources3.first << ", " << sources3.second << std::endl;

	return 0;
}