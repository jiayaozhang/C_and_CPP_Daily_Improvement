declared without initial value

must be initialized using constructor initializer list

class X{
public:

        int& m_y;
        X(int& a);
       };

X::X(int& a) : m_y(a) {}


引用再研究
1.类的成员为引用类型（无法在声明时初始化）
必须在构造函数初始化列表该成员变量初始化

2.函数返回值为引用类型,写在return后一定是直接的变量
　　与指针机制相同，指针不能返回一个本地变量的地址，引用也不能返回一个本地变量(引用的实质是指针常量)，当返回一个引用，可将其用作左值和右值

3,函数参数为引用类型（参数传递）,若传递参数不希望被修改,一般函数参数为const, 即const typename &
　　传递的参数需要为左值(即有已有location),所以计算结果不能传递(编译器将计算结果保存在匿名的const iny 临时变量,所以当函数参数为const 引用时，可以传递计算结果)
　　当不希望传递的引用参数不会被函数修改，用const修饰函数参数
