#include <iostream>
using namespace std;
#include<string>

//成员属性私有化
//将所有成员属性设置为私有化，可以自己控制读写权限
//对于写权限，我们可以检测数据的有效性

class Person
{
public:
	void setName(string name)
	{
		m_Name = name;
	}

	string getName()
	{
		return m_Name;
	}


	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			cout << "你这个老妖精！ " << endl;
			return;
		}
		m_Age = age;
	}

	int getAge()
	{
		////	m_Age = 0; //初始化为0岁
		return m_Age;
	}

private:
	string m_Name; //可读可写
	int    m_Age;  //只读
	string m_Lover;//只写

};

int main()
{
	//姓名
	Person p;
	p.setName("张三");
	cout << "姓名为： " << p.getName() << endl;

	//年龄
	int m_Age;
	p.setAge(1800);
	cout << "年龄为： " << p.getAge() << endl;

	//情人
	string m_Lover;

	system("pause");
	return 0;
}
