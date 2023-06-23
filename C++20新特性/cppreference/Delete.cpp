#include<iostream>

struct X
{
	X(const X&) = delete;
	X(int){}
	X(double) = delete;
};

void f(int){}
void f(double) = delete;

int main()
{
	f(1);
	X x(1);
}