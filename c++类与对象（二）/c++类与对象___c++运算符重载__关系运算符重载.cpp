#include <iostream>
using namespace std;
#include<string>

//重载关系运算符 可以让2个自定义类型对象进行对比操作

class Person
{
public:

	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}

	////重载 ==号
	bool operator==(Person& p)
	{
		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
		{
			return true;
		}
		return false;
	}

	string m_Name;
	int m_Age;

};

void test01()
{
	Person p1("Tom", 18);

	Person p2("Tomy", 18);

	if (p1 == p2)
	{
		cout << "p1 and p2 相等 ！" << endl;
	}
	else
	{
		cout << "p1 and p2 不相等 ！" << endl;
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}

//左移运算符配合友元可以实现输出自定义数据类型