#include <iostream>
using namespace std;
#include<string>

//类对象作为类成员

class Phone
{

public:
	string m_PName;
	Phone(string pName)
	{
		cout << "Phone的构造调用" << endl;
		m_PName = pName;
	}


	~Phone()
	{
		cout << "Phone的析构函数调用" << endl;
	}

};


class Person
{

public:

	//Phone m_Phone = pName 隐式转换法

	Person(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数调用" << endl;
	}


	~Person()
	{
		cout << "Phone的析构函数调用" << endl;
	}

	//姓名
	string m_Name;
	//手机
	Phone m_Phone;
	//初始化列表初始化属性
};




//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反

void test01()
{
	Person p("张三", "IPhoneMax");
	cout << p.m_Name << "拿着： " << p.m_Phone.m_PName << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}
