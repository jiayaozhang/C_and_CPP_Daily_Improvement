
# List 容器

## list 基本概念

功能：将数据进行链式存储

链表（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链表实现的

链表的组成：链表由一系列结点组成

结点的组成：一个是存储数据元素的数据域， 另一个是存储下一个结点地址的指针域

STL的链表是一个双向循环链表

![image](https://user-images.githubusercontent.com/38579506/129047732-d88e0af5-ad0b-4835-954f-1db216eaac43.png)

由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于双向迭代器

list的优点：
1. 采用动态存储分配，不会造成内存浪费和溢出
2. 链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素

list的缺点：
1.链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大

List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的。
总结：STL中List和vector是两个最常被使用的容器，各有优缺点

## list 构造函数

功能描述：

创建list容器

函数原型：

![image](https://user-images.githubusercontent.com/38579506/129048142-9491ecdd-16c8-4901-a49e-b158ae9e9041.png)

总结：list构造方式同其他几个STL常用容器，熟练掌握即可

## list 赋值和交换

功能描述：

给list容器进行赋值，以及交换list容器

函数原型：

![image](https://user-images.githubusercontent.com/38579506/129048281-595f232c-f940-4878-a562-ebb1e5de8aed.png)

总结：list赋值和交换操作能够灵活运用即可


## list 大小操作

功能描述：

对list容器的大小进行操作

函数原型：

![image](https://user-images.githubusercontent.com/38579506/129048362-44379fd9-0a9b-49b4-a2b8-fcd5b83ee3fe.png)

总结：
判断是否为空 --- empty
返回元素个数 --- size
重新指定个数 --- resize

## list 插入和删除

功能描述：

对list容器进行数据的插入和删除

![image](https://user-images.githubusercontent.com/38579506/129048457-be6bb74b-45fd-498f-a08f-6ad91fe02786.png)
![image](https://user-images.githubusercontent.com/38579506/129048491-a6b03abe-bd5e-4752-986b-a0b7664d1dff.png)


总结：
1. 尾插 --- push_back
2. 尾删 --- pop_back
3. 头插 --- push_front
4. 头删 --- pop_front
5. 插入 --- insert
6. 删除 --- erase
7. 移除 --- remove
8. 清空 --- clear

## list 数据存取

功能描述：

对list容器中数据进行存取

函数原型：

![image](https://user-images.githubusercontent.com/38579506/129048997-9529c139-70bf-4d4a-8411-8504760f9e1b.png)

![image](https://user-images.githubusercontent.com/38579506/129049036-21982191-df70-433e-ac53-856ab9251060.png)

## list 反转和排序

功能描述：

将容器中的元素反转，以及将容器中的数据进行排序

![image](https://user-images.githubusercontent.com/38579506/129049116-b1e3e682-2dc3-4836-9b87-871fdf70581a.png)

![image](https://user-images.githubusercontent.com/38579506/129049149-46224bef-3515-4e3c-bf90-af674f59af24.png)


## list 排序案例

案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序

总结：
对于自定义数据类型，必须要指定排序规则，否则编译器不知道如何进行排序
高级排序只是在排序规则上再进行一次逻辑规则制定，并不复杂
