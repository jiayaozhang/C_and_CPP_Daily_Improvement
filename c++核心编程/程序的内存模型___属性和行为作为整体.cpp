#include <iostream>
using namespace std;

//c++面向对象的三大特征: 封装，继承，多态
//具有相同性质的对象，可以抽象为类

//封装是的意义是
//1. 将属性和行为作为一个整体， 表现生活中的事物
//2.将属性和行为加以权限控制


// 封装的意义： 在设计类的时候 属性和行为在一起 表现事物
// 语法 class 类名 {访问权限： 属性/ 行为}

// 设计一个圆类，求圆的周长
//圆求周长的公式 : 2 * PI * 半径 
//class 代表一个类， 类后面紧跟着类名称

const double PI = 3.14;

class Circle
{

public:
	int m_r; //半径

	double cal_length()
	{
		return 2 * PI * m_r;  //获取圆的周长
	}
};



int main()
{
	//通过圆，创建具体的圆（对象）
	//实例化 （通过一个类 创建一个对象的过程）
	Circle cl;

	cl.m_r = 10;
	cout << "圆的周长为  " << cl.cal_length() << endl;

	system("pause");
	return 0;
}

//注意事项
//函数的返回值不可以作为函数重载的条件

