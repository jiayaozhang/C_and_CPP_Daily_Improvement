# C++ 特性
 
 1. cppreference.com
 2. 现代c++教程
 3. c++ 1x 系列，为传统的c++注入了大量的特性使得整个c++变得像一门现代化的语言

关键词
1. nullptr与constexpr
2. 类型推导 auto, decltype, 尾返回类型
3.区间迭代 基于范围的for循环
4.初始化列表 std::initializer_list
5.模板增强 ： 外部模板，尖括号，类型别名模板，变长参数模板
6.委托构造，继承构造

语言运行期的强化
1. lambda表达式 值捕获，引用捕获，隐式捕获，表达式捕获
2. 函数对象包装器 （std::function, std::bind/ std::placeholder）
3. 右值引用 右值引用和左值引用， 移动语义


容器：
1. std::array
2. std::forward_list
3. std::unordered_set

智能指针
1. 引用计数
2. std::shared_ptr
3. std::make_shared
4. std::unique_ptr
5. std::weak_ptr

正则表达式
普通字符，特殊字符

并发与并行
1. std::thread
2. std::mutex
3. std::unique_lock
4. std::future
5. std::packaged_task
6. std::condition_variable

