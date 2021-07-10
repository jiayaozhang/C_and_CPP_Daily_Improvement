#include <iostream>
using namespace std;
#include<string>

class Base
{
public:

	//只要有一个纯虚函数，这个类称为抽象类
	//抽象类特定
	//无法实例化对象
	//抽象类的子类 必须要重写父类中的纯虚函数 否则也是虚函数
	virtual void func() = 0;

};

class Son :public Base
{
public:
	virtual void func()
	{
		cout << "func函数" << endl;

	};

};



void test01()
{
	Base* base = new Son;  //抽象类无法实例化对象
	base->func(); //抽象类无法实例化对象
}


int main()
{
	test01();
	system("pause");
	return 0;
}

