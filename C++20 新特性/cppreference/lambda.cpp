#include<vector>
#include <new>
#include <thread>
#include <array>
#include <algorithm>
#include <iostream>


//c++11 lambda 类类型 无名的非联合union非聚合类 类型

struct X : decltype([] {std::cout << "666 \n"; })
{

};


int main()
{
	//auto p = [num = 0] {};

	void(*p)() = []()
	{
		std::cout << "lambda \n";
	};
	std::cout << sizeof p << '\n';
	X x;
	x();
	auto p_ = []<typename T>(T n) { std::cout << n << '\n'; };
	p_(10);
	p_(5.6);
}