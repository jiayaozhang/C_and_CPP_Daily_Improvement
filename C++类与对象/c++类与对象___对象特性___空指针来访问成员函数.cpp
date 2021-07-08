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
	void showClassName()
	{
		cout << "this is Person Class" << endl;
	}

	void showPersonAge()
	{
		//报错原因是因为传入的指针是NULL
		if (this == NULL)
		{
			return;
		}
		cout << "age = " << this->m_Age << endl;
	}

	int m_Age;
};

//解决名称冲突
void test01()
{
	Person* p = NULL;
	p->showClassName();
	p->showPersonAge();
}


//返回对象本身用 *this

int main()
{
	test01();

	system("pause");
	return 0;
}
