#include <iostream>
using namespace std;
#include<string>

//左移运算符重载

class MyInteger
{
	friend ostream& operator << (ostream& out, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}
	//重载前置++ 运算符
	MyInteger& operator++()
	{
		m_Num++;
		return *this;
	}

	//重载后置++ 运算符
	MyInteger operator++(int)
	{
		//先 记录结果
		MyInteger temp = *this;
		//后 递增
		m_Num++;
		//最后将记录结果做返回
		return temp;
	}

private:

	int m_Num;
};

ostream& operator << (ostream& out, MyInteger myint)
{
	cout << myint.m_Num;
	return cout;
}

void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << (myint++)++ << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}

//左移运算符配合友元可以实现输出自定义数据类型