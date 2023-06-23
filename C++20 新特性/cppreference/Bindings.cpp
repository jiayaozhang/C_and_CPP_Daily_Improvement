#include<iostream>
#include<tuple>

auto f()
{
	return std::tuple(1, 5.6, 7);
}

int main()
{
	auto [a, b, c] = f();
	std::cout << a << " " << b << " " << c << std::endl;
}