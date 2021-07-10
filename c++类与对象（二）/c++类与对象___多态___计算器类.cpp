#include <iostream>
using namespace std;
#include<string>


class Calculator
{
public:
	int	getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
	}
	//扩展新的功能，需要修改源码
	//开发中，提倡 开闭原则
	//开闭原则：对扩展进行开发，对修改进行关闭

	int m_Num1;
	int m_Num2;
};


void test01()
{
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;
	cout << c.m_Num1 << " + " << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << "=" << c.getResult("*") << endl;
}

//利用多态实现计算器




//实现计算器抽象类
class AbstractCalculator
{

public:

	virtual int getResult()
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;

};


//加法计算器类
class AddCalculator : public AbstractCalculator
{
public:

	virtual int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法计算器
class SubCalculator : public AbstractCalculator
{
public:

	virtual int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器
class MulCalculator : public AbstractCalculator
{
public:

	virtual int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
	//用完后销毁
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

	//乘法运算
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
	delete abc;

}


int main()
{
	test02();
	system("pause");
	return 0;
}

