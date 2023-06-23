#include<iostream>
#include<format>
#include<chrono>
//using namespace literals;
//用户自定义字面量
using namespace std::literals::chrono_literals;

std::string operator""_r(const char* str, size_t size)
{
	return { str };
}

std::string operator""_i(size_t size)
{
	//return std::to_string(size);
}

int main()
{
	"123456"_r;
	//std::cout << "{} ** {}"_f(5, 5.6) << '\n';
}