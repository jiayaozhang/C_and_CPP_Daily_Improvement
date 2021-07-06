#include <iostream>
using namespace std;

//引用是可以作为函数的返回值
//1. 不要返回局部变量的引用
//2. 函数的调用可以作为左值

int & test01()
{
	int a = 10;
	return a;
}


int main()
{
	int& ref = test01();
	cout << "ref = " << ref << endl;
	system("pause");
	return 0;

}


