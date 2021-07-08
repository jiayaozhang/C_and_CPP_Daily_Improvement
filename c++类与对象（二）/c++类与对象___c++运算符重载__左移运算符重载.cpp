#include <iostream>
using namespace std;
#include<string>

//左移运算符重载

class Person
{
public:
	//利用成员函数重载 左移运算符
	//不会利用成员函数重载<<运算符
	void operator<<(Person& p)
	{

	}

	int m_A;
	int m_B;
};

ostream& operator<< (ostream& cout, Person& p)  //本质 operator << (cout, p ) 简化 cout << p
{
	cout << " m_A  " << p.m_A << " m_B  " << p.m_B << endl;
	return cout;
}

void test01()
{
	Person p;
	p.m_A = 10;
	p.m_B = 10;

	cout << p << "hello world" << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}

//左移运算符配合友元可以实现输出自定义数据类型