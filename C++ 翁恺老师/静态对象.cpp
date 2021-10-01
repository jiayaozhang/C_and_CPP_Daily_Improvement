1.在C中static同时有两种完全不同的含义：
a.表示存储是持久存储
b.访问性是有局限的
2.在函数内部定义的static变量，存储在全局变量区，但在函数外无法使用，因为函数外部的其他函数不知道此变量存储的地方。但可以在此函数中返回static变量的指针，共其他函数使用。
3.在C中，全局变量或函数前面加static表示此变量或函数只能在此文件中使用。在局部变量前加static表示此变量存储在全局数据区中。



c++ static使用
static free functions 无效
static global variables 无效
static local variables 全局存储
static member variables 对象之间共享
static member function 对象之间共享，只能访问静态变量或静态函数

若函数中一个类的对象为static，则其在链接时分配空间，在第一次进函数时初始化。
若对象是静态的，则C++保证只构造和析构一次

//--------------------------------------------------------------------

suppose we have a class
class X{

    X(int, int);
    ~X();
    ...
  };

And a function with a static X object

void f(){

    static X my_X(10,20);
    ...
 }
 
