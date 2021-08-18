# set/ multiset 容器
## set基本概念

简介：
* 所有元素都会在插入时自动被排序

本质：
1. set/multiset属于关联式容器，底层结构是用二叉树实现。
2. set和multiset区别：
3、 set不允许容器中有重复的元素
4. multiset允许容器中有重复的元素

## set构造和赋值

功能描述：创建set容器以及赋值

![image](https://user-images.githubusercontent.com/38579506/129867066-9d9627f0-fc15-4547-90b6-39e9a4330acc.png)

总结：
* set容器插入数据时用insert
* set容器插入数据的数据会自动排序

## set大小和交换

功能描述：
* 统计set容器大小以及交换set容器

函数原型：
* size(); //返回容器中元素的数目
* empty(); //判断容器是否为空
* swap(st); //交换两个集合容器

总结：
* 统计大小 --- size
* 判断是否为空 --- empty
* 交换容器 --- swap

## set插入和删除

功能描述：
* set容器进行插入数据和删除数据

函数原型
* insert(elem); //在容器中插入元素。
* clear(); //清除所有元素
* erase(pos); //删除pos迭代器所指的元素，返回下一个元素的迭代器。
* erase(beg, end); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
* erase(elem); //删除容器中值为elem的元素。

总结

![image](https://user-images.githubusercontent.com/38579506/129867624-0732695e-e05b-43c8-a890-9f62a0d8411b.png)

## set查找和统计

功能描述：
* 对set容器进行查找数据以及统计数据

函数原型：
* find(key); //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
* count(key); //统计key的元素个数

![image](https://user-images.githubusercontent.com/38579506/129867740-8af9e8aa-a1f0-49d1-9925-b412824f8e40.png)

## set与multiset区别

学习目标：
* 掌握set和multiset的区别

区别：
* set不可以插入重复数据，而multiset可以
* set插入数据的同时会返回插入结果，表示插入是否成功
* multiset不会检测数据，因此可以插入重复数据

总结：
* 如果不允许插入重复数据可以利用set
* 如果需要插入重复数据利用multiset

## pair对组创建

功能描述：
* 成对出现的数据，利用对组可以返回两个数据

![image](https://user-images.githubusercontent.com/38579506/129867988-515a078e-ccd9-4f6c-b78d-693df484ba42.png)

总结：
* 两种方式都可以创建对组，记住一种即可

## set容器排序

学习目标：
* set容器默认排序规则为从小到大，掌握如何改变排序规则

主要技术点：
* 利用仿函数，可以改变排序规则

总结：
* 对于自定义数据类型，set必须指定排序规则才可以插入数据
