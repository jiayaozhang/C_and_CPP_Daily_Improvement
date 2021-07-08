#include <iostream>
using namespace std;
#include<string>

//构造函数的分类及调用
//按参数： 有参构造和无参构造
//按类型： 普通构造和拷贝构造
//调用方式： 括号法
//          显示法
//          隐式转换法


class Person
{

public:

	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}


	Person(int a)
	{
		age = a;
		cout << "Person的有参析构函数调用" << endl;
	}
	//copy构造函数
	Person(const Person& p)
	{
		age = p.age;
		cout << "Person的拷贝析构函数调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}
	int age;
};

void test01()
{
	//括号法
	//Person p1;       //默认构造函数调用
	//Person p2(10);   //有参构造函数
	//Person p3(p2);   //拷贝构造函数

	//注意事项
	//调用默认构造函数时候，不要加() 
	//因为下面这行代码，编译器会认为是一个函数的声明
	//Person p1(); 

	//cout << "p2的年龄为" << p2.age << endl;
	//cout << "p3的年龄为" << p3.age << endl;

	//显示法
	//Person p1;
	//Person p2 = Person(10);
	//Person p3 = Person(p2);

	//注意事项2
	//不要利用拷贝构造函数 初始化匿名对象

	//隐式转换法
	Person p4 = 10;  //相当于写了 Person p4 = Person(10);  有参构造
	Person p5 = p4;  //拷贝构造
}



int main()
{
	test01();

	system("pause");
	return 0;
}
