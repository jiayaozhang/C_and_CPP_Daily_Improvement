#include <iostream>

using namespace std;

class A
{
public:
	~A();
	int Num;
};

A::~A()
{
	cout << "Release" << endl;
}

class AutoPointer
{
public:
	AutoPointer(A*);
	~AutoPointer();
	A* GetA() { return BindPointer; };
	A* operator->();
private:
	A* BindPointer;
};

AutoPointer::AutoPointer(A* Pointer)
{
	BindPointer = Pointer;
}


AutoPointer::~AutoPointer()
{
	if (BindPointer)
	{
		delete BindPointer;
		BindPointer = nullptr;
	}
}

A* AutoPointer::operator->()
{
	return BindPointer;
}

void Fun()
{
	A* a = new A();
	AutoPointer pA(a);
	pA->Num = 100;
	cout << pA->Num << endl;
}

int main()
{
	Fun();
	system("pause");
	return 0;
}