#include<iostream>
#include <string>
using namespace std;

class A
{
public:
	A();
	A(A&);
};

A::A()
{
	cout << "¹¹Ôì" << endl;
}

A::A(A&)
{
	cout << "¿½±´" << endl;
}

A Fun()
{
	A a;
	return a;
}

int main()
{
	A a;
	A a1 = a;
	Fun();
	system("pause");
	return 0;
}

