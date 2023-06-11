#include<experimental/any>
#include<vector>
#include<string>
#include<iostream>

struct S
{
    S(const S &s) = default;
    S() = default;
};



int main()
{
    std::vector<std::experimental::fundamentals_v1::any> v {5,3.4, std::string("Hello World"),S()};
    static_assert(std::is_nothrow_move_constructible<S>::value,"no-throw");
    std::cout << sizeof(std::experimental::fundamentals_v1::any) << '\n';
    std::cout << v.size() << '\n';
    std::cout << v[3].type().name() << '\n';
    int *i = std::experimental::fundamentals_v1::any_cast<int>(&v[0]);
    *i = 10;
    std::cout << std::experimental::fundamentals_v1::any_cast<int>(v[0]) << '\n';
    //std::cout << std::experimental::fundamentals_v1::any_cast<int>(v[0]) << '\n';
}