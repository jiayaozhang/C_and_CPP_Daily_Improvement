#include<iostream>

struct S
{
	int n{};
	void f() const& { std::cout << "×óÖµ\n"; }
	void f()&& { std::cout << "ÓÒÖµ\n"; }
};

int main()
{
	S s;
	s.f();
	std::move(s).f();
	S().f();
}