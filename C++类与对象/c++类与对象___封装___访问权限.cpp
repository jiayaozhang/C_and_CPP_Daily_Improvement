#include <iostream>
using namespace std;
#include<string>


//访问权限有三种
// 公共权限 public       成员 类内可以访问  类外可以访问
// 保护权限 protected    成员 类内可以访问  类外不可以访问  儿子也可以访问父亲中保护的内容
// 私有权限 private      成员 类内可以访问  类外不可以访问  儿子不可以访问父亲中保护的内容

class Person
{
public:
	// 公共权限
	string m_Name;  //姓名

protected:
	string m_Car; //汽车

private:
	//私有权限
	int m_Password; //汽车

public:
	void func()
	{
		m_Name = "张三";
		m_Car = "张三";
		m_Password = 123456;
	}
};


int main()
{

	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰";  // 保护权限内容, 在类外访问不到
	//p1.m_Password = 123;// 保护权限内容, 在类外访问不到

	system("pause");
	return 0;
}
