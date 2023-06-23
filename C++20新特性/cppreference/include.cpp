#include"iostream"

template<class T>
struct X{};

template<class T, template<class T> class C>
struct Y
{
	C<T> c;
};

template<class T>
struct X2
{
	T t;
};

template<template<class T, class T2, class T3>class S>
struct Str
{

};

int main()
{
	Y<int, X2>y{};
	y.c.t = 6;
	std::cout << y.c.t << "\n";
	Str<std::basic_string>s;
}