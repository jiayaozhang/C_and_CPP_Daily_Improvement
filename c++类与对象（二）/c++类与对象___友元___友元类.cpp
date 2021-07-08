#include <iostream>
using namespace std;
#include<string>

//友元的目的是让一些私有属性也可以被类外特殊的函数访问到
//友元的关键字为 friend
//友元有三种实现方式
//1.全局函数做友元
//2.类做友元
//3.成员函数做友元


class Building;

class GoodGay {

public:
	GoodGay();
	void visit();  //visit函数    访问building中的属性
	void visit2(); //visit2函数 不访问building中的属性
	Building* building;
};

class Building
{
	//告诉编译器 goodgay类下的visit成员函数作为本类的好友，可以访问成员
	friend void GoodGay::visit();


public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;

};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";

}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友1正在访问:" << building->m_SittingRoom << endl;
	cout << "好基友1正在访问:" << building->m_BedRoom << endl;
}



void GoodGay::visit2()
{
	cout << "好基友正在访问:" << building->m_SittingRoom << endl;
	//cout << "好基友1正在访问:" << building->m_BedRoom << endl;
}


void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}


int main()
{
	test01();
	system("pause");
	return 0;
}
