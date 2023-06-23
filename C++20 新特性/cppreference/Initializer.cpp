#include<iostream>

struct X
{
	explicit X(int a, int b) : a(a), b(b)
	{
		std::cout << "X(int a, int b) \n";
	} 
	int a{};
	int b{};
	//复制列表初始化 （考虑explicit和非explicit构造函数，但只能调用非explicit构造函数）
};

int main()
{
	X x{ 1,2 };
	X x2(1, 2);
	//X x3 = { 1,2 };
}
