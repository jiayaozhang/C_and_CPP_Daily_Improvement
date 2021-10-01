高级语言里边，比方C++，堆里边存放你动态分配的变量，比方用malloc或new函数。程序自动分配的栈不是你能利用的，而是程序自身用它来存放一些函数参数啊，临时变量啊，返回地址什么的。如果你想在程序中用到栈，那么就得自己定义栈的结构，也可以用标准库中的vector，差不多就是个栈，先进后出嘛。在C++里边，堆内存用的地方很多，栈么……
当然，如果你是写汇编语言的，那么栈段就是经常用到的了，因为得手动保存临时变量什么的，堆反而用的不是很多。
引用声明！
C++的复杂在于提供了太多的内存模型，我们知道内存自身是一块存东西的地方，它本身没有模型的说法，当然可能有不同的硬件区域，它的功能是人为的内存模型控制的。

C++有太多可以存放对象的地方：
在C++中，内存分成5个区，他们分别是堆、栈、自由存储区、全局/静态存储区和常量存储区。
1.栈，就是那些由编译器在需要的时候分配，在不需要的时候自动清楚的变量的存储区。里面的变量通常是局部变量、函数参数等。
2.堆，就是那些由new分配的内存块，他们的释放编译器不去管，由我们的应用程序去控制，一般一个new就要对应一个delete。如果程序员没有释放掉，那么在程>序结束后，操作系统会自动回收。
3.自由存储区，就是那些由malloc等分配的内存块，他和堆是十分相似的，不过它是用free来结束自己的生命的。
4.全局/静态存储区，全局变量和静态变量被分配到同一块内存中，在以前的C语言中，全局变量又分为初始化的和未初始化的，在C++里面没有这个区分了，他们共同占用同一块内存区。
5.常量存储区，这是一块比较特殊的存储区，他们里面存放的是常量，不允许修改（当然，你要通过非正当手段也可以修改）

对象可以放到堆里面、栈里面、全局/静态变量存储区里面。

提供了太多的访问方式：
变量里面是对象；
指针；
引用；
