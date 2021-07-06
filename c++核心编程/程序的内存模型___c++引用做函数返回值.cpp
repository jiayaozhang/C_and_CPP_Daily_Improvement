#include <iostream>
using namespace std;

//引用是可以作为函数的返回值
//1. 不要返回局部变量的引用
//2. 函数的调用可以作为左值

int& test01()
{
	int a = 10;
	return a;
}

//2. 函数的调用可以作为左值
int& test02()
{
	static int a = 10; //静态变量，存放在全局区，全局区的数据在程序结束后被释放
	return a;

}

int main()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	int& ref2 = test02();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	test02() = 1000;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;
	system("pause");
	return 0;

}


