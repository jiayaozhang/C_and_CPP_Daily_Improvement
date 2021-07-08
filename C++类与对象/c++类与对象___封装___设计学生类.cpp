#include <iostream>
using namespace std;
#include<string>

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号
//设计学生类
class Student
{
public:
	string m_Name;  //姓名
	int m_Id;       //学号

	void showStudent()
	{
		cout << "姓名： " << m_Name << "学号： " << m_Id << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}

	void setId(int id)
	{
		m_Id = id;
	}
};

int main()
{
	Student s1;
	s1.setName("张三");
	s1.m_Id = 1;
	s1.showStudent();

	Student s2;
	s2.setName("李四");
	s2.m_Id = 2;
	s2.showStudent();

	system("pause");
	return 0;
}
