#include <iostream>
using namespace std;
#include<string>


class Person
{

public:
	Person()
	{
		cout << "无参构造函数！" << endl;
	}

	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);
		cout << "有参构造函数！" << endl;
	}

	//拷贝构造函数
	Person(const Person& p)
	{
		cout << "Person拷贝构造函数！" << endl;
		m_Age = p.m_Age;
		//深拷贝
		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
		m_Height = new int(*p.m_Height);
	}

	~Person()
	{
		//析构代码，将堆区开辟数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数调用！" << endl;
	}

	int m_Age;
	int* m_Height;

};

void test01()
{
	Person p1(18, 160);
	cout << "p1的年龄为 " << p1.m_Age << "身高为" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄为 " << p2.m_Age << "身高为" << *p2.m_Height << endl;

}


int main()
{
	test01();
	system("pause");
	return 0;
}
