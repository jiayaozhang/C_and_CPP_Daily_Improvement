#include <iostream>
using namespace std;

//函数默认参数
//如果我们自己传入数据，就用自己的数据，如果没有，就用默认值
//语法： 返回值类型 函数名（形参 = 默认值）

int func(int a, int b = 20);

//注意事项
//如果从某个位置有了默认参数，那么从这个位置往后就都得有默认参数了
 

//注意事项
//如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值
int main()
{
	//常量引用
	//使用场景，用来修饰形参，防止误操作
	//int a = 10;
	//加上const之后， 编译器将代码修改 int temp = 10; const int & ref = temp; 
	//const int & ref = 10; //引用必须引一块合法的内存空间

	cout << func2(10, 10) << endl;

	system("pause");
	return 0;
}


int func2(int a, int b)
{
	return a + b;
}


