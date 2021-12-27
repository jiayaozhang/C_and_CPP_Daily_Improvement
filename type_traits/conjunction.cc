#include <iostream>
#include <type_traits>

int main()
{
    std::cout << std::boolalpha;
    std::cout << std::is_const<int>::value << '\n'; // false
    std::cout << std::is_const<const int>::value  << '\n'; // true
    std::cout << std::is_const<const int*>::value  << '\n'; // false
    std::cout << std::is_const<int* const>::value  << '\n'; // true
    std::cout << std::is_const<const int&>::value  << '\n'; // false
}