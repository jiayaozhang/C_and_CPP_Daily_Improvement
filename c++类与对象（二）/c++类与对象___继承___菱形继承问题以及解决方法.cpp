#include <iostream>
using namespace std;
#include<string>

//菱形继承概念
//又有某个类同时继承2个派生类
//这种继承被称为菱形继承，或者砖石继承


class Animal
{
public:
	int m_Age;

};

//利用虚继承可以解决菱形继承的问题
//继承之前 加上关键字 virtual变为虚继承
//Animal类称为 虚基类


//羊类
class Sheep : virtual public Animal {};

class Tuo : virtual public Animal {};

class SheepTuo : public Sheep, public Tuo {};

void test01()
{
	SheepTuo st;
	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承，两个父类拥有相同的数据，需要加以作用域区分

	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;
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


//vbptr
//v - virtual
//b - base
//ptr - pointer
