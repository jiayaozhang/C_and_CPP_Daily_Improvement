#include <iostream>
using namespace std;

//C++默认实参剖析

void T(int, int, int = 10);
void T(int, int = 6, int);
void T(int = 4, int, int);
void T(int a, int b, int c) { std::cout << a << " " << b << " " << c << '\n'; }


struct X
{
	int n = 6;
	static const int a = 6;
	void f(int n = sizeof(a)) { std::cout << n << '\n'; }
	void f_(int n = a) { std::cout << n << '\n'; }
};


//默认实参中不能使用非静态的类成员（即使他们不被求值）

int main() {

	T();
	X().f();
	X().f_();
}