if B is a A, you can use a B anywhere an A can be used

if B is a A, then everything that is true for A is also true for B

#include<iostream>
using namespace std;

class A{
    int i;
public :
    
    A():i(10) {}
};

class B: public A{

};


int main()
{
    A a;
    B b;
    
    cout << a.i << "" << b.i << endl;
    cout << sizeof(a) << " " << sizeof(b) << endl;
    int *p = (int*)&a;
    cout << p << " " << *p << endl;
    *p = 20;
    cout << a.i << endl;
    p = (int*)&b;
    cout << p << " " << *P << endl;
    return 0;
}

// 10 10 
// 4 4 
//0x7ff57640 10
//0x7ffefd40 10
