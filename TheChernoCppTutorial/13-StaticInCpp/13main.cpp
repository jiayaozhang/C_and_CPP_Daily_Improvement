/* Static in C++
STATIC outside a Class or Struct means that what you declared static is available only for that translation unit, only for the code that is the the same cpp file where the static object is declared. Here Static is significant only for the LINKER because if I define static a variable or a static function, then the LINKER will link that variable or function only to the cpp file where they have been declared and not to globally. Otherwise the LINKER can find duplicates of the same function or variable in different files linked together.
STATIC inside a Class or Struct means that basically across all instances that you create of that class or struct there's only going to be one instance of that static variable and a similar thing applies to static methods in a class, there is no instance of that class being passed into that method
In each cpp file is better to use static variables or functions
*/

#include <iostream>

int s_Variable_1 = 1;

//int Variable_2 = 2;
//    ERROR here because Variable_2 is already present in another cpp file, so the Linker shows a DUPLICATE error. We can't have two global variables with the same name.

extern int Variable_3;
// Im telling to the LINKER to look for that variable in an external translation unit

//void Function()
//{
//} // Ill get a LINKER DUPLICATE ERROR

void static_Function()
{
} // Here no LINKER DUPLICATE ERROR because in the Static.cpp the static_Function is static

int main() {

    std::cout << s_Variable_1 << std::endl;
    std::cin.get();
    
//    std::cout << Variable_2 << std::endl;
// I can't execute this because Variable_2 is not declared here and if I declare it here then the LINKER shows a DUPLICATE ERROR because I declared this variable also in the Static.cpp file
    
    std::cout << Variable_3 << std::endl;
    std::cin.get();
}

