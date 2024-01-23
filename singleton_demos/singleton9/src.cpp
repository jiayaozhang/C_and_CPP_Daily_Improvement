#include "sing1.h"
#include "sing2.h"
#include <iostream>

void fun()
{
    std::cout << "from fun: " << singleton2.val << '\n';
    std::cout << "from fun: " << singleton1.val << '\n';
}