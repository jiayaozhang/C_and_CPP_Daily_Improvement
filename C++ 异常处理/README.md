# 异常处理

1. 为什么需要异常处理
2. c++异常处理如何写
3. vs编译器的设置
4. 如何抛异常，异常的类型


```
#include "stdafx.h"
#include <iostream>
using namespace std;

void foo(int m, int n){

    try{
      //跑出异常
     // int t = m / n;
       throw "hello";
    }
    
    catch(){
    cout << "error" << endl;
    }
    
    int t = m / n ;
 }
 
int main(int argc, char* argv[])
{
    foo(1, argc - 1)
    return 0;
}

```

