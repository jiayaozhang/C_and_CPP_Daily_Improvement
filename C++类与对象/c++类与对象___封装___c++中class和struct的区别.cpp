#include <iostream>
using namespace std;
#include<string>

class C1
{
	int m_a;
public:
	int m_A;

};


struct C2
{
	int m_A;

};

int main()
{

	//struct和class的区别
	//struct默认权限是公共public
	//class 默认权限是私有private
	C1 c1;
	c1.m_A = 100;
	//	c1.m_a = 100;  error, class 默认私有
	C2 c2;
	c2.m_A = 100;

	system("pause");
	return 0;
}
