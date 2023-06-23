#include "iostream"

struct X {
	X()
	{
		std::cout << "默认构造函数\n";
	}
	X(X&&)
	{
		std::cout << "移动构造函数\n";
	}
	X(const X&)
	{
		std::cout << "拷贝构造函数\n";
	}
};

int main()
{
	X x;					//左值
	X x2 = std::move(x);    //std::move 返回的是一个亡值，右值分别为纯右值和亡值，都可以调用移动构造函数或者移动赋值运算符
	X x3 = X();				//有复制消除，在c++17以前是作为一个普遍存在的优化，c++17后是强制的了
	//用移动比拷贝构造函数开销要小
}