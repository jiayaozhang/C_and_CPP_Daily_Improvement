#include <iostream>
#include <string>

using namespace std;

class A
{
public:
	int Num = 0;
	int operator+(int num);
	int operator+(const class B&);
};

class B
{
public:
	int Num = 0;
	int operator+(const A&);
};


int B::operator+(const A& a)
{
	return Num + a.Num;
}


int A::operator+(int Num)
{
	return this->Num += Num;
}

int A::operator+(const B& b)
{
	return Num + b.Num;
}


int main()
{
	A a;
	B b;
	a.Num = 50;
	b.Num = 100;
	a.operator+(10);
	//here a+10 正确，但是如果写成了10+a， 这样是不正确的
	cout << a.Num << endl;
	int Num = a + b;
	cout << Num << endl;
}