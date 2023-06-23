#include<iostream>

template<typename T, typename T2>
struct is_same
{
	const static bool value = false;
};

template<typename T>
struct is_same<T, T>
{
	const static bool value = true;
};

template<typename T, typename T2>
bool is_same_v = is_same<T, T2>::value;

int main() {
	std::cout << std::boolalpha << is_same_v<int, int> << '\n';
	std::cout << std::boolalpha << is_same_v<double, int> << '\n';
	std::cout << std::boolalpha << is_same_v<char, int> << '\n';
}