#include "iostream"

template<size_t...args>
constexpr int v = (args - ...);

template<size_t...args>
constexpr int v2 = (... - args);

template<class... Args>
void printer(Args&&... args)
{
	(std::cout << ... << args) << '\n';
}

template<class...Args>
void print(Args...args)
{
	((std::cout << args << ' '), ...);
}


int main()
{
	std::cout << v<4, 5, 6> << '\n';
	std::cout << v2<4, 5, 6> << '\n';
	print("**", 1.2, 1);
	std::cout << std::endl;
	printer("**", 1.2, 1);
}