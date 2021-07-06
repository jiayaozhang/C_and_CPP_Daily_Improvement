#include <iostream>
using namespace std;

//函数重载注意事项
//函数重载碰到函数默认参数

void func(int& a)
{
	cout << "func (int &a) 的调用!!!!" << endl;
}


void func(const int& a)
{
	cout << "func (const int &a)的调用!!!!" << endl;
}


int main()
{
	int a = 10;
	func(a); //占位参数必须填补

	system("pause");
	return 0;
}

//注意事项
//函数的返回值不可以作为函数重载的条件

