#include <iostream>
using namespace std;

class A
{
public:
	A* operator->();

public:
	int Num;
};

A* A::operator->()
{
	return this;
}

int main()
{
	A a;
	a->Num = 100;
	cout << a->Num << endl;
	system("pause");
	return 0;
}

