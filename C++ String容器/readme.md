
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

## 3. string赋值操作

给string字符串进行赋值

![image](https://user-images.githubusercontent.com/38579506/128688747-e0704ade-9923-403f-9464-9b59dbe154d1.png)

## 3. string查找和替换

功能描述：
1. 查找： 查找指定字符串是否存在
2. 替换： 在指定的位置替换字符串

![image](https://user-images.githubusercontent.com/38579506/128692185-96111252-7699-4dd8-8ed2-043b67015ba3.png)

![image](https://user-images.githubusercontent.com/38579506/128693274-c745b9d8-1e8e-46af-9841-26c24c22eed6.png)

## 4. string字符串比较

功能描述：
字符串之间的比较

比较方式：
字符串比较是按字符的ASCII码进行对比

=0 返回0
> 返回 1
< 返回-1

![image](https://user-images.githubusercontent.com/38579506/128693665-fe9f7ab6-fe38-4018-8223-95c33c76a141.png)

## 5. string字符存取

string中单个字符存取方式有两种

![image](https://user-images.githubusercontent.com/38579506/128694353-ae69d01e-8814-4f30-9d37-40828db37534.png)

## 6. string插入和删除

功能描述：
对string字符串进行插入和删除字符操作

函数原型：
![image](https://user-images.githubusercontent.com/38579506/128695357-b486a008-f5bb-4364-bfd8-73c321e3388a.png)


## 7. string子串

功能描述：
从字符串中获得想要的子串

函数原型：

![image](https://user-images.githubusercontent.com/38579506/128695992-9b029387-a5bc-42f3-899c-a5a3990d0fd5.png)

