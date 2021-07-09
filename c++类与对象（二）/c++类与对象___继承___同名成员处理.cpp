#include <iostream>
using namespace std;
#include<string>

//公共页面类
class Base
{
public:
	Base()
	{
		m_A = 100;
	}

	void func()
	{
		cout << "Base - func()调用" << endl;
	}

	void fund(int a)
	{
		cout << "INT a --- Base - func()调用" << endl;
	}


	int m_A;
};

class Son : public Base
{
public:
	Son()
	{
		m_A = 200;
	}

	void func()
	{
		cout << "Son Base - func()调用" << endl;
	}
	int m_A;
};

void test01()
{
	Son s;
	cout << "CLASS Son m_A = " << s.m_A << endl;
	cout << "CLASS Base m_A = " << s.Base::m_A << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
}

void test02()
{
	Son s;
	s.func();// 直接调用 调用是子类中的同名成员

	//如何调用到父类中的同名成员函数， 如何加作用域
	s.Base::func();
	s.Base::fund(100);

}


int main()
{
	test02();
	system("pause");
	return 0;
}

//子类对象可以直接访问到子类中同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中成员函数。 
//加作用域可以访问到父类中的同名函数
