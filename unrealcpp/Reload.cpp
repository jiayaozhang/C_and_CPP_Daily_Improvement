//运算符重载
//针对的是自定义的数据类型

#include <iostream>
#include <string>

using namespace std;

class Package
{
public:
	Package(int Money);

	int Add(Package p);

private:
	int Money;
};

Package::Package(int Money)
{
	this->Money = Money;
}

//类内 可以访问私有内容
int Package::Add(Package p)
{
	return Money + p.Money;
}

int main()
{
	Package p1(50);
	Package p2(30);
	cout << p1.Add(p2) << endl;
	system("pause");
	return 0;
}

