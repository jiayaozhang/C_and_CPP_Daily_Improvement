#include<iostream>
#include<thread>
#include<mutex>
#include<atomic>

std::mutex mtx1;
std::mutex mtx2;

std::atomic<int> globalVariable = 0;

// int globalVariable = 0;

void task1()
{
    for(int i = 0 ; i < 1000000; i++)
    {
        std::lock_guard<std::mutex> lock1(mtx1);
        std::lock_guard<std::mutex> lock2(mtx2);
        
        std::unique_lock<std::mutex> lock3(mtx1);
        lock3.unlock();

        globalVariable++;
        globalVariable--;
    }
}


void task2()
{
    for(int i = 0 ; i < 1000000; i++)
    {
        globalVariable++;
        globalVariable--;
    }
}


int main()
{
    std::thread t1(task1);
    std::thread t2(task1);

    t1.join();
    t2.join();

    std::thread t3(task2);
    std::thread t4(task2);

    t3.join();
    t4.join();

    std::cout << "Current Value is " << globalVariable << std::endl;
}