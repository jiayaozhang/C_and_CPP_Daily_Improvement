#include <iostream>
using namespace std;


//友元本身破坏了面向对象的封装特性，但是友元又只是小范围的开放数据，共享数据
//只要使用得当可以帮助我们解决大问题。例如不开放数据的成员情况下，又可以和某一个函数或类共享数据
//这是友元的优点
//在运算符重载中（两个无关数据进行运算），友元起到了至关重要的作用


class Manager
{
public:
	void CheckMoney(const class Account&);
};

class Account
{
private:
	int Money = 19;
private:
	friend void Manager::CheckMoney(const class Account&);
};

void Manager::CheckMoney(const Account& account)
{
	cout << account.Money << endl;
}

int main()
{
	Manager mgr;
	Account acc;

	mgr.CheckMoney(acc);
}