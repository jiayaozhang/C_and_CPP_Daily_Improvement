#include<iostream>
#include<string>
#include <memory>

template<size_t...args>
struct X {
	void f() {
		for (const auto& i : { args... }) {
			std::cout << i << "";
		}
		std::cout << '\n';
	}
};

template<typename...Args>
void f(Args...args)
{
	((std::cout << args << ' '), ...);
}

template<std::integral...Args>
void f2(Args...args)
{
	((std::cout << args << ' '), ...);
}

template<template<class T1, class T2, class T3>class...Args>
struct Y {

};

template<class T1, class T2, class T3>
struct T {

};

template<class...Args>
void t(Args...args)
{
	int array[sizeof...(Args)]{ Args... };
	for (const auto& i : array)
	{
		std::cout << i << ' ';
	}
}

int main()
{
	X<1, 2, 3, 4, 5, 6>x;
	x.f();
	f(1, 2, 3, "*", 5.6);
	endl(std::cout);
	f2(1, 2, 3, '*');
	Y<std::basic_string,T,T,T>y;
}