#include <iostream>
using namespace std;
#include<string>

//继承中的同名静态成员处理方式
class Base
{
public:

	static int	m_A;

	static void func()
	{
		cout << "Base - static void func()调用" << endl;
	}

	static void fund(int a)
	{
		cout << "INT a ---static void func(int a)调用" << endl;
	}

};
int Base::m_A = 100;


class Son : public Base
{
public:
	static int	m_A;

	void func()
	{
		cout << "Son Base - func()调用" << endl;
	}
};
int Son::m_A = 200;

void test01()
{
	//通过对象访问
	cout << "通过对象访问：" << endl;
	Son s;
	cout << "CLASS Son m_A = " << s.m_A << endl;
	cout << "CLASS Base m_A = " << s.Base::m_A << endl;
	//通过类名访问
	cout << "通过类名访问：" << endl;
	cout << "CLASS Son 下 m_A " << Son::m_A << endl;
	//第一个：：表示通过类名 第二个：：表示访问父类作用域下
	cout << "CLASS BASE 下 m_A：" << Son::Base::m_A << endl;
}

void test02()
{
	//通过对象访问
	cout << "-----------通过对象访问--------------------------" << endl;
	Son s;
	s.func();// 直接调用 调用是子类中的同名成员
	s.Base::func();
	s.Base::fund(100);


	//通过类名访问
	cout << "-----------通过类名访问--------------------------" << endl;
	Son::Base::func();

}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

//子类对象可以直接访问到子类中同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中成员函数。 
//加作用域可以访问到父类中的同名函数
