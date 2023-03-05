#include <iostream>
#include <string>


int main (){

int var = 8;
int* ptr = &var;

std::cout << var << std::endl; // Content of "var"
std::cout << ptr << std::endl; // Memory Address of "var"

std::cout << &var << std::endl; // Memory Address of "var"
std::cout << *ptr << std::endl; // Content of memory pointed by "ptr"

// std::cout << *var << std::endl; // No Sense
std::cout << &ptr << std::endl; // Memory Address of the pointer


return 0;
}