#include <iostream>
using namespace std;
#include<string>

//公共页面类
class BasePage
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son : public BasePage
{
public:
	int m_D;

};

void test01()
{
	cout << "size of son = " << sizeof(Son) << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}

