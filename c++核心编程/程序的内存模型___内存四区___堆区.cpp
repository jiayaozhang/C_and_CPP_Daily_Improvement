#include <iostream>
using namespace std;

int* func()
{
	int *p = new int(10);
	return p;
}

int main()
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	system("pause");
	return 0;

}

//堆区由程序员分配释放，若程序员不释放，程序结束时由操作系统回收
//在c++中利用new在堆区开辟内存
