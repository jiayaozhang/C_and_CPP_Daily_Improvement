#include <iostream>

template<class...Args>
auto f(Args...args)
{
	static auto list = { args * args+10 + args... };
	return list;
}

int main()
{
	auto ret = f(1, 2, 3, 4, 5);
	for (const auto& i : ret)
	{
		std::cout << i << ' ';
	}
}