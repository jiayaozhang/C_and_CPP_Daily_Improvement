## STL - 函数对象

### 函数对象概念

概念：
* 重载函数调用操作符的类，其对象常称为函数对象
* 函数对象使用重载的()时，行为类似函数调用，也叫仿函数

本质：
* 函数对象(仿函数)是一个类，不是一个函数

函数对象使用
特点：
* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
* 仿函数写法非常灵活，可以作为参数进行传递

### 谓词概念

概念：
* 返回bool类型的仿函数称为谓词
* 如果operator()接受一个参数，那么叫做一元谓词
* 如果operator()接受两个参数，那么叫做二元谓词

总结：参数只有一个的谓词，称为一元谓词

### 内建函数对象意义
![image](https://user-images.githubusercontent.com/38579506/130352600-503551c8-9d02-49ce-9562-8dae7f1830d2.png)

![image](https://user-images.githubusercontent.com/38579506/130352605-0d3918ed-5160-4a9f-9e9f-8ae3de4a311e.png)

### 算术仿函数

![image](https://user-images.githubusercontent.com/38579506/130352622-6cfe73a2-ccf4-44e5-a3df-8b7c1f943148.png)

总结：使用内建函数对象时，需要引入头文件 #include <functional>
  
### 关系仿函数
  
![image](https://user-images.githubusercontent.com/38579506/130352633-873efe97-2bea-4329-9ef8-e905fd98d300.png)

  
总结：关系仿函数中最常用的就是greater<>大于

### 逻辑仿函数
  
![image](https://user-images.githubusercontent.com/38579506/130352659-678f8b0f-33c9-4382-abfa-d81dd6558a3e.png)

  
