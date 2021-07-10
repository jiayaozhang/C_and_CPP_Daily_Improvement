#include <iostream>
using namespace std;
#include<fstream>
#include<string>

void test01()
{
	ifstream ifs;
	ifs.open("test.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//第一种情况
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种情况
	char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}

	//第三种情况
	char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}

	ifs.close();
}

int main()
{
	test01();
	system("pause");
	return 0;
}

//读文件可以利用ifstream,或者fstream
//利用is_open函数可以判断文件是否打开成功
//close关闭文件