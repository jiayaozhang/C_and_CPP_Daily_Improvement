#include <iostream>
using namespace std;

//c++ 函数名可以相同， 提高复用性
//函数重载需要满足的条件：
//同一个作用域下
//函数名称相同
//函数参数类型不同 或者个数不同 或者顺序不同
//注意: 函数的返回值 不可以作为函数重载的条件
//函数的返回值 不可以作为函数重载的条件


//函数重载的满足条件
//1. 同一个作用域下
//2. 函数名称相同
//3. 函数参数类型不同，或者个数不同，或者顺序不同

void func(int a)
{
	cout << "func (int a) 的调用!!!!" << endl;
}


void func(double a)
{
	cout << "func (double a)的调用!!!!" << endl;
}

int main()
{
	func(3.14); //占位参数必须填补

	system("pause");
	return 0;
}

//注意事项
//函数的返回值不可以作为函数重载的条件

