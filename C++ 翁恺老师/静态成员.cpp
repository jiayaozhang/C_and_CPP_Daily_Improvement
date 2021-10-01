static 对象


6.全局的static对象，在链接时分配空间，在函数一运行，main函数运行之前构造，
 初始化。程序结束时析构。

7.多个文件之间的全局变量初始化无确定顺序。

//---------------------------------------------------------------------

#include<iostream>
#include<string>
using namespace std;

class A{
public:
    A() {  }
    void print() { cout << i << endl; }
    void set(int i) {this->i = i; }
   static  int i;
};

int A::i = 20;

int main()
{
    A a, b;
    a.set(10);
   /* b.print();*/
  /*  cout << a.i << endl;
    cout << A::i << endl;*/
    return 0;
}

//----------------------------------------------------------------------------
