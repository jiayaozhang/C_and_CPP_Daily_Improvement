#include <iostream>
using namespace std;

//c++程序在执行的时候，将内存分为4个区域
//代码区：存放函数体的二进制代码，由操作系统进行管理
//全局区：存放全局变量和静态变量以及常量
//栈区：由编译器自动分配释放，存放函数的参数值，局部变量等等
//堆区：由程序员分配和释放，若程序员不释放，程序结束时由操作系统回收


//代码区 存放CPU执行的机器指令
//代码区是共享的，共享的目的是对于频繁被执行的程序，只需要在内存中有一份代码即可
//代码区是只读的，使其只读的原因是防止程序意外地修改了指令


//全局区：全局变量和静态变量存放在此
//全局区还包含了常量区，字符串常量和其他常量
//该区域的数据在程序结束后由操作系统释放



//全局变量
int g_a = 10;
int g_b = 10;

//const 修饰全局常量
const int c_g_a = 10;
const int c_g_b = 10;



int main()
{



	//静态变量 在普通变量前面加static，属于静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为： " << (int)&s_a << endl;
	cout << "静态变量s_b的地址为： " << (int)&s_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为" << (int)&"hello world" << endl;

	cout << "全局常量c_g_a的地址为： " << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为： " << (int)&c_g_b << endl;


	//const 修饰局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部常量c_l_a的地址为： " << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为： " << (int)&c_l_b << endl;



	//局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为： " << (int)&a << endl;
	cout << "局部变量b的地址为： " << (int)&b << endl;

	cout << "全局变量g_a的地址为： " << (int)&g_a << endl;
	cout << "全局变量g_b的地址为： " << (int)&g_b << endl;




	system("pause");
	return 0;

}


