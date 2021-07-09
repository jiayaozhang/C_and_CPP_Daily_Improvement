#include <iostream>
using namespace std;
#include<string>

//公共页面类
class BasePage
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};


class Son1 : public BasePage {
public:
	void func()
	{
		m_A = 10;    // 父类中的公共权限成员， 到子类中依然是公共权限
		m_B = 10;    // 父类中的保护权限成员， 到子类中依然是保护权限
//		m_C = 10;    // 父类中的私有权限成员，   子类访问不到
	}
};

class Son2 : protected BasePage {
public:
	void func()
	{
		m_A = 100;    // 父类中的公共权限成员， 到子类中依然是公共权限
		m_B = 100;    // 父类中的保护权限成员， 到子类中依然是保护权限
//		m_C = 10;    // 父类中的私有权限成员，   子类访问不到
	}
};

class Son3 : private BasePage {
public:
	void func()
	{
		m_A = 100;    // 父类中的公共权限成员， 到子类中依然是公共权限
		m_B = 100;    // 父类中的保护权限成员， 到子类中依然是保护权限
//		m_C = 10;    // 父类中的私有权限成员，   子类访问不到
	}
};

class GrandSon3 : private Son3 {
public:
	void func()
	{
		//m_A = 100;    // 父类中的公共权限成员， 到子类中依然是公共权限
		//m_B = 100;    // 父类中的保护权限成员， 到子类中依然是保护权限
//		m_C = 10;    // 父类中的私有权限成员，   子类访问不到
	}
};


void test01()
{
	Son1 s1;
	s1.m_A = 100;
	//	s1.m_B = 100; //Son1中， m_B是保护权限，类外访问不到
}


void test02()
{
	Son2 s2;
	//s2.m_A = 100;  
	//s2.m_B = 100;
	//son2中， m_A变为保护权限， 因为类外访问不到
}

void test03()
{
	Son3 s3;
	//s3.m_A = 100;  
	//s3.m_B = 100;
	//son3中， m_A变为私有权限， 类外访问不到
}



int main()
{
	test01();
	system("pause");
	return 0;
}

