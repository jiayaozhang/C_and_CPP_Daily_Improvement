#include "iostream"

struct T {
	template<class...Args>
	auto operator[] (Args...args) {
		((std::cout << args << " "), ...);
		std::cout << '\n';
	}

	auto operator [](size_t size)
	{
		std::cout << size << '\n';
	}

	template<class T>
	auto operator[](std::initializer_list<T>init_list)
	{
		for (const auto& i : init_list)
		{
			std::cout << i << ' ';
		}
		std::cout << '\n';
	}
};

template<size_t...args> //形参包
constexpr size_t v = (args + ...); //折叠表达式
//变量模板也是一种全局变量
//变量模板也能全特化，偏特化

int main()
{
	T t;
	t["**", 2, 3, 4, 5, 6];
	t[{1, 2, 3, 4, 5, 6}];
	std::cout << v<1, 2, 3, 4, 5> << '\n';
}