#include <iostream>
using namespace std;
#include<string>

//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页，公开课,登录，注册..." << endl;
	}
	void footer()
	{
		cout << "帮助中心，交流合作，站内合作" << endl;
	}
	void left()
	{
		cout << "Java， Python, c++" << endl;
	}

};


//JAVA
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Java学科视频" << endl;
	}
};


//python
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//c++
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};


//继承的好处：减少重复代码
//语法： class子类： 继承方式：父类
//子类 也称为 派生类
//父类 也称为 基类

void test01()
{
	cout << "-------------------------" << endl;
	cout << "Java下载视频如下" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();


	cout << "-------------------------" << endl;
	cout << "Python下载视频如下" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "-------------------------" << endl;
	cout << "CPP下载视频如下" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
}

int main()
{
	test01();
	system("pause");
	return 0;
}

