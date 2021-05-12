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
  
  int len_foo () {
      return 5;
      }

  
  int  main(){
  //局部变量栈，在栈上开辟空间
  char arr1[10];
  char arr2[LEN];
  int len=5;
  char arr3[len];
  return 0;
 }
 ```

//时期
1. 编译期  cpp -> 编译期 --> exe 
2. 运行期  双击 exe, exe被执行的时期


