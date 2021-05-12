# nullptr and constexptr

![image](https://user-images.githubusercontent.com/38579506/117966455-95e9ea00-b32c-11eb-9367-bd80badc6c59.png)

 ``` 
  #include "stdafx.h"
  #include <iostream>
  
  int foo (char* p) {
      std::cout << "char*" << std::endl;
  }
  
  
  int foo (int n) {
      std::cout << "int*" << std::endl;
  }
  
  int  main(){
  
  char *p = NULL;
  foo(nullptr);  //nullptr表示空指针，本质还是0,但是具备了类型  foo((char*)NULL);
  return 0;
 }
 ```
 
 
 ## constexptr
 
  ``` 
  #include "stdafx.h"
  #define LEN 10
  
  //常量表达式
  constexpr int len_foo () {
      return 5;
      }

  
  int  main(){
  //局部变量栈，在栈上开辟空间
  char arr1[10];
  char arr2[LEN];
  const int len=5;
  char arr3[len]; //编译器在运行期间才能确定该变量的大小，从而分配空间
  
  char arr5[len_foo()+5]; //前面加了constexpr后 变得合法了
  return 0;
 }
 ```

//时期
1. 编译期  cpp -> 编译期 --> exe 
2. 运行期  双击 exe, exe被执行的时期


