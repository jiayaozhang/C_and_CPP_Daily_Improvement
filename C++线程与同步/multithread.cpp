#include<iostream>
#include<thread>

void func(int a)
{
       // std::cout << "hello world! \n";
        std::this_thread::sleep_for(std::chrono::microseconds(50));
}

int main()
{
    int a = 0;
    std::thread thread1(func, a);
    std::cout << "thread id is" << thread1.get_id() << std::endl;
    std::cout << "support num is " << thread1.hardware_concurrency() << std::endl;
    //while (true);
    thread1.join();
    // thread1.detach();
}