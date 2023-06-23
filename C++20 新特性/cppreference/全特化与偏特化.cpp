#include<iostream>

template<class T>
struct X {
	void f(){ }
};

template<>
struct X<double>
{
	void f(int){}
};

template<class T>
void f() {
	std::cout << "6\n";
}

template<>
void f<double>() {
	std::cout << "??\n";
}

template<class T>
constexpr size_t v = 6;

template<typename T>
constexpr size_t v<const T> = 100;

int main()
{
	X<int>x;
	x.f();
	X<double>x2;
	x2.f(1);
	f<int>();
	f<double>();
	std::cout << v<int> << '\n';
	std::cout << v<double> << '\n';
	std::cout << v<const int> << '\n';

}