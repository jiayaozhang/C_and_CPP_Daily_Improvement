#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	// int &c;   //错误，引用必须初始化
	int& c = a;  //一旦初始化，就不能更改
	c = b;       //这是赋值，不是更改引用
	
	
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	cout << "c =" << c << endl;


	system("pause");
	return 0;

}


