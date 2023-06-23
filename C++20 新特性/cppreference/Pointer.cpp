#include <iostream>

struct X
{
	int a, b;
	double d;
	void f() { std::cout << "6"; }
};

int main()
{
	X x;
	(x.*q)();
	auto p  = &X::a;
	auto p2 = &X::b;
	auto p3 = &X::d;
	void(X:: * q)() = &X::f;
}