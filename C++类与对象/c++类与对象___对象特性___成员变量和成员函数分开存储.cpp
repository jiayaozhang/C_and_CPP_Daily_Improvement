#include <iostream>
using namespace std;
#include<string>

//成员变量  和 成员函数  是分开存储的

class Person
{
	int m_A;        //非静态成员变量      属于类的对象上

	static int m_B; //静态成员变量      不属于类的对象上


	void func() {};

	static void func2() {};
};

int Person::m_B = 0;

void test01()
{
	Person p;
	//空对象占用的内存空间为0 4 1 
	//c++编译器会给每一个空对象分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象 也应该有一个独一无二的内存地址
	cout << "size of p in test01 = " << sizeof(p) << endl;
}


void test02()
{
	Person p;
	cout << "size of p in test02 = " << sizeof(p) << endl;
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}
