#include <iostream>
using namespace std;
#include<string>

class AbstractDrinking
{
public:
	//煮水
	virtual void Boil() = 0;

	//冲泡
	virtual void Brew() = 0;

	//倒入水中
	virtual void PourInCup() = 0;

	//加入辅料
	virtual void PutSomething() = 0;

	//制作饮品
	void makeDrink()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class coffee : public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	virtual void PourInCup()
	{
		cout << "倒入水中" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};

class Tea : public AbstractDrinking
{
public:
	virtual void Boil()
	{
		cout << "煮农夫山泉" << endl;
	}

	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	virtual void PourInCup()
	{
		cout << "倒入水中" << endl;
	}

	virtual void PutSomething()
	{
		cout << "加入糖和牛奶" << endl;
	}
};


void doWork(AbstractDrinking* abs)
{
	abs->makeDrink();
	delete abs; //释放
}


void test01()
{
	//制作咖啡
	doWork(new coffee);


	cout << "-------------------" << endl;
	doWork(new Tea);

}

int main()
{
	test01();
	system("pause");
	return 0;
}

