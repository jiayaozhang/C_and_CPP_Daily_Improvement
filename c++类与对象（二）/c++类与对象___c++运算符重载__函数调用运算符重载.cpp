#include <iostream>
using namespace std;
#include<string>

//重载关系运算符 可以让2个自定义类型对象进行对比操作

class MyPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}


};

void MyPrint02(string test)
{
	cout << test << endl;
}


void test01()
{

	MyPrint myPrint;

	myPrint("hello world");

	MyPrint02("hello world");
}

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};


void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;

	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}

//左移运算符配合友元可以实现输出自定义数据类型