
# Deque 容器

## 1. Deque容器基本概念

功能：
双端数组，可以对头端进行插入删除操作

deque与vector区别：
vector对于头部的插入删除效率低，数据量越大，效率越低
deque相对而言，对头部的插入删除速度回比vector快
vector访问元素时的速度会比deque快,这和两者内部实现有关

![image](https://user-images.githubusercontent.com/38579506/128727189-a002b246-903e-436d-a3c0-a7a90b9548ab.png)


deque内部工作原理:

deque内部有个中控器，维护每段缓冲区中的内容，缓冲区中存放真实数据
中控器维护的是每个缓冲区的地址，使得使用deque时像一片连续的内存空间

![image](https://user-images.githubusercontent.com/38579506/128727248-5ca019a1-bacc-4319-aa0e-473e965c8f50.png)

deque容器的迭代器也是支持随机访问的

## 2. Deque构造函数

功能：deque容器构造

![image](https://user-images.githubusercontent.com/38579506/128727377-55ecca9e-037f-4eb5-8f4d-93c145823e3b.png)

总结：deque容器和vector容器的构造方式几乎一致，灵活使用即可

## 3. Deque赋值操作

功能：给deque进行赋值

![image](https://user-images.githubusercontent.com/38579506/128727561-8a16b03c-3355-4a52-aed3-fd5b007dc553.png)

总结：deque赋值操作也与vector相同，需熟练掌握

## 3. Deque大小操作

功能：给deque容器的大小进行操作

![image](https://user-images.githubusercontent.com/38579506/128727671-68b09d59-bdf7-4383-acef-3f78e8b66eed.png)

![image](https://user-images.githubusercontent.com/38579506/128727700-671f88ee-ba81-4eae-ad8b-5307279ea28e.png)

总结：
deque没有容量的概念
判断是否为空 --- empty
返回元素个数 --- size
重新指定个数 --- resize

## 4. Deque插入和删除

功能：给deque容器中插入和删除数据

函数原型：

![image](https://user-images.githubusercontent.com/38579506/128727861-a2f78ea9-80fb-4ce4-a275-6f2387ef2c80.png)

总结：
插入和删除提供的位置是迭代器！
尾插 --- push_back
尾删 --- pop_back
头插 --- push_front
头删 --- pop_front

## 4. Deque数据存取

功能：给deque中的数据的存取操作

函数原型：
![image](https://user-images.githubusercontent.com/38579506/128728003-d547a8c2-c997-40b6-a375-85deb98367ae.png)

总结：
除了用迭代器获取deque容器中元素，[ ]和at也可以
front返回容器第一个元素
back返回容器最后一个元素

## 4. Deque排序

功能：利用算法实现对deque容器进行排序

算法： sort(iterator beg, iterator end) //对beg和end区间内元素进行排序

总结：sort算法非常实用，使用时包含头文件 algorithm即可
