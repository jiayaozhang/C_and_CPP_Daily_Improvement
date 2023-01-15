#include <iostream>
using namespace std;

class A
{
public:
	A& operator++();
	A& operator++(int);

};

A& A::operator++()
{
	cout << "前向" << endl;
	return *this;
}

A& A::operator++(int)
{
	cout << "后向" << endl;
	return *this;
}

int main()
{
	A a;
	++a;
	a++;
	system("pause");
	return 0;
}