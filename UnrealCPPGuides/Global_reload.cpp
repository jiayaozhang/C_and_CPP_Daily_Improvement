#include<iostream>
#include<string>

using namespace std;

class A
{
private:
	int Num = 10;
	friend int operator+(A&, int Num);
	friend void operator << (ostream& os, A& a);

};

void operator << (ostream& os, A& a);

void operator<<(ostream& os, A& a)
{
	os << a.Num << endl;
}

int operator+(A& a, int Num);


int operator+(A& a, int Num)
{
	return a.Num + Num;
}


int main()
{
	A a;
	int Num = a + 10;
	cout << Num << endl;
	system("pause");
	return 0;
}

//全局运算符的参数第一位不能是指针 