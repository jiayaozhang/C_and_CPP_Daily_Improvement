#include <iostream>
using namespace std;

//引用使用的场景 通常用来修饰形参
void showValue(const int& val)
{
	//	val = 1000;
	cout << "val " << val << endl;
}


int main()
{
	//常量引用
	//使用场景，用来修饰形参，防止误操作
	//int a = 10;
	//加上const之后， 编译器将代码修改 int temp = 10; const int & ref = temp; 
	//const int & ref = 10; //引用必须引一块合法的内存空间

	int a = 100;
	cout << "a " << a << endl;
	showValue(a);
	cout << "a " << a << endl;
	system("pause");
	return 0;

}


