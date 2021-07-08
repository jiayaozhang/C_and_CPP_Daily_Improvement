#include <iostream>
using namespace std;
#include<string>

//立方体类设计
//1. 创建立方体类
//2. 设计属性
//3. 设计行为 获取立方体面积和体积
//4. 分别利用全局函数和成员函数，判断两个立方体是否相等

class Cube
{
public:

	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}
	//获取面积
	int calSquare()
	{
		return 2 * m_L * m_W + 2 * m_W * m_H + 2 * m_H * m_L;
	}
	//获取体积
	int calVolume()
	{
		return m_H * m_L * m_W;
	}

private:
	int m_L;
	int m_W;
	int m_H; //长宽高
};

bool isSame(Cube& c1, Cube& c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	return false;
}

int main()
{
	//创建第一个立方体
	Cube c1;
	c1.setL(10);
	c1.setH(10);
	c1.setW(10);

	cout << "c1的面积为: " << c1.calSquare() << endl;
	cout << "c1的体积为: " << c1.calVolume() << endl;

	//创建第二个立方体
	Cube c2;
	c2.setL(10);
	c2.setH(10);
	c2.setW(100);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "c1和c2相等的" << endl;
	}
	else
	{
		cout << "c1和c2是不相等的" << endl;
	}
	cout << "c2的面积为: " << c2.calSquare() << endl;
	cout << "c2的体积为: " << c2.calVolume() << endl;

	system("pause");
	return 0;
}
