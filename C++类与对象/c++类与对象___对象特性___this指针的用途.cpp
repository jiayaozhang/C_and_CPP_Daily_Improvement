#include <iostream>
using namespace std;
#include<string>

//this指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可


//当形参和成员变量同名时，可以用this指针来区分
//在类的非静态成员函数中返回对象本身，可以使用return *this

//解决名称冲突


class Person
{
public:

	Person(int age)
	{
		this->age = age;
	}

	Person& PersonAddAge(Person& p)
	{
		this->age += p.age;

		return *this;
	}


	int age;
};

//解决名称冲突
void test01()
{
	Person p1(18);
	cout << "p1的年龄为： " << p1.age << endl;
}


//返回对象本身用 *this

void test02()
{
	Person p1(18);

	Person p2(20);

	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

	cout << "p2的年龄为： " << p2.age << endl;
}



int main()
{
	test01();

	test02();
	system("pause");
	return 0;
}
