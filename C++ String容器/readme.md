
# String 基本概念

## 1. 本质： string是c++风格的字符串，而string本质上是一个类

string和char * 区别：
1. char * 是一个指针
2. string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。

特点：
string 类内部封装了很多成员方法
例如：查找find，拷贝copy，删除delete 替换replace，插入insert
string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责

## 2. string构造函数

构造函数原型：

![image](https://user-images.githubusercontent.com/38579506/128685566-b00fc765-09ce-46b3-a99d-f5c4ce92196c.png)

