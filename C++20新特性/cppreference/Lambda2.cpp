#include<vector>
#include <new>
#include <thread>
#include <array>
#include <algorithm>
#include <iostream>
#include <format>
#include <chrono>
#include <any>
using namespace std::literals;

void f(int, const int(&)[2] = {}) {}
void f(const int &, const int(&)[1]) {}


int main()
{
	int* p = nullptr;
	+p;

	const int a = 42;
	auto p_ = [=] {a; };
	std::cout << sizeof p_ << '\n';
	p_();
	//return a;

	const int N = 10;
	auto p2 = [=]
	{
		int p2 = N;
	};
	std::cout << sizeof p2 << '\n';

	const int x = 17;
	auto g0 = [](auto a) {f(x); }; 
	std::cout << sizeof g0 << '\n';

	auto g1 = [=](auto a) { f(x); };
	std::cout << sizeof g1 << '\n';
}
