#include<iostream>
#include<thread>
#include<mutex>
#include<atomic>
#include<deque>
#include <condition_variable>
#include<semaphore>

//LeastMaxValue
std::counting_semaphore<5> csem(0);
std::binary_semaphore bsem(0);


void task()
{
    std::cout << "Ready to recv signal \n" << std::endl;
    bsem.acquire();
    std::cout << "acquire end \n"<< std::endl;
}

int main()
{
    std::thread t0 (task);
    std::thread t1 (task);
    std::thread t2 (task);
    std::thread t3 (task);
    std::thread t4 (task);
    std::cout << "ready to signal : release\n" << std::endl;
    csem.release();
    std::cout << "signal end \n" << std::endl;
    t0.join();
    t1.join();
    t2.join();
    t3.join();
    t4.join();
}