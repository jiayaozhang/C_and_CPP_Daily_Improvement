#include <iostream>
using namespace std;

//发现是引用，转换为 int* const ref = &a;
void func(int& ref)
{
	ref = 100;
}

int main()
{
	int a = 10;

	//自动转换为 int* const ref = &a;
	//指针常量是指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20;
	cout << "a: " << a << endl;
	cout << "ref: " << ref << endl;

	func(a);
	return 0;
}


//引用的本质 就是一个指针常量
//引用一旦初始化，就不可以发生改变
