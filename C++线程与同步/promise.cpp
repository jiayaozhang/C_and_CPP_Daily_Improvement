#include<iostream>
#include<thread>
#include<mutex>
#include<future>
#include<condition_variable>


void task(int a, int b, std::promise<int>& ret)
{
    int ret_a = a * a;
    int ret_b = b * 2;
    ret.set_value(ret_a + ret_b);
}

int main()
{
    int ret = 0;
    std::promise<int> p;
    std::future<int>f = p.get_future();
    std::thread t(task, 1, 2, std::ref(p));
    std::cout << "return value is " << f.get() << std::endl;
    t.join();
}