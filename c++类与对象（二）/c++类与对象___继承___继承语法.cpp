#include <iostream>
using namespace std;
#include<string>

//继承中的同名静态成员处理方式
class Base
{
public:

	Base()
	{
		m_A = 100;
	}

	int m_A;
};

class Base2
{
public:

	Base2()
	{
		m_B = 200;
	}

	int m_B;
};

//子类 需要继承base1 和 base2
//语法： class 子类： 继承方式 父类1 ， 继承方式 父类2 .......
class Son : public Base, public Base2
{
public:
	Son()
	{
		m_C = 300;
		m_D = 400;
	}

	int m_C;
	int m_D;
};

void test01()
{
	Son s;
	cout << "sizeof son = " << sizeof(s) << endl;
	cout << "Base1::m_A = " << s.Base::m_A << endl;
	cout << "Base2::m_B = " << s.Base2::m_B << endl;

}

int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}

//子类对象可以直接访问到子类中同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中成员函数。 
//加作用域可以访问到父类中的同名函数
