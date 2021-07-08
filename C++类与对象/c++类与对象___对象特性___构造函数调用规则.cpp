#include <iostream>
using namespace std;
#include<string>

//1.构造函数调用规则
// 默认构造函数 （无参，函数体为空）
// 默认析构函数 （无参，函数体为空）
// 默认拷贝构造函数，对属性进行值拷贝
//
//构造函数调用规则
//如果用户定义有参构造函数 c++不在提供默认无参构造，但是会提供默认拷贝构造
//如果用户定义拷贝构造函数，c++不会再提供其他构造函数

//2.如果我们写了有参构造函数，编译器就不再提供默认构造了


class Person
{

public:
	Person()
	{
		cout << "无参构造函数！" << endl;
	}

	Person(int age)
	{
		cout << "有参构造函数！" << endl;
		m_Age = age;
	}

	Person(const Person& p)
	{
		cout << "Person的拷贝构造函数调用" << endl;
		m_Age = p.m_Age;
	}

	~Person()
	{
		cout << "Person的析构函数调用！" << endl;
	}

	int m_Age;

};

void test01()
{
	Person p;
	p.m_Age = 18;
	Person p2(p);
	cout << "p2的年龄为 " << p2.m_Age << endl;
}

void test02()
{
	Person p(18);
	Person p2(p);
	cout << "p2的年龄为 " << p2.m_Age << endl;
}



int main()
{
	test02();
	system("pause");
	return 0;
}
