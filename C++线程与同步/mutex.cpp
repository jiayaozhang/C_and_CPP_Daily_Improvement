#include<iostream>
#include<thread>
#include<mutex>

std::mutex mtx;
int globalVariable = 0;

void task1()
{
    for(int i = 0 ; i < 1000000; i++)
    {
        mtx.lock();
        globalVariable++;
        globalVariable--;
        mtx.unlock();
    }
}

int main()
{
    std::thread t1(task1);
    std::thread t2(task1);

    t1.join();
    t2.join();

    std::cout << "Current Value is " << globalVariable << std::endl;
}