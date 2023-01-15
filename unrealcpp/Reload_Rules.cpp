//2-6 重载规则
//explicit 用于将函数进行明确性支出，防止编译器根据类型推断进行转换
#include<iostream>
#include <string>

class A
{
public:
	explicit operator bool();  //声明转换到布尔规则
};

A::operator bool()    //定义转换规则
{
	return true;	  //因为要转换到布尔，所以必须返回布尔值
}

int main()
{
	A a;

	if (a)			  //可以被当做布尔值使用
	{

	}
	//int Num = a + 1;
	//bool b = a;
	system("pause");
	return 0;
}

