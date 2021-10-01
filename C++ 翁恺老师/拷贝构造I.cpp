#include<iostream>
#include<string>
using namespace std;

static int objectCount = 0;

class HowMany {
public:
    HowMany() { objectCount++; print("howmany()"); }
    void print(const string& msg = "") {
        if (msg.size()!= 0) cout << msg << ":";
        cout << "objectCount = " << objectCount << endl;
    }
    ~HowMany() {
        objectCount--;
        print("~Howmany()");
    }
};

HowMany f(HowMany x) {
    cout << "begin of f" << endl;
    x.print("x argument inside f()");
    cout << "end of f" << endl;
    return x;
}

int main()
{
    HowMany h;
    h.print("after construction of h");
    HowMany h2 = f(h);
    h.print("after call to f()");
}

拷贝构造的定义，不是字节对字节的拷贝，而是成员变量对成员变量的拷贝 如果成员变量有指针，指针的拷贝就是指向同一片区域，有const&：就是捆绑同一个变量

