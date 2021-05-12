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
    

