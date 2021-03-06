const Currency the_raise(42,38)
    
//整个对象都是const，这个对象里面的值是不能被修改的。
//我们要知道里面的函数会不会修改里面的成员变量，会修改变量的函数是不能执行的，
//我们需要知道这个对象里面哪些函数能执行，哪些不能执行
    
int Date::get_day() const {
…
}

//----------------------------------------------------

#include<iostream>
using namespace std;

class A{
    int i;
public:
    A() : i(0){}
    void f() {cout << "f()" << endl;}
    void f() const {cout << "f() const" << endl;}
};

int main()
{
    const A a;
    a.f();
    
    return 0;
}

//----------------------------------------------------

关于this：
每个对象都拥有一个this指针，this指针记录对象的内存地址，当我们调用成员函数时，成员函数默认第一个参数为T* const register //this，大多数编译器通过ecx寄存器传递this指针，通过 this 这个隐式参数可以访问该对象的数据成员。

类的成员函数为什么不能用static和const同时修饰？
类中用const修饰的函数通常用来防止修改对象的数据成员，函数末尾的const是用来修饰this指针，防止在函数内对数据成员进行修改，而静态//函数中是没有this指针的，无法访问到对象的数据成员，与C++ static语义冲突，所以不能。

this指针注意点
1、C++中this关键字是一个指向对象自己的一个常量指针，不能给this赋值；
2、只有成员函数才有this指针，友元函数不是类的成员函数，没有this指针；
3、同样静态函数也是没有this指针的，静态函数如同静态变量一样，不属于具体的哪一个对象；
4、this指针作用域在类成员函数内部，在类外也无法获取；
5、this指针并不是对象的一部分，this指针所占的内存大小是不会反应在sizeof操作符上的。

this指针的使用
1、在类的非静态成员函数中返回类对象本身的时候，直接使用 return //this，比如类的默认取址运算符重载函数，另外，也可以返回this的引用，这样可以像输入输出流那样进行“级联”操作；
2、修改类成员变量或参数与成员变量名相同时，如this->a = a （写成a = a编译不过)；
3、在class定义时要用到类型变量自身时，因为这时候还不知道变量名，就用this这样的指针来使用变量自身。
