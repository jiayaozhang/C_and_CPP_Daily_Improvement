
# Vector基本概念

## 功能：

vector数据结构和数组非常相似，也称为单端数组

## vector与普通数组区别：

不同之处在于数组是静态空间，而vector可以动态扩展

## 动态扩展：

并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间

![image](https://user-images.githubusercontent.com/38579506/128698360-76f6a637-4cd6-4520-a2c9-240087ffb816.png)

vector容器的迭代器是支持随机访问的迭代器

## vector构造函数

功能描述： 创建vector容器

## 函数原型

![image](https://user-images.githubusercontent.com/38579506/128698452-2b323200-b905-4819-a72e-f3d84208910e.png)

## vector赋值操作

功能描述： 给vector容器进行赋值

函数原型：

![image](https://user-images.githubusercontent.com/38579506/128700362-b1764d06-6964-4399-8b5b-c106945c0727.png)
![image](https://user-images.githubusercontent.com/38579506/128700379-dc1eb206-469a-4b9f-ba16-ecbcc3c54367.png)

总结： vector赋值方式比较简单，使用operator=，或者assign都可以

## vector容量和大小

功能描述： 对vector容器的容量和大小操作

![image](https://user-images.githubusercontent.com/38579506/128701310-abda8009-2558-4ed2-8237-9e5f64c8445a.png)

总结：
1. 判断是否为空 --- empty
2. 返回元素个数 --- size
3. 返回容器容量 --- capacity
4. 重新指定大小 --- resize


## vector数据存取

功能描述： 对vector中的数据的存取操作

函数原型：

![image](https://user-images.githubusercontent.com/38579506/128726404-70f404b0-a61a-45c2-8956-25df4c775e4c.png)

## vector互换容器

功能描述： 实现两个容器内元素进行互换

函数原型：swap(vec); // 将vec与本身的元素互换

总结：swap可以使两个容器互换，可以达到实用的收缩内存效果

## vector预留空间

功能描述： 减少vector在动态扩展容量时的扩展次数

函数原型：reserve(int len); //容器预留len个元素长度，预留位置不初始化，元素不可访问。

总结：如果数据量较大，可以一开始利用reserve预留空间




