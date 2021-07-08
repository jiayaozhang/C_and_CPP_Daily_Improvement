#include <iostream>
using namespace std;
#include<string>

//友元的目的是让一些私有属性也可以被类外特殊的函数访问到
//友元的关键字为 friend
//友元有三种实现方式
//1.全局函数做友元
//2.类做友元
//3.成员函数做友元


class Building
{
	//goodGay全局函数是building好朋友，可以访问building中的私有成员
	friend void goodGay(Building* building);


public:
	Building()
	{
		this->m_BedRoom = "卧室";
		this->m_SittingRoom = "客厅";
	}

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

void goodGay(Building* building)
{
	cout << "好基友的全局函数正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友的全局函数正在访问：" << building->m_BedRoom << endl;
}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");
	return 0;
}
