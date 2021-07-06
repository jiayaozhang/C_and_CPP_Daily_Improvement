#include <iostream>
using namespace std;

//由编译器自动分配释放，存放函数的参数值和局部变量等等
//注意事项:不要返回局部变量的地址，栈区开辟的数据由编译器自动释放


int* func()
{
	int a = 10;  //局部变量  存放在栈区，栈区的数据在函数执行完后自动释放
	return &a;   //返回局部变量的地址
}

int main()
{
	int* p = func();    //接受func函数的返回值
	cout << *p << endl; //第一次编译器做了保留，所以可以打印正确的数字
	cout << *p << endl; //第二次这个数据就不再保留了
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;

}


