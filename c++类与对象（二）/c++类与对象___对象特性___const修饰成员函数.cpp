#include <iostream>
using namespace std;
#include<string>

//常函数
//成员函数后加const后 称为常函数
//常函数不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依旧可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class Person
{
public:
	//this指针的本质是指针常量，指针的指向是不可以修改的
	//Person *const this;
	//在成员函数后加const，修饰的是this指向，让指针指向的值不可以修改
	void showPerson() const
	{
		this->m_B = 100;
		// this = NULL ; //this指针不可以修改指针的指向的
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B; //特殊变量，即使在常函数中，也可以修改这个值
};


//解决名称冲突
void test01()
{
	Person p;
	p.showPerson();
}



//返回对象本身用 *this

void test02()
{
	const Person p;
	p.m_B = 100; //m_B是特殊变量，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();  常对象 不可以调用普通成员函数

}



int main()
{
	test01();

	test02();
	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#include<string>

//常函数
//成员函数后加const后 称为常函数
//常函数不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依旧可以修改

//常对象
//声明对象前加const称该对象为常对象
//常对象只能调用常函数

class Person
{
public:
	//this指针的本质是指针常量，指针的指向是不可以修改的
	//Person *const this;
	//在成员函数后加const，修饰的是this指向，让指针指向的值不可以修改
	void showPerson() const
	{
		this->m_B = 100;
		// this = NULL ; //this指针不可以修改指针的指向的
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B; //特殊变量，即使在常函数中，也可以修改这个值
};


//解决名称冲突
void test01()
{
	Person p;
	p.showPerson();
}



//返回对象本身用 *this

void test02()
{
	const Person p;
	p.m_B = 100; //m_B是特殊变量，在常对象下也可以修改

	//常对象只能调用常函数
	p.showPerson();
	//p.func();  常对象 不可以调用普通成员函数

}



int main()
{
	test01();

	test02();
	system("pause");
	return 0;
}
