# Map/multimap 容器

## map基本概念

简介：
1. map中所有元素都是pair
2. pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
3. 所有元素都会根据元素的键值自动排序

本质：
* map/multimap属于关联式容器，底层结构是用二叉树实现。


优点：
1. 可以根据key值快速找到value值
2. map和multimap区别：
3. map不允许容器中有重复key值元素
4. multimap允许容器中有重复key值元素


## map构造和赋值

功能描述：
对map容器进行构造和赋值操作

![image](https://user-images.githubusercontent.com/38579506/130345020-0c2a3940-517c-4dfc-ad02-5390a8c40820.png)

总结：map中所有元素都是成对出现，插入数据时候要使用对组


## map大小和交换

功能描述：

* 统计map容器大小以及交换map容器


函数原型

![image](https://user-images.githubusercontent.com/38579506/130345046-becdcf82-5288-41c4-ba87-6a89a21d6cca.png)


总结：

![image](https://user-images.githubusercontent.com/38579506/130345059-7c086fa7-8863-4324-988b-c779eaf3bcd3.png)


## map插入和删除

功能描述：
* map容器进行插入数据和删除数据

![image](https://user-images.githubusercontent.com/38579506/130345081-6a9df23d-20dc-456e-aacf-f4f4d6c8a73b.png)

![image](https://user-images.githubusercontent.com/38579506/130345088-d06fab90-8d55-4d6c-831f-57dc8275921a.png)


## map查找和统计

![image](https://user-images.githubusercontent.com/38579506/130345103-d56ffd21-d513-4d62-9c93-c8a9eb708df7.png)


## map容器排序

学习目标：
*map容器默认排序规则为 按照key值进行 从小到大排序，掌握如何改变排序规则

主要技术点:
*利用仿函数，可以改变排序规则

总结：
*利用仿函数可以指定map容器的排序规则
*对于自定义数据类型，map必须要指定排序规则,同set容器

## 案例-员工分组

3.10.1 案例描述

* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
* 员工信息有: 姓名 工资组成；部门分为：策划、美术、研发
* 随机给10名员工分配部门和工资
* 通过multimap进行信息的插入 key(部门编号) value(员工)
* 分部门显示员工信息

3.10.2 实现步骤
* 1. 创建10名员工，放到vector中
* 2. 遍历vector容器，取出每个员工，进行随机分组
* 3. 分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
* 4. 分部门显示员工信息
