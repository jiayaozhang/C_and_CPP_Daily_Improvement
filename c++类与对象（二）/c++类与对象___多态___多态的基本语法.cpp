#include <iostream>
using namespace std;
#include<string>

//多态分2类
//静态多态： 函数重载和运算符重载属于静态多态 复用函数名
//动态多态:  派生类和虚函数实现运行时多态

//静态多态和动态多态的区别
//静态多态的函数地址早绑定 - 编译阶段确定函数地址
//动态多态的函数地址晚绑定 - 运行阶段确定函数地址

class Animal
{
public:
	//speak 函数就是虚函数
	//函数前面加上virtual关键字，变成虚函数， 那么编译器在编译的时候就不能确定函数调用了
	//虚函数 
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};


class Cat : public Animal
{
public:

	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

class Dog : public Animal
{
public:
	//重写 函数返回值类型 函数名 参数列表 完全相同
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};



//执行函数
//地址早绑定， 在编译阶段确定函数地址
//如果想让猫说话，这个函数的地址就不能提前绑定 需要在运行阶段绑定



void doSpeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}
int main()
{
	test01();
	//test02();
	system("pause");
	return 0;
}

//动态多态满足条件
//1.有继承
//2.子类重写父类的虚函数


//动态多态的使用
//父类的指针或者引用 执行子类对象